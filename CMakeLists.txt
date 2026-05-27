cmake_minimum_required(VERSION 3.27)

# Auto-detect the host GPU's compute capability via nvidia-smi so we don't
# have to hardcode an architecture. Produces _detected_arch ("89-real") and
# _detected_sm ("890") on success. User overrides via -DCMAKE_CUDA_ARCHITECTURES
# and/or -DBENCHMARK_SM_ARCH still win.
find_program(NVIDIA_SMI_EXECUTABLE nvidia-smi)
if(NVIDIA_SMI_EXECUTABLE)
    execute_process(
        COMMAND ${NVIDIA_SMI_EXECUTABLE} --query-gpu=compute_cap --format=csv,noheader
        OUTPUT_VARIABLE _nvsmi_compute_cap
        OUTPUT_STRIP_TRAILING_WHITESPACE
        RESULT_VARIABLE _nvsmi_result
        ERROR_QUIET
    )
    if(_nvsmi_result EQUAL 0 AND _nvsmi_compute_cap)
        string(REGEX MATCH "^[0-9]+\\.[0-9]+" _first_cap "${_nvsmi_compute_cap}")
        if(_first_cap)
            string(REPLACE "." "" _cap_digits "${_first_cap}")
            set(_detected_arch "${_cap_digits}-real")
            set(_detected_sm "${_cap_digits}0")
            message(STATUS "Detected GPU compute capability: ${_first_cap}")
        endif()
    endif()
endif()

if(NOT DEFINED CMAKE_CUDA_ARCHITECTURES AND NOT DEFINED CACHE{CMAKE_CUDA_ARCHITECTURES})
    if(DEFINED _detected_arch)
        set(CMAKE_CUDA_ARCHITECTURES "${_detected_arch}" CACHE STRING "Target CUDA architecture(s)")
    else()
        message(FATAL_ERROR
            "Could not auto-detect CUDA architecture (nvidia-smi unavailable or failed). "
            "Pass -DCMAKE_CUDA_ARCHITECTURES=<arch> (e.g., 89-real) explicitly.")
    endif()
else()
    set(CMAKE_CUDA_ARCHITECTURES "${CMAKE_CUDA_ARCHITECTURES}" CACHE STRING "Target CUDA architecture(s)")
endif()

project(cufft_vs_cufftdx_benchmark
    VERSION 0.1.0
    LANGUAGES CXX CUDA
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CUDA_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CUDA_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

set(FFT_SIZE 4096 CACHE STRING "Compile-time FFT size for cuFFTDx (power of 2)")
math(EXPR _fft_size_is_pow2 "(${FFT_SIZE} & (${FFT_SIZE} - 1))")
if(NOT FFT_SIZE GREATER 0 OR NOT _fft_size_is_pow2 EQUAL 0)
    message(FATAL_ERROR "FFT_SIZE must be a positive power of 2 (got ${FFT_SIZE})")
endif()
if(FFT_SIZE LESS 32 OR FFT_SIZE GREATER 16384)
    message(FATAL_ERROR "FFT_SIZE must be in [32, 16384] (got ${FFT_SIZE})")
endif()

if(NOT DEFINED BENCHMARK_SM_ARCH AND NOT DEFINED CACHE{BENCHMARK_SM_ARCH})
    if(DEFINED _detected_sm)
        set(BENCHMARK_SM_ARCH ${_detected_sm} CACHE STRING "cuFFTDx target SM (e.g., 890=Ada, 870=Orin)")
    else()
        message(FATAL_ERROR
            "Could not auto-detect BENCHMARK_SM_ARCH (nvidia-smi unavailable or failed). "
            "Pass -DBENCHMARK_SM_ARCH=<sm> (e.g., 890) explicitly.")
    endif()
else()
    set(BENCHMARK_SM_ARCH ${BENCHMARK_SM_ARCH} CACHE STRING "cuFFTDx target SM (e.g., 890=Ada, 870=Orin)")
endif()

message(STATUS "Build type:         ${CMAKE_BUILD_TYPE}")
message(STATUS "FFT_SIZE:           ${FFT_SIZE}")
message(STATUS "BENCHMARK_SM_ARCH:  ${BENCHMARK_SM_ARCH}")
message(STATUS "CUDA architectures: ${CMAKE_CUDA_ARCHITECTURES}")

find_package(CUDAToolkit REQUIRED)

# cuFFTDx is vendored under third_party/cuFFTDx (NVIDIA MathDx SDK; see
# third_party/cuFFTDx/LICENSE.txt). Override with -DCUFFTDX_ROOT=... to
# point at a system install instead.
if(NOT DEFINED CUFFTDX_ROOT AND NOT DEFINED cufftdx_DIR)
    set(CUFFTDX_ROOT "${CMAKE_SOURCE_DIR}/third_party/cuFFTDx"
        CACHE PATH "cuFFTDx install root")
endif()
if(DEFINED CUFFTDX_ROOT)
    list(APPEND CMAKE_PREFIX_PATH "${CUFFTDX_ROOT}")
endif()

# The block FFT API used here does not need CuTe/CUTLASS; turning that
# dependency off lets us avoid vendoring 27 MB of CUTLASS headers too.
set(cufftdx_DISABLE_CUTLASS TRUE CACHE BOOL "Disable cuFFTDx CUTLASS dep")

find_package(cufftdx CONFIG REQUIRED)
set(CUFFTDX_TARGET cufftdx::cufftdx)
message(STATUS "cuFFTDx root:       ${CUFFTDX_ROOT}")

add_executable(benchmark src/main.cu)

target_include_directories(benchmark PRIVATE src)

# cuFFT callbacks (cufftXtSetCallback) are only supported by the static
# cuFFT library and require relocatable device code. The dynamic libcufft.so
# returns CUFFT_NOT_IMPLEMENTED from cufftXtSetCallback.
target_link_libraries(benchmark PRIVATE
    ${CUFFTDX_TARGET}
    CUDA::cufft_static
    CUDA::culibos
    CUDA::cudart
)

target_compile_definitions(benchmark PRIVATE
    BENCHMARK_FFT_SIZE=${FFT_SIZE}
    BENCHMARK_SM_ARCH=${BENCHMARK_SM_ARCH}
)

target_compile_options(benchmark PRIVATE
    $<$<COMPILE_LANGUAGE:CUDA>:--expt-relaxed-constexpr>
    $<$<AND:$<COMPILE_LANGUAGE:CUDA>,$<CONFIG:Release>>:-O3>
    $<$<AND:$<COMPILE_LANGUAGE:CUDA>,$<CONFIG:Release>>:--use_fast_math>
    $<$<AND:$<COMPILE_LANGUAGE:CUDA>,$<CONFIG:Debug>>:-g>
    $<$<AND:$<COMPILE_LANGUAGE:CUDA>,$<CONFIG:Debug>>:-lineinfo>
)

set_target_properties(benchmark PROPERTIES
    CUDA_SEPARABLE_COMPILATION ON
)
