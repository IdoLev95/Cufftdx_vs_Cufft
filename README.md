# cufft_vs_cufftdx_benchmark

Throughput comparison for complex-buffer correlation on the GPU:

- **cuFFT path** — host-orchestrated three-step pipeline: forward FFT,
  pointwise conjugate-multiply-and-scale, inverse FFT (three kernel launches
  per iteration).
- **cuFFTDx path** — a single fused device-side kernel: forward FFT,
  in-register conjugate-multiply by the reference spectrum, inverse FFT,
  and 1/N scaling, all inside one block without round-tripping through
  global memory.

Both paths submit work to the same non-default CUDA stream and are timed
with `cudaEventElapsedTime`. The reference filter is transformed once with
cuFFT and reused by both paths, so `--verify` is an apples-to-apples L2
comparison of the two output buffers.

The FFT size is locked at build time (`-DFFT_SIZE=...`). This is what
cuFFTDx wants — its FFT description is a compile-time type — and the
benchmark binary refuses to run with a mismatched `--fft-size`.

## Build

```
cmake -S . -B build -DFFT_SIZE=1024 -DBENCHMARK_SM_ARCH=890
cmake --build build -j
```

`BENCHMARK_SM_ARCH` is the SM that cuFFTDx will specialize for (e.g. 890
for Ada, 870 for Orin/Ampere). It should match the GPU you run on; the
binary warns at startup if it doesn't.

cuFFTDx is vendored in `third_party/cuFFTDx/` so the build needs nothing
extra after cloning. To use a system-installed copy instead, pass
`-DCUFFTDX_ROOT=/path/to/cuFFTDx`.

## Run

```
./build/benchmark --batch 1024 --iterations 200 --verify
```

Example output on an RTX 4060 Laptop (SM 89), FFT size 1024, batch 1024:

```
cuFFT  (3-kernel pipeline)
  per-iter:      381.158 us
  FFT flops:     275.10 GFLOP/s

cuFFTDx (fused kernel)
  per-iter:      325.135 us
  FFT flops:     322.50 GFLOP/s

speedup (cuFFTDx vs cuFFT): 1.17x
```

Speedup depends on FFT size, batch, and GPU. The win comes from removing
the two extra global-memory round trips between the FFT, the multiply, and
the IFFT.

## Third-party

`third_party/cuFFTDx/` is NVIDIA's MathDx SDK (cuFFTDx + commondx headers
and CMake configs), redistributed under the license in
`third_party/cuFFTDx/LICENSE.txt`. The benchmark code in `src/` is mine;
the SDK files are NVIDIA's and remain under NVIDIA's terms.

## Author

Ido — Ido@signal-edge.com
