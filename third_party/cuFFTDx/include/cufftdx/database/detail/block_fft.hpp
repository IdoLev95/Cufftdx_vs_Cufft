// Copyright (c) 2019-2025, NVIDIA CORPORATION & AFFILIATES.  All rights reserved.
//
// NVIDIA CORPORATION and its licensors retain all intellectual property
// and proprietary rights in and to this software, related documentation
// and any modifications thereto.  Any use, reproduction, disclosure or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA CORPORATION is strictly prohibited.

#ifndef CUFFTDX_DATABASE_DETAIL_BLOCK_FFT_HPP
#define CUFFTDX_DATABASE_DETAIL_BLOCK_FFT_HPP

#include <cuda_fp16.h>

#include "cufftdx/operators.hpp"
#include "cufftdx/traits/detail/make_complex_type.hpp"
#include "cufftdx/database/detail/type_list.hpp"

namespace cufftdx {
    namespace database {
        namespace detail {
            template<unsigned int  Size /* FFT size */,
                     class         Precision,
                     fft_type      Type,
                     fft_direction Direction,
                     unsigned int  Architecture,
                     experimental::code_type CodeType = experimental::code_type::ptx>
            struct block_fft_record {
                static constexpr bool defined = false;
            };

            template<unsigned int            ElementsPerThread /* Number of elements processed per thread */,
                     unsigned int            StoreElementsPerThread,
                     unsigned int            StorageSize, /* Storage size, number of elements in input/output array */
                     unsigned int            ThreadsPerFFT,
                     unsigned int            FFTsPerBlock,
                     unsigned int            SharedMemorySize /* Size of shared mem. required by one FFT */,
                     unsigned int            NumSyncs,
                     unsigned long long      FunctionId,
                     experimental::code_type CodeType>
            struct fft_implementation {
                static constexpr unsigned int            elements_per_thread       = ElementsPerThread;
                static constexpr unsigned int            store_elements_per_thread = StoreElementsPerThread;
                static constexpr unsigned int            storage_size              = StorageSize;
                static constexpr unsigned int            threads_per_fft           = ThreadsPerFFT;
                static constexpr unsigned int            ffts_per_block            = FFTsPerBlock;
                static constexpr unsigned int            shared_memory_size        = SharedMemorySize;
                static constexpr unsigned int            num_syncs                 = NumSyncs;
                static constexpr unsigned long long      function_id               = FunctionId;
                static constexpr experimental::code_type code                      = CodeType;
            };

            template<unsigned int       ElementsPerThread,
                     unsigned int       StoreElementsPerThread,
                     unsigned int       StorageSize,
                     unsigned int       ThreadsPerFFT,
                     unsigned int       FFTsPerBlock,
                     unsigned int       SharedMemorySize,
                     unsigned int       NumSyncs,
                     unsigned long long FunctionId>
            struct block_fft_implementation:
                fft_implementation<ElementsPerThread,
                                   StoreElementsPerThread,
                                   StorageSize,
                                   ThreadsPerFFT,
                                   FFTsPerBlock,
                                   SharedMemorySize,
                                   NumSyncs,
                                   FunctionId,
                                   experimental::code_type::ptx> {};

            template<unsigned int       ElementsPerThread,
                     unsigned int       StoreElementsPerThread,
                     unsigned int       StorageSize,
                     unsigned int       ThreadsPerFFT,
                     unsigned int       FFTsPerBlock,
                     unsigned int       SharedMemorySize,
                     unsigned long long FunctionId,
                     unsigned int       Version>
            struct block_fft_lto_implementation:
                fft_implementation<ElementsPerThread,
                                   StoreElementsPerThread,
                                   StorageSize,
                                   ThreadsPerFFT,
                                   FFTsPerBlock,
                                   SharedMemorySize,
                                   0,
                                   FunctionId,
                                   experimental::code_type::ltoir> {
                static constexpr unsigned version = Version;
            };

            template<class Implementation, typename PrecisionType, unsigned int TRPOption>
            struct enforce_trp {
                static constexpr bool matches = true;
            };

            template<class Implementation, typename PrecisionType>
            struct enforce_trp<Implementation, PrecisionType, 1 /* X */> {
                static constexpr bool matches =
                    sizeof(PrecisionType) * Implementation::elements_per_thread * Implementation::threads_per_fft ==
                    Implementation::shared_memory_size;
            };

