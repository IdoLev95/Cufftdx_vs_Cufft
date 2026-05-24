#pragma once

#include <type_traits>

#include <cuda_runtime.h>
#include <cufft.h>
#include <cufftXt.h>

#include "common.hpp"

template <typename T>
struct CorrelateInfo {
    cufft_complex_t<T>* h_freq;
    int                 fft_size;
    T                   inv_n;
};

// Load callbacks fired by the inverse plan: each value the IFFT would read
// from global memory is replaced by X[k] * conj(H[k mod N]) / N, fusing the
// pointwise correlate and the 1/N scale into the IFFT's input load.
__device__ inline cufftComplex correlate_load_c(void* in, size_t k, void* ci, void*) {
    const auto* info = static_cast<const CorrelateInfo<float>*>(ci);
    const cufftComplex a = static_cast<const cufftComplex*>(in)[k];
    const cufftComplex h = info->h_freq[k % info->fft_size];
    return {(a.x * h.x + a.y * h.y) * info->inv_n,
            (a.y * h.x - a.x * h.y) * info->inv_n};
}
__device__ cufftCallbackLoadC correlate_load_c_ptr = correlate_load_c;

__device__ inline cufftDoubleComplex correlate_load_z(void* in, size_t k, void* ci, void*) {
    const auto* info = static_cast<const CorrelateInfo<double>*>(ci);
    const cufftDoubleComplex a = static_cast<const cufftDoubleComplex*>(in)[k];
    const cufftDoubleComplex h = info->h_freq[k % info->fft_size];
    return {(a.x * h.x + a.y * h.y) * info->inv_n,
            (a.y * h.x - a.x * h.y) * info->inv_n};
}
__device__ cufftCallbackLoadZ correlate_load_z_ptr = correlate_load_z;

// Two plans: forward stays plain, inverse carries the load callback. Sharing
// one plan won't work — a load callback fires on every exec, including the
// forward direction, and would corrupt the forward FFT's input.
template <typename T>
class CufftPath {
public:
    using complex = cufft_complex_t<T>;

    CufftPath(int fft_size, int batch, cudaStream_t stream)
        : n_(fft_size), batch_(batch), stream_(stream) {
        CUFFT_CHECK(cufftPlan1d(&fwd_, n_, cufft_c2c_type<T>(), batch_));
        CUFFT_CHECK(cufftPlan1d(&inv_, n_, cufft_c2c_type<T>(), batch_));
        CUFFT_CHECK(cufftSetStream(fwd_, stream_));
        CUFFT_CHECK(cufftSetStream(inv_, stream_));
    }

    ~CufftPath() {
        cufftDestroy(fwd_);
        cufftDestroy(inv_);
        cudaFree(d_info_);
    }

    CufftPath(const CufftPath&)            = delete;
    CufftPath& operator=(const CufftPath&) = delete;

    void forward_filter(complex* h) {
        CUFFT_CHECK(cufft_exec_c2c<T>(fwd_, h, h, CUFFT_FORWARD));
    }

    void run(complex* x, const complex* h_freq) {
        if (!d_info_) install_callback(h_freq);
        CUFFT_CHECK(cufft_exec_c2c<T>(fwd_, x, x, CUFFT_FORWARD));
        CUFFT_CHECK(cufft_exec_c2c<T>(inv_, x, x, CUFFT_INVERSE));
    }

private:
    void install_callback(const complex* h_freq) {
        const CorrelateInfo<T> h_info{const_cast<complex*>(h_freq), n_, T(1) / T(n_)};
        CUDA_CHECK(cudaMalloc(&d_info_, sizeof(h_info)));
        CUDA_CHECK(cudaMemcpyAsync(d_info_, &h_info, sizeof(h_info),
                                   cudaMemcpyHostToDevice, stream_));
        CUDA_CHECK(cudaStreamSynchronize(stream_));

        void* cb = nullptr;
        if constexpr (std::is_same_v<T, float>) {
            CUDA_CHECK(cudaMemcpyFromSymbol(&cb, correlate_load_c_ptr, sizeof(cb)));
            CUFFT_CHECK(cufftXtSetCallback(inv_, &cb, CUFFT_CB_LD_COMPLEX,
                                           reinterpret_cast<void**>(&d_info_)));
        } else {
            CUDA_CHECK(cudaMemcpyFromSymbol(&cb, correlate_load_z_ptr, sizeof(cb)));
            CUFFT_CHECK(cufftXtSetCallback(inv_, &cb, CUFFT_CB_LD_COMPLEX_DOUBLE,
                                           reinterpret_cast<void**>(&d_info_)));
        }
    }

    int               n_;
    int               batch_;
    cudaStream_t      stream_;
    cufftHandle       fwd_    = 0;
    cufftHandle       inv_    = 0;
    CorrelateInfo<T>* d_info_ = nullptr;
};
