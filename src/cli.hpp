#pragma once

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include <string>

#ifndef BENCHMARK_FFT_SIZE
#error "BENCHMARK_FFT_SIZE must be defined by the build system"
#endif

struct Args {
    enum class Precision { Single, Double };

    Precision precision = Precision::Single;
    int batch = 64;
    int fft_size = BENCHMARK_FFT_SIZE;
    int iterations = 100;
    bool verify = false;
};

inline void print_usage(const char* prog) {
    std::fprintf(stderr,
        "Usage: %s [options]\n"
        "  --precision {single|double}   Complex element precision (default: single)\n"
        "  --batch N                     Number of independent FFTs per iteration (default: 64)\n"
        "  --fft-size M                  FFT length; must equal compile-time BENCHMARK_FFT_SIZE=%d\n"
        "                                and be a power of 2 (default: %d)\n"
        "  --iterations K                Timed iterations per path (default: 100)\n"
        "  --verify                      Cross-check cuFFT vs cuFFTDx outputs by L2 distance\n"
        "  -h, --help                    Show this help\n",
        prog, BENCHMARK_FFT_SIZE, BENCHMARK_FFT_SIZE);
}

inline bool is_power_of_two(int x) {
    return x > 0 && (x & (x - 1)) == 0;
}

inline const char* precision_name(Args::Precision p) {
    return p == Args::Precision::Single ? "single" : "double";
}

inline Args parse_args(int argc, char** argv) {
    Args args;
    auto need_value = [&](int i) {
        if (i + 1 >= argc) {
            std::fprintf(stderr, "error: missing value for '%s'\n", argv[i]);
            print_usage(argv[0]);
            std::exit(2);
        }
    };

    for (int i = 1; i < argc; ++i) {
        const char* a = argv[i];
        if (!std::strcmp(a, "-h") || !std::strcmp(a, "--help")) {
            print_usage(argv[0]);
            std::exit(0);
        } else if (!std::strcmp(a, "--precision")) {
            need_value(i);
            const char* v = argv[++i];
            if (!std::strcmp(v, "single"))      args.precision = Args::Precision::Single;
            else if (!std::strcmp(v, "double")) args.precision = Args::Precision::Double;
            else {
                std::fprintf(stderr, "error: --precision must be 'single' or 'double' (got '%s')\n", v);
                std::exit(2);
            }
        } else if (!std::strcmp(a, "--batch")) {
            need_value(i);
            args.batch = std::atoi(argv[++i]);
        } else if (!std::strcmp(a, "--fft-size")) {
            need_value(i);
            args.fft_size = std::atoi(argv[++i]);
        } else if (!std::strcmp(a, "--iterations")) {
            need_value(i);
            args.iterations = std::atoi(argv[++i]);
        } else if (!std::strcmp(a, "--verify")) {
            args.verify = true;
        } else {
            std::fprintf(stderr, "error: unknown argument '%s'\n", a);
            print_usage(argv[0]);
            std::exit(2);
        }
    }

    if (args.batch < 1) {
        std::fprintf(stderr, "error: --batch must be >= 1 (got %d)\n", args.batch);
        std::exit(2);
    }
    if (args.iterations < 1) {
        std::fprintf(stderr, "error: --iterations must be >= 1 (got %d)\n", args.iterations);
        std::exit(2);
    }
    if (!is_power_of_two(args.fft_size)) {
        std::fprintf(stderr, "error: --fft-size must be a positive power of 2 (got %d)\n", args.fft_size);
        std::exit(2);
    }
    if (args.fft_size != BENCHMARK_FFT_SIZE) {
        std::fprintf(stderr,
            "error: --fft-size=%d does not match compile-time BENCHMARK_FFT_SIZE=%d.\n"
            "       Reconfigure the build with: cmake -S . -B build -DFFT_SIZE=%d\n"
            "       and rebuild.\n",
            args.fft_size, BENCHMARK_FFT_SIZE, args.fft_size);
        std::exit(2);
    }

    return args;
}