            template<class Implementation, typename PrecisionType>
            struct enforce_trp<Implementation, PrecisionType, 2 /* XY */> {
                static constexpr bool matches =
                    sizeof(PrecisionType) * 2 * Implementation::elements_per_thread * Implementation::threads_per_fft ==
                    Implementation::shared_memory_size;
            };

            // Selects block_fft_implementation from type_list based on ElementsPerThread,
            // if there is no such implementation in list search_by_ept::type is set to void.
            template<unsigned int ElementsPerThread,
                     typename PrecisionType,
                     unsigned int TRPOption,
                     class ImplementationList>
            struct search_by_ept;

            template<unsigned int ElementsPerThread,
                     typename PrecisionType,
                     unsigned int TRPOption,
                     class Implementation>
            struct search_by_ept<ElementsPerThread, PrecisionType, TRPOption, type_list<Implementation>> {
                using type = CUFFTDX_STD::conditional_t<
                    (Implementation::elements_per_thread == ElementsPerThread &&
                     (Implementation::threads_per_fft == 1 ||
                      enforce_trp<Implementation, PrecisionType, TRPOption>::matches)),
                    Implementation,
                    void>;
            };

            template<unsigned int ElementsPerThread,
                     typename PrecisionType,
                     unsigned int TRPOption,
                     class Head,
                     class... Tail>
            struct search_by_ept<ElementsPerThread, PrecisionType, TRPOption, type_list<Head, Tail...>> {
                using type = CUFFTDX_STD::conditional_t<
                    (Head::elements_per_thread == ElementsPerThread &&
                     (Head::threads_per_fft == 1 || enforce_trp<Head, PrecisionType, TRPOption>::matches)),
                    Head,
                    typename search_by_ept<ElementsPerThread, PrecisionType, TRPOption, type_list<Tail...>>::type>;
            };

            // Helper to safely get elements_per_thread from a type, with configurable fallback for void
            template<typename T, unsigned int FallbackValue = ~0u>
            struct safe_ept {
                static constexpr unsigned int value = T::elements_per_thread;
            };

            template<unsigned int FallbackValue>
            struct safe_ept<void, FallbackValue> {
                static constexpr unsigned int value = FallbackValue;
            };

            // Selects block_fft_implementation from type_list based on finding the first
            // ElementsPerThread that is greater than or equal to the given MinElementsPerThread.
            // If no such implementation exists, search_by_min_ept_greater_than::type is set to void.
            template<unsigned int MinElementsPerThread,
                     typename PrecisionType,
                     unsigned int TRPOption,
                     class ImplementationList>
            struct search_by_min_ept_greater_than;

            // Base case: empty type_list
            template<unsigned int MinElementsPerThread,
                     typename PrecisionType,
                     unsigned int TRPOption>
            struct search_by_min_ept_greater_than<MinElementsPerThread, PrecisionType, TRPOption, type_list<>> {
                using type = void;
            };

            template<unsigned int MinElementsPerThread,
                     typename PrecisionType,
                     unsigned int TRPOption,
                     class Implementation>
            struct search_by_min_ept_greater_than<MinElementsPerThread, PrecisionType, TRPOption, type_list<Implementation>> {
                static constexpr bool ept_check = Implementation::elements_per_thread >= MinElementsPerThread;
                static constexpr bool trp_check = (Implementation::threads_per_fft == 1 || enforce_trp<Implementation, PrecisionType, TRPOption>::matches);
                static constexpr bool overall_valid = ept_check && trp_check;

                using type = CUFFTDX_STD::conditional_t<overall_valid, Implementation, void>;
            };

            template<unsigned int MinElementsPerThread,
                     typename PrecisionType,
                     unsigned int TRPOption,
                     class Head,
                     class... Tail>
            struct search_by_min_ept_greater_than<MinElementsPerThread, PrecisionType, TRPOption, type_list<Head, Tail...>> {
                static constexpr bool head_valid = (Head::elements_per_thread >= MinElementsPerThread &&
                                                   (Head::threads_per_fft == 1 || enforce_trp<Head, PrecisionType, TRPOption>::matches));

