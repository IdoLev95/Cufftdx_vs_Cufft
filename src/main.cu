#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <vector>

#include <cuda_runtime.h>

#include "cli.hpp"
#include "common.hpp"
#include "cufft_path.hpp"
#include "cufftdx_path.hpp"
#include "workload.hpp"

namespace {

struct TimedRun {
    float total_ms      = 0.0f;
    int   warmup_iters  = 0;
    int   timed_iters   = 0;
};

// Overwrites d_signal with a fresh content derived from iter_seed. Called in
// the prep step (outside the timing window) so each warmup and timed iter
// runs the FFT on a different input. Treats the buffer as 2*n_complex reals
// (interleaved re/im) so one launch covers both components.
template <typename Real>
__global__ void fill_signal_kernel(Real* x, std::size_t n_complex,
                                   std::uint32_t iter_seed, int signal_kind,
                                   int fft_size) {
    const std::size_t idx = static_cast<std::size_t>(blockIdx.x) * blockDim.x + threadIdx.x;
    if (idx >= n_complex) return;

    Real re, im;
    switch (signal_kind) {
        case 0: {  // random — varies per iter via iter_seed
            std::uint32_t h = static_cast<std::uint32_t>(idx) * 2654435761u + iter_seed;
            h ^= h >> 16; h *= 0x85ebca6bu;
            h ^= h >> 13; h *= 0xc2b2ae35u;
            h ^= h >> 16;
            re = (static_cast<Real>(h >> 8) / static_cast<Real>(1u << 24)) * Real(2) - Real(1);
            h = h * 1664525u + 1013904223u; h ^= h >> 16;
            im = (static_cast<Real>(h >> 8) / static_cast<Real>(1u << 24)) * Real(2) - Real(1);
            break;
        }
        case 1: re = Real(0); im = Real(0); break;
        case 2: re = Real(1); im = Real(0); break;
        case 3: {  // sine — phase-shifted per iter so content still changes
            const int i = static_cast<int>(idx % static_cast<std::size_t>(fft_size));
            const Real phase = Real(2) * Real(M_PI) * Real(i) / Real(fft_size)
                             + Real(iter_seed) * Real(0.01);
            re = cos(phase); im = sin(phase);
            break;
        }
        default: re = Real(0); im = Real(0);
    }
    x[2 * idx + 0] = re;
    x[2 * idx + 1] = im;
}

// Time a kernel callable on `stream`, with `warmup` untimed runs followed by
// `iters` timed runs. `prep` runs every iteration but stays *outside* the
// timing window — useful when the prep step (e.g. an input-restore d2d copy)
// is part of the harness, not the work under test. One event pair per
// iteration brackets only the kernel; sum of elapsed-times is kernel-only.
template <typename Prep, typename Kernel>
TimedRun time_kernel_only(Prep&& prep, Kernel&& kernel,
                          int warmup, int iters, cudaStream_t stream) {
    for (int i = 0; i < warmup; ++i) { prep(); kernel(); }
    CUDA_CHECK(cudaStreamSynchronize(stream));

    std::vector<cudaEvent_t> starts(iters), stops(iters);
    for (int i = 0; i < iters; ++i) {
        CUDA_CHECK(cudaEventCreate(&starts[i]));
        CUDA_CHECK(cudaEventCreate(&stops[i]));
    }

    for (int i = 0; i < iters; ++i) {
        prep();
        CUDA_CHECK(cudaEventRecord(starts[i], stream));
        kernel();
        CUDA_CHECK(cudaEventRecord(stops[i], stream));
    }
    CUDA_CHECK(cudaStreamSynchronize(stream));

    TimedRun r;
    r.warmup_iters = warmup;
    r.timed_iters  = iters;
    for (int i = 0; i < iters; ++i) {
        float ms = 0;
        CUDA_CHECK(cudaEventElapsedTime(&ms, starts[i], stops[i]));
        r.total_ms += ms;
        CUDA_CHECK(cudaEventDestroy(starts[i]));
        CUDA_CHECK(cudaEventDestroy(stops[i]));
    }
    return r;
}

void report(const char* name, const TimedRun& r, int fft_size, int batch) {
    const double per_iter_ms  = r.total_ms / r.timed_iters;
    const double per_iter_s   = per_iter_ms * 1e-3;
    const double samples_iter = static_cast<double>(fft_size) * batch;
    const double gsps         = samples_iter / per_iter_s * 1e-9;
    const double log2_n       = std::log2(static_cast<double>(fft_size));
    // Standard "5 N log2(N)" FLOP count for a complex FFT, doubled for the
    // forward+inverse pair plus the pointwise multiply (negligible).
    const double gflops       = (2.0 * 5.0 * fft_size * log2_n * batch) / per_iter_s * 1e-9;

    std::printf("\n%s\n", name);
    std::printf("  warmup:        %d iterations\n", r.warmup_iters);
    std::printf("  timed:         %d iterations\n", r.timed_iters);
    std::printf("  total:         %.3f ms\n", r.total_ms);
    std::printf("  per-iter:      %.3f us\n", per_iter_ms * 1e3);
    std::printf("  throughput:    %.3f G complex/s\n", gsps);
    std::printf("  FFT flops:     %.2f GFLOP/s\n", gflops);
}

template <typename T>
void run_benchmark(const Args& args, cudaStream_t stream) {
    using fft_complex_t = cufft_complex_t<T>;

    // --- workload setup ----------------------------------------------------
    auto w = Workload<T>::generate(args.fft_size, args.batch, args.signal);

    fft_complex_t* d_signal  = nullptr;
    fft_complex_t* d_filter  = nullptr;

    const std::size_t signal_bytes = sizeof(fft_complex_t) * w.input.size();
    const std::size_t filter_bytes = sizeof(fft_complex_t) * w.filter.size();

    CUDA_CHECK(cudaMalloc(&d_signal, signal_bytes));
    CUDA_CHECK(cudaMalloc(&d_filter, filter_bytes));

    CUDA_CHECK(cudaMemcpyAsync(d_filter, w.filter.data(), filter_bytes, cudaMemcpyHostToDevice, stream));
    CUDA_CHECK(cudaStreamSynchronize(stream));

    // The filter is transformed once and reused. Use cuFFT for both paths so
    // the reference spectrum is identical bit-for-bit.
    {
        CufftPath<T> filter_plan(args.fft_size, 1, stream);
        filter_plan.forward_filter(d_filter);
        CUDA_CHECK(cudaStreamSynchronize(stream));
    }

    // --- paths -------------------------------------------------------------
    CufftPath<T> cufft(args.fft_size, args.batch, stream);

    using Desc = CufftdxDescriptor<T, BENCHMARK_FFT_SIZE, BENCHMARK_SM_ARCH>;
    CufftdxPath<Desc> cufftdx(args.batch, stream);

    // Per-iter signal regeneration. Counter increments on every call (warmup
    // + timed), so each FFT runs on different content. Reset between paths
    // so cuFFT and cuFFTDx see the *same* sequence of inputs — verify still
    // compares matching final outputs.
    int prep_counter = 0;
    const std::size_t n_complex = w.input.size();
    const int kFillThreads = 256;
    const unsigned int kFillBlocks =
        static_cast<unsigned int>((n_complex + kFillThreads - 1) / kFillThreads);
    const int signal_kind = static_cast<int>(args.signal);

    auto regenerate_input = [&]() {
        fill_signal_kernel<T><<<kFillBlocks, kFillThreads, 0, stream>>>(
            reinterpret_cast<T*>(d_signal), n_complex,
            0xA5A5A5A5u + static_cast<std::uint32_t>(prep_counter),
            signal_kind, args.fft_size);
        ++prep_counter;
    };

    constexpr int kWarmup = 10;

    // --- cuFFT path --------------------------------------------------------
    auto prep_cufft   = [&]() { regenerate_input(); };
    auto kern_cufft   = [&]() { cufft.run(d_signal, d_filter); };
    auto t_cufft = time_kernel_only(prep_cufft, kern_cufft,
                                    kWarmup, args.iterations, stream);

    std::vector<fft_complex_t> out_cufft;
    if (args.verify) {
        out_cufft.resize(w.input.size());
        CUDA_CHECK(cudaMemcpy(out_cufft.data(), d_signal, signal_bytes, cudaMemcpyDeviceToHost));
    }

    // --- cuFFTDx path ------------------------------------------------------
    prep_counter = 0;  // replay the same input sequence for verify parity
    auto prep_cufftdx = [&]() { regenerate_input(); };
    auto kern_cufftdx = [&]() { cufftdx.run(d_signal, d_filter); };
    auto t_cufftdx = time_kernel_only(prep_cufftdx, kern_cufftdx,
                                      kWarmup, args.iterations, stream);

    std::vector<fft_complex_t> out_cufftdx;
    if (args.verify) {
        out_cufftdx.resize(w.input.size());
        CUDA_CHECK(cudaMemcpy(out_cufftdx.data(), d_signal, signal_bytes, cudaMemcpyDeviceToHost));
    }

    // --- report ------------------------------------------------------------
    report("cuFFT  (load-callback on IFFT)", t_cufft,   args.fft_size, args.batch);
    report("cuFFTDx (fused kernel)",         t_cufftdx, args.fft_size, args.batch);

    const double speedup = t_cufft.total_ms / t_cufftdx.total_ms;
    std::printf("\nspeedup (cuFFTDx vs cuFFT): %.2fx\n", speedup);

    if (args.verify) {
        const double rel = relative_l2<T>(out_cufft, out_cufftdx);
        // 1e-3 is loose enough for single-precision with --use_fast_math and
        // still tight enough to catch a real algorithm mistake.
        const double threshold = (sizeof(T) == 8) ? 1e-10 : 1e-3;
        const bool   pass      = rel <= threshold;
        std::printf("\nverify\n");
        std::printf("  rel L2:        %.3e\n", rel);
        std::printf("  threshold:     %.3e\n", threshold);
        std::printf("  result:        %s\n", pass ? "PASS" : "FAIL");
        if (!pass) std::exit(1);
    }

    CUDA_CHECK(cudaFree(d_signal));
    CUDA_CHECK(cudaFree(d_filter));
}

}  // namespace

