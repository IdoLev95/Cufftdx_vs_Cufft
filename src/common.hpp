#pragma once

#include <cstdio>
#include <cstdlib>

#include <cuda_runtime.h>
#include <cufft.h>

#define CUDA_CHECK(expr)                                                                \
    do {                                                                                \
        cudaError_t _err = (expr);                                                      \
        if (_err != cudaSuccess) {                                                      \
            std::fprintf(stderr, "CUDA error %s:%d: %s\n",                              \
                         __FILE__, __LINE__, cudaGetErrorString(_err));                 \
            std::exit(1);                                                               \
        }                                                                               \
    } while (0)

#define CUFFT_CHECK(expr)                                                               \
    do {                                                                                \
        cufftResult _err = (expr);                                                      \
        if (_err != CUFFT_SUCCESS) {                                                    \
            std::fprintf(stderr, "cuFFT error %s:%d: code %d\n",                        \
                         __FILE__, __LINE__, static_cast<int>(_err));                   \
            std::exit(1);                                                               \
        }                                                                               \
    } while (0)

// Mapping from a host scalar type to the matching cuFFT complex struct.
template <typename T> struct CufftComplex;
template <> struct CufftComplex<float>  { using type = cufftComplex;       };
template <> struct CufftComplex<double> { using type = cufftDoubleComplex; };

template <typename T> using cufft_complex_t = typename CufftComplex<T>::type;

template <typename T>
inline cufftType cufft_c2c_type();
template <> inline cufftType cufft_c2c_type<float>()  { return CUFFT_C2C; }
template <> inline cufftType cufft_c2c_type<double>() { return CUFFT_Z2Z; }

template <typename T>
inline cufftResult cufft_exec_c2c(cufftHandle plan,
                                  cufft_complex_t<T>* in,
                                  cufft_complex_t<T>* out,
                                  int direction);
template <>
inline cufftResult cufft_exec_c2c<float>(cufftHandle plan,
                                         cufftComplex* in,
                                         cufftComplex* out,
                                         int direction) {
    return cufftExecC2C(plan, in, out, direction);
}
template <>
inline cufftResult cufft_exec_c2c<double>(cufftHandle plan,
                                          cufftDoubleComplex* in,
                                          cufftDoubleComplex* out,
                                          int direction) {
    return cufftExecZ2Z(plan, in, out, direction);
}