                using type = CUFFTDX_STD::conditional_t<head_valid,
                                                        Head,
                                                        typename search_by_min_ept_greater_than<MinElementsPerThread, PrecisionType, TRPOption, type_list<Tail...>>::type>;
            };

            template<unsigned Version, unsigned long long FunctionID, typename T, unsigned int FFTsPerBlock>
            __device__ void cufftdx_private_lto_function(T* rmem, void* smem, int sign);

            template<unsigned int FunctionID, typename T>
            __device__ void cufftdx_private_function(typename cufftdx::detail::make_complex_type<T>::cufftdx_type* rmem,
                                                     unsigned smem);


            template<unsigned int FunctionID, typename T>
            __device__ void cufftdx_private_function_wrapper(typename cufftdx::detail::make_complex_type<T>::cufftdx_type* rmem,
                                                             void* smem) {
                unsigned smem32 = static_cast<unsigned>(__cvta_generic_to_shared(smem));
                cufftdx_private_function<FunctionID, T>(rmem, smem32);
            }

            template<unsigned int ElementsPerThread,
                     unsigned int MinElementsPerThread,
                     typename PrecisionType,
                     typename BlockFFTRecord,
                     bool IsDefined = BlockFFTRecord::defined>
            struct select_block_config_helper {
                using absolute_optimal = typename database::detail::type_list_element<0, typename BlockFFTRecord::blobs>::type;

                // Check if MinElementsPerThread is less than or equal to absolute_optimal EPT
                static constexpr bool use_absolute_optimal = (MinElementsPerThread == 0) ||
                                                            (MinElementsPerThread <= database::detail::safe_ept<absolute_optimal, 0>::value);

                using optimal = CUFFTDX_STD::conditional_t<use_absolute_optimal,
                                                           absolute_optimal,
                                                           typename database::detail::search_by_min_ept_greater_than<MinElementsPerThread, PrecisionType, 0, typename BlockFFTRecord::blobs>::type>;

#ifdef CUFFTDX_DETAIL_BLOCK_FFT_ENFORCE_X_TRANSPOSITION
                static constexpr unsigned int this_fft_trp_option_v = 1;
#elif defined(CUFFTDX_DETAIL_BLOCK_FFT_ENFORCE_XY_TRANSPOSITION)
                static constexpr unsigned int this_fft_trp_option_v = 2;
#else
                static constexpr unsigned int this_fft_trp_option_v = 0;
#endif
                // If an ElementsPerThread has been selected but is lower than MinElementsPerThread, no implementation is avaible that satisfies the requirements
                // If no elements per thread is specified, and optimal is void, then there is no implementation that satisfies the requirements also
                using selected = CUFFTDX_STD::conditional_t<(ElementsPerThread != 0) && (MinElementsPerThread > ElementsPerThread),
                                                                          void,
                                                                          typename database::detail::search_by_ept<(ElementsPerThread == 0) ? database::detail::safe_ept<optimal, 0>::value : ElementsPerThread,
                                                                          PrecisionType,
                                                                          this_fft_trp_option_v,
                                                                          typename BlockFFTRecord::blobs>::type>;
            };

            template<unsigned int ElementsPerThread,
                     unsigned int MinElementsPerThread,
                     typename PrecisionType,
                     typename BlockFFTRecord>
            struct select_block_config_helper<ElementsPerThread, MinElementsPerThread, PrecisionType, BlockFFTRecord, false> {
                using optimal = void;
                using selected = void;
            };

            // Helper to select block configuration with minimum EPT greater than specified value
            template<unsigned int MinElementsPerThread,
                     typename PrecisionType,
                     typename BlockFFTRecord,
                     bool IsDefined = BlockFFTRecord::defined>
            struct select_block_config_min_ept_helper {
#ifdef CUFFTDX_DETAIL_BLOCK_FFT_ENFORCE_X_TRANSPOSITION
                static constexpr unsigned int this_fft_trp_option_v = 1;
#elif defined(CUFFTDX_DETAIL_BLOCK_FFT_ENFORCE_XY_TRANSPOSITION)
                static constexpr unsigned int this_fft_trp_option_v = 2;
#else
                static constexpr unsigned int this_fft_trp_option_v = 0;
#endif
                using selected = typename database::detail::search_by_min_ept_greater_than<MinElementsPerThread,
                                                                                          PrecisionType,
                                                                                          this_fft_trp_option_v,
                                                                                          typename BlockFFTRecord::blobs>::type;
            };

