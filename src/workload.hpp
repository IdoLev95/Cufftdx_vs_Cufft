#pragma once

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <vector>

#include "common.hpp"

// Deterministic synthetic workload: a complex input signal (varies per batch
// row) and a single complex FIR filter that will be applied to every row.
// Using fixed seeds keeps the verify path bit-reproducible between runs.
template <typename T>
struct Workload {
    int fft_size = 0;
    int batch    = 0;

    std::vector<cufft_complex_t<T>> input;     // batch * fft_size
    std::vector<cufft_complex_t<T>> filter;    // fft_size

    static Workload generate(int fft_size, int batch) {
        Workload w;
        w.fft_size = fft_size;
        w.batch    = batch;
        w.input.resize(static_cast<std::size_t>(fft_size) * batch);
        w.filter.resize(fft_size);

        // LCG — cheap and deterministic. Anything fancier just hides bugs.
        std::uint32_t state = 0xC0FFEEu;
        auto next_unit = [&]() {
            state = state * 1664525u + 1013904223u;
            return (static_cast<T>(state >> 8) / static_cast<T>(1u << 24)) * T(2) - T(1);
        };

        for (auto& s : w.input) {
            s.x = next_unit();
            s.y = next_unit();
        }

        // A simple low-pass-ish filter: a few non-zero taps. Anything works
        // for the benchmark; we just want a non-trivial reference spectrum.
        const int taps = std::min(16, fft_size);
        for (int i = 0; i < fft_size; ++i) {
            w.filter[i].x = T(0);
            w.filter[i].y = T(0);
        }
        for (int i = 0; i < taps; ++i) {
            T window = T(0.5) * (T(1) - std::cos(T(2) * T(M_PI) * T(i) / T(taps - 1)));
            w.filter[i].x = window;
            w.filter[i].y = T(0);
        }
        return w;
    }
};

// L2 distance between two device buffers, used by --verify. Returns
// sqrt(sum |a-b|^2) / sqrt(sum |a|^2) — a relative metric that does not
// depend on FFT size or amplitude.
template <typename T>
double relative_l2(const std::vector<cufft_complex_t<T>>& a,
                   const std::vector<cufft_complex_t<T>>& b) {
    double num = 0.0;
    double den = 0.0;
    const std::size_t n = std::min(a.size(), b.size());
    for (std::size_t i = 0; i < n; ++i) {
        const double dx = static_cast<double>(a[i].x) - static_cast<double>(b[i].x);
        const double dy = static_cast<double>(a[i].y) - static_cast<double>(b[i].y);
        num += dx * dx + dy * dy;
        den += static_cast<double>(a[i].x) * a[i].x + static_cast<double>(a[i].y) * a[i].y;
    }
    if (den == 0.0) return 0.0;
    return std::sqrt(num / den);
}
