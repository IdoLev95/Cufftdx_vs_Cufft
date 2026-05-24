// Copyright (c) 2019-2025, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
// NVIDIA CORPORATION and its licensors retain all intellectual property
// and proprietary rights in and to this software, related documentation
// and any modifications thereto.  Any use, reproduction, disclosure or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA CORPORATION is strictly prohibited.

#ifndef CUFFTDX_UTILS_HPP
#define CUFFTDX_UTILS_HPP

#include "cufftdx/traits/detail/frontend_backend_mappings.hpp"
#if defined(__CUDACC__) || defined(__CUDACC_RTC__)
#include "cufftdx/traits/fft_traits.hpp"
#endif
namespace cufftdx {
    namespace utils {
        using detail::algorithm;
        using detail::execution_type;
        using detail::backend_impl_traits;
        using detail::frontend_to_backend;
    }
    namespace experimental {
        namespace utils {
            constexpr unsigned int get_shared_memory_size_for_dynamic_batching(const unsigned int shared_memory_size_per_fft, const unsigned int ffts_per_block, const unsigned int implicit_type_batching) {
                return (implicit_type_batching != 0) ? (shared_memory_size_per_fft * (ffts_per_block + implicit_type_batching - 1) / implicit_type_batching) : 0;
            }

#if defined(__CUDACC__) || defined(__CUDACC_RTC__)
            template<class FFT>
            constexpr unsigned int get_shared_memory_size_for_dynamic_batching(const unsigned int ffts_per_block) {
                static_assert(cufftdx::experimental::is_dynamic_batching_enabled_v<FFT>, "Dynamic batching is not enabled for this FFT");
                return get_shared_memory_size_for_dynamic_batching(FFT::shared_memory_size, ffts_per_block, FFT::implicit_type_batching);
            }
#endif
        }
    }
} // namespace cufftdx
#ifdef CUFFTDX_ENABLE_CUFFT_DEPENDENCY
#include "cufftdx/utils/cufft_lto.hpp"
#endif

#endif // CUFFTDX_UTILS_HPP