            template<unsigned int MinElementsPerThread,
                     typename PrecisionType,
                     typename BlockFFTRecord>
                     struct select_block_config_min_ept_helper<MinElementsPerThread, PrecisionType, BlockFFTRecord, false> {
                using selected = void;
            };


            template<unsigned int            PTXSize,
                     fft_type                PTXType,
                     fft_direction           PTXDirection,
                     unsigned int            PTXArchitecture,
                     unsigned int            PTXElementsPerThread,
                     unsigned int            PTXMinElementsPerThread,
                     unsigned int            LTOSize,
                     fft_type                LTOType,
                     fft_direction           LTODirection,
                     unsigned int            LTOArchitecture,
                     unsigned int            LTOElementsPerThread,
                     unsigned int            LTOMinElementsPerThread,
                     typename                PrecisionType,
                     experimental::code_type CodeType>
            struct query_database {
                // Select block_fft implementation
                // * block_fft_record has all possible implementations in type_list named "blobs"
                // * first implementation from blobs is considered default / suggested / optimal
                using block_fft_ptx_record_t = block_fft_record<PTXSize,
                                                                PrecisionType,
                                                                PTXType,
                                                                PTXDirection,
                                                                PTXArchitecture,
                                                                experimental::code_type::ptx>;

                using block_fft_lto_record_t = block_fft_record<LTOSize,
                                                                PrecisionType,
                                                                LTOType,
                                                                LTODirection,
                                                                LTOArchitecture,
                                                                experimental::code_type::ltoir>;
                using block_fft_record_t =
                    CUFFTDX_STD::conditional_t<CodeType == experimental::code_type::ltoir,
                                               CUFFTDX_STD::conditional_t<block_fft_lto_record_t::defined, block_fft_lto_record_t, block_fft_ptx_record_t> /* if code = ltoir, fallback to ptx impl if lto impl is not available */,
                                               block_fft_ptx_record_t /* if code = ptx, always use ptx impl */>;

                static constexpr unsigned int ept =
                    CUFFTDX_STD::is_same_v<block_fft_record_t, block_fft_ptx_record_t> ? PTXElementsPerThread : LTOElementsPerThread;
                static constexpr unsigned int min_ept =
                    CUFFTDX_STD::is_same_v<block_fft_record_t, block_fft_ptx_record_t> ? PTXMinElementsPerThread : LTOMinElementsPerThread;

                // Helper template to find implementation with minimum EPT greater than or equal to specified value
                using min_ept_greater_than_t = typename select_block_config_min_ept_helper<min_ept, PrecisionType, block_fft_record_t>::selected;
                // Helper template to find optimal implementation
                using optimal_block_config_t  = typename select_block_config_helper<ept, min_ept, PrecisionType, block_fft_record_t>::optimal;
                using selected_block_config_t = typename select_block_config_helper<ept, min_ept, PrecisionType, block_fft_record_t>::selected;

            };

            // Convenient function template to find implementation with minimum EPT greater than or equal to specified value
            template<unsigned int            PTXSize,
                     fft_type                PTXType,
                     fft_direction           PTXDirection,
                     unsigned int            PTXArchitecture,
                     unsigned int            PTXElementsPerThread,
                     unsigned int            PTXMinElementsPerThread,
                     unsigned int            LTOSize,
                     fft_type                LTOType,
                     fft_direction           LTODirection,
                     unsigned int            LTOArchitecture,
                     unsigned int            LTOElementsPerThread,
                     unsigned int            LTOMinElementsPerThread,
                     typename                PrecisionType,
                     experimental::code_type CodeType = experimental::code_type::ptx>
            using find_min_ept_implementation_t = typename query_database<PTXSize, PTXType, PTXDirection, PTXArchitecture, PTXElementsPerThread, PTXMinElementsPerThread, LTOSize, LTOType, LTODirection, LTOArchitecture, LTOElementsPerThread, LTOMinElementsPerThread, PrecisionType, CodeType>::min_ept_greater_than_t;
        } // namespace detail
    } // namespace database
} // namespace cufftdx

#endif // CUFFTDX_DATABASE_DETAIL_BLOCK_FFT_HPP
