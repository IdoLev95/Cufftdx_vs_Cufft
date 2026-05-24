#pragma once

#include <cuda_runtime.h>
#include <cufftdx.hpp>

#include "common.hpp"

// Single fused kernel: forward FFT, conjugate-multiply by the precomputed
// filter spectrum, inverse FFT, scale by 1/N, store. The whole pipeline
// lives in registers + shared memory — no global-memory round trip between
// the FFT, the pointwise multiply, and the IFFT.
template <class FFT, class IFFT>
__launch_bounds__(FFT::max_threads_per_block)
__global__ void cufftdx_correlate_kernel(typename FFT::value_type*       data,
                                         const typename FFT::value_type* h_freq,
                                         typename FFT::workspace_type    ws_fwd,
                                         typename IFFT::workspace_type   ws_inv) {
    using complex_t = typename FFT::value_type;
    using scalar_t  = typename complex_t::value_type;

    constexpr unsigned int N   = cufftdx::size_of<FFT>::value;
    constexpr unsigned int EPT = FFT::elements_per_thread;

    // Shared-memory backing as raw bytes so this template can coexist in the
    // same TU as another instantiation with a different complex_t alignment.
    extern __shared__ __align__(16) unsigned char shared_bytes[];
    auto* shared_mem = reinterpret_cast<complex_t*>(shared_bytes);

    // Each block processes FFT::ffts_per_block independent FFTs.
    const unsigned int local_fft_id  = threadIdx.y;
    const unsigned int global_fft_id = blockIdx.x * FFT::ffts_per_block + local_fft_id;
    const unsigned int batch_offset  = global_fft_id * N;

    complex_t reg[FFT::storage_size];

    // Strided load: thread t reads elements t, t+stride, t+2*stride, ...
    {
        unsigned int idx = threadIdx.x;
        for (unsigned int i = 0; i < EPT; ++i) {
            reg[i] = data[batch_offset + idx];
            idx += FFT::stride;
        }
    }

    FFT().execute(reg, shared_mem, ws_fwd);

    // Multiply each element by conj(h_freq) at the same frequency bin, with
    // the 1/N folded in. The filter is broadcast across all batch rows.
    const scalar_t inv_n = scalar_t(1) / scalar_t(N);
    {
        unsigned int idx = threadIdx.x;
        for (unsigned int i = 0; i < EPT; ++i) {
            const complex_t h = h_freq[idx];
            const scalar_t  re = reg[i].x * h.x + reg[i].y * h.y;
            const scalar_t  im = reg[i].y * h.x - reg[i].x * h.y;
            reg[i].x = re * inv_n;
            reg[i].y = im * inv_n;
            idx += FFT::stride;
        }
    }

    IFFT().execute(reg, shared_mem, ws_inv);

    {
        unsigned int idx = threadIdx.x;
        for (unsigned int i = 0; i < EPT; ++i) {
            data[batch_offset + idx] = reg[i];
            idx += FFT::stride;
        }
    }
}

// Compile-time FFT description. Picks suggested ept/ffts-per-block from
// cuFFTDx, which is usually optimal for a given (size, SM).
template <typename T, unsigned int FftSize, unsigned int SmArch>
struct CufftdxDescriptor {
    using base = decltype(cufftdx::Block()
                          + cufftdx::Size<FftSize>()
                          + cufftdx::Type<cufftdx::fft_type::c2c>()
                          + cufftdx::Precision<T>()
                          + cufftdx::SM<SmArch>());

    using fwd_base = decltype(base() + cufftdx::Direction<cufftdx::fft_direction::forward>());

    static constexpr unsigned int ept       = fwd_base::elements_per_thread;
    static constexpr unsigned int per_block = fwd_base::suggested_ffts_per_block;

    using fft  = decltype(fwd_base()
                          + cufftdx::ElementsPerThread<ept>()
                          + cufftdx::FFTsPerBlock<per_block>());
    using ifft = decltype(base() + cufftdx::Direction<cufftdx::fft_direction::inverse>()
                          + cufftdx::ElementsPerThread<ept>()
                          + cufftdx::FFTsPerBlock<per_block>());
};

template <class Desc>
class CufftdxPath {
public:
    using fft       = typename Desc::fft;
    using ifft      = typename Desc::ifft;
    using complex_t = typename fft::value_type;

    CufftdxPath(int batch, cudaStream_t stream) : batch_(batch), stream_(stream) {
        // Some FFT sizes need more than the default 48KB of shared memory.
        CUDA_CHECK(cudaFuncSetAttribute(
            cufftdx_correlate_kernel<fft, ifft>,
            cudaFuncAttributeMaxDynamicSharedMemorySize,
            fft::shared_memory_size));

        cudaError_t err = cudaSuccess;
        ws_fwd_ = cufftdx::make_workspace<fft>(err, stream_);
        CUDA_CHECK(err);
        ws_inv_ = cufftdx::make_workspace<ifft>(err, stream_);
        CUDA_CHECK(err);
    }

    // cuFFTDx's complex<T> is layout-compatible with cuFFT's complex types,
    // so we accept the cuFFT pointer and reinterpret here.
    template <typename CuComplex>
    void run(CuComplex* x, const CuComplex* h_freq) {
        static_assert(sizeof(CuComplex) == sizeof(complex_t),
                      "cuFFT/cuFFTDx complex layouts must match");
        static_assert(alignof(CuComplex) == alignof(complex_t),
                      "cuFFT/cuFFTDx complex alignments must match");

        auto*       x_dx = reinterpret_cast<complex_t*>(x);
        const auto* h_dx = reinterpret_cast<const complex_t*>(h_freq);

        const unsigned int blocks = (batch_ + fft::ffts_per_block - 1) / fft::ffts_per_block;
        cufftdx_correlate_kernel<fft, ifft>
            <<<blocks, fft::block_dim, fft::shared_memory_size, stream_>>>(
                x_dx, h_dx, ws_fwd_, ws_inv_);
        CUDA_CHECK(cudaPeekAtLastError());
    }

private:
    int                            batch_;
    cudaStream_t                   stream_;
    typename fft::workspace_type   ws_fwd_;
    typename ifft::workspace_type  ws_inv_;
};
