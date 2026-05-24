// Copyright (c) 2019-2025, NVIDIA CORPORATION & AFFILIATES.  All rights reserved.
//
// NVIDIA CORPORATION and its licensors retain all intellectual property
// and proprietary rights in and to this software, related documentation
// and any modifications thereto.  Any use, reproduction, disclosure or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA CORPORATION is strictly prohibited.

#ifndef CUFFTDX_DATABASE_DATABASE_HPP
#define CUFFTDX_DATABASE_DATABASE_HPP

#include "cufftdx/database/detail/block_fft.hpp"

namespace cufftdx {
    namespace database {
        namespace detail {

            using lut_fp32_type = commondx::complex<float>;
            using lut_fp64_type = commondx::complex<double>;

#if defined(CUFFTDX_DETAIL_USE_EXTERN_LUT) || defined(CUFFTDX_USE_SEPARATE_TWIDDLES)
            #include "cufftdx/database/lut_fp32.h"
            #include "cufftdx/database/lut_fp64.h"
#else // CUFFTDX_DETAIL_USE_EXTERN_LUT
    #ifndef CUFFTDX_DETAIL_LUT_LINKAGE
    #define CUFFTDX_DETAIL_LUT_LINKAGE static
    #endif
#if !defined(CUFFTDX_DETAIL_MANUAL_IMPL_FILTER) || (defined(CUFFTDX_DETAIL_INCLUDE_PRECISION_FP32))
            #include "cufftdx/database/lut_fp32.hpp.inc"
#endif
#if !defined(CUFFTDX_DETAIL_MANUAL_IMPL_FILTER) || (defined(CUFFTDX_DETAIL_INCLUDE_PRECISION_FP64))
            #include "cufftdx/database/lut_fp64.hpp.inc"
#endif
    #ifdef CUFFTDX_DETAIL_LUT_LINKAGE
    #undef CUFFTDX_DETAIL_LUT_LINKAGE
    #endif
#endif // CUFFTDX_DETAIL_USE_EXTERN_LUT

#if (!defined(__CUDA_ARCH__) || __CUDA_ARCH__ >= 530)
            #include "cufftdx/database/records/700/database_fp16_fwd.hpp.inc"
#endif
            #include "cufftdx/database/records/700/database_fp32_fwd.hpp.inc"
            #include "cufftdx/database/records/700/database_fp64_fwd.hpp.inc"

#if (!defined(__CUDA_ARCH__) || __CUDA_ARCH__ >= 530)
            #include "cufftdx/database/records/750/database_fp16_fwd.hpp.inc"
#endif
            #include "cufftdx/database/records/750/database_fp32_fwd.hpp.inc"
            #include "cufftdx/database/records/750/database_fp64_fwd.hpp.inc"

#if (!defined(__CUDA_ARCH__) || __CUDA_ARCH__ >= 530)
            #include "cufftdx/database/records/800/database_fp16_fwd.hpp.inc"
#endif
            #include "cufftdx/database/records/800/database_fp32_fwd.hpp.inc"
            #include "cufftdx/database/records/800/database_fp64_fwd.hpp.inc"

#if (!defined(__CUDA_ARCH__) || __CUDA_ARCH__ >= 530)
            #include "cufftdx/database/records/890/database_fp16_fwd.hpp.inc"
#endif
            #include "cufftdx/database/records/890/database_fp32_fwd.hpp.inc"
            #include "cufftdx/database/records/890/database_fp64_fwd.hpp.inc"

#if (!defined(__CUDA_ARCH__) || __CUDA_ARCH__ >= 530)
            #include "cufftdx/database/records/900/database_fp16_fwd.hpp.inc"
#endif
            #include "cufftdx/database/records/900/database_fp32_fwd.hpp.inc"
            #include "cufftdx/database/records/900/database_fp64_fwd.hpp.inc"

#if (!defined(__CUDA_ARCH__) || __CUDA_ARCH__ >= 530)
            #include "cufftdx/database/records/1000/database_fp16_fwd.hpp.inc"
#endif
            #include "cufftdx/database/records/1000/database_fp32_fwd.hpp.inc"
            #include "cufftdx/database/records/1000/database_fp64_fwd.hpp.inc"


#if (!defined(__CUDA_ARCH__) || __CUDA_ARCH__ >= 530)
            #include "cufftdx/database/records/1200/database_fp16_fwd.hpp.inc"
#endif
            #include "cufftdx/database/records/1200/database_fp32_fwd.hpp.inc"
            #include "cufftdx/database/records/1200/database_fp64_fwd.hpp.inc"

#ifndef CUFFTDX_PTX_REG
#if (__CUDACC_VER_MAJOR__ == 12) && (__CUDACC_VER_MINOR__ < 1)
#define CUFFTDX_PTX_REG(x) "=" #x
#else
#define CUFFTDX_PTX_REG(x) "=&" #x
#endif
#endif

#if (!defined(__CUDA_ARCH__) || __CUDA_ARCH__ >= 530)
#ifndef __HALF2_TO_UI
#define __HALF2_TO_UI(var) *(reinterpret_cast<unsigned int *>(&(var)))
#endif

#if !defined(CUFFTDX_DETAIL_MANUAL_IMPL_FILTER) || (defined(CUFFTDX_DETAIL_INCLUDE_PRECISION_FP16))
            #include "cufftdx/database/records/definitions_fp16_fwd.hpp.inc"
#endif

#endif
#if !defined(CUFFTDX_DETAIL_MANUAL_IMPL_FILTER) || (defined(CUFFTDX_DETAIL_INCLUDE_PRECISION_FP32))
            #include "cufftdx/database/records/definitions_fp32_fwd.hpp.inc"
#endif
#if !defined(CUFFTDX_DETAIL_MANUAL_IMPL_FILTER) || (defined(CUFFTDX_DETAIL_INCLUDE_PRECISION_FP64))
            #include "cufftdx/database/records/definitions_fp64_fwd.hpp.inc"
#endif

#ifdef __HALF2_TO_UI
#undef __HALF2_TO_UI
#endif

        } // namespace detail
    }     // namespace database
} // namespace cufftdx

#endif // CUFFTDX_DATABASE_DATABASE_HPP
