#pragma once

#include <cuda_runtime.h>
#include <cufft.h>

#include "common.hpp"

// Pointwise: x[i] = (x[i] * conj(h[i mod N])) * (1/N).
// The 1/N scaling is folded in here so we don't need a second pass.
template <typename T>
__global__ void cufft_correlate_kernel(cufft_complex_t<T>* __restrict__ x,
                                       const cufft_complex_t<T>* __restrict__ h,
                                       int fft_size,
                                       int total,
                                       T   inv_fft_size) {
    const int gtid = blockIdx.x * blockDim.x + threadIdx.x;
    if (gtid >= total) return;

    const int k = gtid % fft_size;
    const auto a = x[gtid];
    const auto b = h[k];

    cufft_complex_t<T> r;
    r.x = (a.x * b.x + a.y * b.y) * inv_fft_size;
    r.y = (a.y * b.x - a.x * b.y) * inv_fft_size;
    x[gtid] = r;
}

// Host-orchestrated correlation. Each iteration issues three things on the
// stream: forward FFT, the pointwise kernel above, and the inverse FFT.
template <typename T>
class CufftPath {
public:
    CufftPath(int fft_size, int batch, cudaStream_t stream)
        : fft_size_(fft_size), batch_(batch), stream_(stream) {
        // C2C is its own inverse plan — same handle works for both directions.
        CUFFT_CHECK(cufftPlan1d(&plan_, fft_size_, cufft_c2c_type<T>(), batch_));
        CUFFT_CHECK(cufftSetStream(plan_, stream_));
    }

    ~CufftPath() { cufftDestroy(plan_); }

    CufftPath(const CufftPath&) = delete;
    CufftPath& operator=(const CufftPath&) = delete;

    // x: in/out signal buffer  [batch * fft_size]
    // h_freq: precomputed FFT(filter)  [fft_size]
    void run(cufft_complex_t<T>* x, const cufft_complex_t<T>* h_freq) {
        CUFFT_CHECK(cufft_exec_c2c<T>(plan_, x, x, CUFFT_FORWARD));

        const int total = fft_size_ * batch_;
        constexpr int block = 256;
        const int grid = (total + block - 1) / block;
        const T inv_n = T(1) / static_cast<T>(fft_size_);
        cufft_correlate_kernel<T><<<grid, block, 0, stream_>>>(x, h_freq, fft_size_, total, inv_n);

        CUFFT_CHECK(cufft_exec_c2c<T>(plan_, x, x, CUFFT_INVERSE));
    }

    // Precompute H = FFT(h) using the same plan, so verify compares like-for-like.
    void forward_filter(cufft_complex_t<T>* h_inout) {
        CUFFT_CHECK(cufft_exec_c2c<T>(plan_, h_inout, h_inout, CUFFT_FORWARD));
    }

private:
    int          fft_size_;
    int          batch_;
    cudaStream_t stream_;
    cufftHandle  plan_ = 0;
};
