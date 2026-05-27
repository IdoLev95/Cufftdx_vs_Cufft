# cufft_vs_cufftdx_benchmark

A small, focused micro-benchmark comparing two ways of doing the same
frequency-domain correlation on an NVIDIA GPU:

- **cuFFT with a load callback** — forward FFT, then an inverse FFT whose
  load step is intercepted by a `__device__` callback that substitutes
  `X[k] * conj(H[k mod N]) / N` for each element read. Two kernels per
  iteration: the standalone pointwise-multiply kernel that a naive cuFFT
  pipeline would launch is fused into the IFFT's input load.
- **cuFFTDx fused kernel** — a single block-scope kernel that keeps the
  whole forward FFT → pointwise correlate → IFFT chain in registers and
  shared memory. Zero global-memory traffic between the two FFTs.

Both paths share the same input buffer allocation, the same precomputed
filter spectrum, the same CUDA stream, and the same timing harness
(`cudaEventElapsedTime` over a 10-iter warmup + a measured loop). Before
each iteration (warmup and timed), `fill_signal_kernel` rewrites
`d_signal` from a per-iter seed in the prep step — outside the timing
window — so the FFT never sees the same input twice on `--signal random`
or `--signal sine`. Input-side caching can't help either path.
`--verify` cross-checks the two outputs via relative L2, so any
algorithmic drift is visible.

The point isn't "cuFFTDx beats cuFFT". It's *how much* fusing into a
single device-side kernel is worth on small-to-medium batched FFTs, and
what you trade for it: compile-time-fixed FFT size, no callback-style
flexibility, vendor-specific deployment.

## Results — Orin (SM 870), FP32, FFT size 1024, batch 4096

200 timed iterations after a 10-iter warmup, non-default CUDA stream.
Each iteration writes a fresh `d_signal` via `fill_signal_kernel`
before the FFT runs, so the timed kernel never sees the same input
twice on `random`/`sine`.

| `--signal` | cuFFT (callback) | cuFFTDx (fused) | speedup |
|------------|-----------------:|----------------:|--------:|
| random     |    209.5 GFLOP/s |   464.6 GFLOP/s |  2.22×  |
| zeros      |    208.7 GFLOP/s |   465.5 GFLOP/s |  2.23×  |
| ones       |    209.9 GFLOP/s |   465.4 GFLOP/s |  2.22×  |
| sine       |    212.1 GFLOP/s |   465.1 GFLOP/s |  2.19×  |



cuFFTDx's lead over the callback-fused cuFFT path is the one
global-memory round trip between the forward and inverse FFT that the
cuFFT library boundary still forces you to keep, even after fusing the
pointwise multiply into the IFFT's load callback. That intermediate
spectrum has to land somewhere cuFFT can see it.

## Build

The build auto-detects your GPU's compute capability via `nvidia-smi` at
configure time, so you only pick the FFT size you want compiled in:

```
cmake -S . -B build -DFFT_SIZE=1024
cmake --build build -j
```

Override the architecture if cross-compiling or if `nvidia-smi` isn't
available:

```
cmake -S . -B build -DFFT_SIZE=1024 \
    -DCMAKE_CUDA_ARCHITECTURES=89-real \
    -DBENCHMARK_SM_ARCH=890
```

`BENCHMARK_SM_ARCH` is the cuFFTDx specialization target (e.g. 890 = Ada,
870 = Orin/Ampere). The binary warns at startup if it doesn't match the
GPU you actually run on.

cuFFTDx is vendored under `third_party/cuFFTDx/`, so the build needs
nothing extra after cloning. Use a system MathDx install instead with
`-DCUFFTDX_ROOT=/path/to/cuFFTDx`.

cuFFT callbacks require the **static** cuFFT library and relocatable
device code; both are wired up by the CMake. That's why the build has a
separate "device link" step.

Tested with CUDA 12.6 / nvcc 12.6. Should work on any CUDA ≥ 12 with a
compute-capability ≥ 7.0 GPU.

## Run

```
./build/benchmark --batch 1024 --iterations 200 --verify
```

Flags:

- `--precision {single|double}` — FP32 (default) or FP64
- `--signal {random|zeros|ones|sine}` — content written into `d_signal` before each iter; varies per-iter for `random`/`sine` (default `random`)
- `--batch N` — independent FFTs per iteration (default 64)
- `--fft-size M` — must match the compile-time `FFT_SIZE` (sanity check)
- `--iterations K` — timed iterations after a 10-iter warmup (default 100)
- `--verify` — cross-check cuFFT vs cuFFTDx outputs via relative L2

## Layout

```
src/
  main.cu              entry point, timing, verify
  cufft_path.hpp       cuFFT path + IFFT load callback
  cufftdx_path.hpp     cuFFTDx fused kernel
  workload.hpp         deterministic synthetic input + filter
  common.hpp           CUDA/cuFFT error checks, type traits
  cli.hpp              argument parsing
third_party/cuFFTDx/   NVIDIA MathDx SDK (vendored)
```

## Third-party

`third_party/cuFFTDx/` is NVIDIA's MathDx SDK (cuFFTDx + commondx headers
and CMake configs), redistributed under the license in
`third_party/cuFFTDx/LICENSE.txt`. The code in `src/` is mine; the SDK
files are NVIDIA's and remain under NVIDIA's terms.

## Author

Ido — [Ido@signal-edge.com](mailto:Ido@signal-edge.com)