int main(int argc, char** argv) {
    Args args = parse_args(argc, argv);

    int device = 0;
    CUDA_CHECK(cudaGetDevice(&device));
    cudaDeviceProp props{};
    CUDA_CHECK(cudaGetDeviceProperties(&props, device));
    const unsigned int runtime_sm = props.major * 100 + props.minor * 10;

    cudaStream_t stream = nullptr;
    CUDA_CHECK(cudaStreamCreate(&stream));

    std::printf("cufft_vs_cufftdx_benchmark\n");
    std::printf("  device:        %s (SM %u)\n", props.name, runtime_sm);
    std::printf("  precision:     %s\n",   precision_name(args.precision));
    std::printf("  signal:        %s\n",   signal_name(args.signal));
    std::printf("  fft_size:      %d (compile-time)\n", BENCHMARK_FFT_SIZE);
    std::printf("  batch:         %d\n",   args.batch);
    std::printf("  iterations:    %d\n",   args.iterations);
    std::printf("  verify:        %s\n",   args.verify ? "yes" : "no");
    std::printf("  cuFFTDx arch:  SM %u (build-time)\n", static_cast<unsigned int>(BENCHMARK_SM_ARCH));
    std::printf("  stream:        non-default (created)\n");

    if (runtime_sm != BENCHMARK_SM_ARCH) {
        std::fprintf(stderr,
            "warning: built for cuFFTDx SM %u but running on SM %u; rebuild with -DBENCHMARK_SM_ARCH=%u\n",
            static_cast<unsigned int>(BENCHMARK_SM_ARCH), runtime_sm, runtime_sm);
    }

    if (args.precision == Args::Precision::Single) {
        run_benchmark<float>(args, stream);
    } else {
        run_benchmark<double>(args, stream);
    }

    CUDA_CHECK(cudaStreamSynchronize(stream));
    CUDA_CHECK(cudaStreamDestroy(stream));
    return 0;
}
