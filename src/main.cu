#include <cmath>
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

// Time a callable that submits work on `stream`, with `warmup` untimed runs
// followed by `iters` timed runs. cudaEventElapsedTime measures stream-local
// elapsed time, so wall-clock jitter from other host work doesn't leak in.
template <typename Fn>
TimedRun time_on_stream(Fn&& submit, int warmup, int iters, cudaStream_t stream) {
    cudaEvent_t start, stop;
    CUDA_CHECK(cudaEventCreate(&start));
    CUDA_CHECK(cudaEventCreate(&stop));

    for (int i = 0; i < warmup; ++i) submit();
    CUDA_CHECK(cudaStreamSynchronize(stream));

    CUDA_CHECK(cudaEventRecord(start, stream));
    for (int i = 0; i < iters; ++i) submit();
    CUDA_CHECK(cudaEventRecord(stop, stream));
    CUDA_CHECK(cudaEventSynchronize(stop));

    TimedRun r;
    r.warmup_iters = warmup;
    r.timed_iters  = iters;
    CUDA_CHECK(cudaEventElapsedTime(&r.total_ms, start, stop));

    CUDA_CHECK(cudaEventDestroy(start));
    CUDA_CHECK(cudaEventDestroy(stop));
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
    auto w = Workload<T>::generate(args.fft_size, args.batch);

    fft_complex_t* d_signal  = nullptr;
    fft_complex_t* d_filter  = nullptr;
    fft_complex_t* d_signal0 = nullptr;  // pristine copy, restored before each iter

    const std::size_t signal_bytes = sizeof(fft_complex_t) * w.input.size();
    const std::size_t filter_bytes = sizeof(fft_complex_t) * w.filter.size();

    CUDA_CHECK(cudaMalloc(&d_signal,  signal_bytes));
    CUDA_CHECK(cudaMalloc(&d_signal0, signal_bytes));
    CUDA_CHECK(cudaMalloc(&d_filter,  filter_bytes));

    CUDA_CHECK(cudaMemcpyAsync(d_signal0, w.input.data(),  signal_bytes, cudaMemcpyHostToDevice, stream));
    CUDA_CHECK(cudaMemcpyAsync(d_filter,  w.filter.data(), filter_bytes, cudaMemcpyHostToDevice, stream));
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

    auto restore_input = [&]() {
        CUDA_CHECK(cudaMemcpyAsync(d_signal, d_signal0, signal_bytes,
                                   cudaMemcpyDeviceToDevice, stream));
    };

    constexpr int kWarmup = 10;

    // --- cuFFT path --------------------------------------------------------
    auto run_cufft = [&]() {
        restore_input();
        cufft.run(d_signal, d_filter);
    };
    auto t_cufft = time_on_stream(run_cufft, kWarmup, args.iterations, stream);

    std::vector<fft_complex_t> out_cufft;
    if (args.verify) {
        out_cufft.resize(w.input.size());
        CUDA_CHECK(cudaMemcpy(out_cufft.data(), d_signal, signal_bytes, cudaMemcpyDeviceToHost));
    }

    // --- cuFFTDx path ------------------------------------------------------
    auto run_cufftdx = [&]() {
        restore_input();
        cufftdx.run(d_signal, d_filter);
    };
    auto t_cufftdx = time_on_stream(run_cufftdx, kWarmup, args.iterations, stream);

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
    CUDA_CHECK(cudaFree(d_signal0));
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
