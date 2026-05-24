# Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
#
# NVIDIA CORPORATION and its licensors retain all intellectual property
# and proprietary rights in and to this software, related documentation
# and any modifications thereto.  Any use, reproduction, disclosure or
# distribution of this software and related documentation without an express
# license agreement from NVIDIA CORPORATION is strictly prohibited.

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was cufftdx-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

if(NOT TARGET cufftdx::cufftdx)
    set(cufftdx_DEPENDENCY_CUTLASS_DISABLED FALSE)
    if(${mathdx_cufftdx_DISABLE_CUTLASS})
        set(cufftdx_DEPENDENCY_CUTLASS_DISABLED TRUE)
    endif()
    if(${cufftdx_DISABLE_CUTLASS})
        set(cufftdx_DEPENDENCY_CUTLASS_DISABLED TRUE)
    endif()

    set(cufftdx_DEPENDENCY_CUTLASS_RESOLVED FALSE)
    if(NOT ${cufftdx_DEPENDENCY_CUTLASS_DISABLED})
        # Finds CUTLASS/CuTe and sets cufftdx_cutlass_INCLUDE_DIR to <CUTLASS_ROOT>/include
        #
        # CUTLASS root directory is found by checking following variables in this order:
        # 1. Root directory of NvidiaCutlass package
        # 2. cufftdx_CUTLASS_ROOT
        # 3. ENV{cufftdx_CUTLASS_ROOT}
        set(cufftdx_DEPENDENCY_CUTLASS_RESOLVED FALSE)
        set(cufftdx_CUTLASS_MIN_VERSION 3.6.0)
        find_package(NvidiaCutlass QUIET)
        if(${NvidiaCutlass_FOUND})
            if(${NvidiaCutlass_VERSION} VERSION_LESS ${cufftdx_CUTLASS_MIN_VERSION})
                message(FATAL_ERROR "Found CUTLASS version is ${NvidiaCutlass_VERSION}, minimal required version is ${cufftdx_CUTLASS_MIN_VERSION}")
            endif()
            get_property(cufftdx_NvidiaCutlass_include_dir TARGET nvidia::cutlass::cutlass PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
            set_and_check(cufftdx_cutlass_INCLUDE_DIR "${cufftdx_NvidiaCutlass_include_dir}")
            if(NOT ${CMAKE_FIND_PACKAGE_NAME}_FIND_QUIETLY)
                message(STATUS "cufftdx: Found CUTLASS (NvidiaCutlass) dependency: ${cufftdx_NvidiaCutlass_include_dir}")
            endif()
            set(cufftdx_DEPENDENCY_CUTLASS_RESOLVED TRUE)
        elseif(DEFINED cufftdx_CUTLASS_ROOT)
            get_filename_component(cufftdx_CUTLASS_ROOT_ABSOLUTE ${cufftdx_CUTLASS_ROOT} ABSOLUTE)
            set_and_check(cufftdx_cutlass_INCLUDE_DIR  "${cufftdx_CUTLASS_ROOT_ABSOLUTE}/include")
            if(NOT ${CMAKE_FIND_PACKAGE_NAME}_FIND_QUIETLY)
                message(STATUS "cufftdx: Found CUTLASS dependency via cufftdx_CUTLASS_ROOT: ${cufftdx_CUTLASS_ROOT_ABSOLUTE}")
            endif()
            set(cufftdx_DEPENDENCY_CUTLASS_RESOLVED TRUE)
        elseif(DEFINED ENV{cufftdx_CUTLASS_ROOT})
            get_filename_component(cufftdx_CUTLASS_ROOT_ABSOLUTE $ENV{cufftdx_CUTLASS_ROOT} ABSOLUTE)
            set_and_check(cufftdx_cutlass_INCLUDE_DIR "${cufftdx_CUTLASS_ROOT_ABSOLUTE}/include")
            if(NOT ${CMAKE_FIND_PACKAGE_NAME}_FIND_QUIETLY)
                message(STATUS "cufftdx: Found CUTLASS dependency via ENV{cufftdx_CUTLASS_ROOT}: ${cufftdx_CUTLASS_ROOT_ABSOLUTE}")
            endif()
            set(cufftdx_DEPENDENCY_CUTLASS_RESOLVED TRUE)
        endif()
        if(NOT ${cufftdx_DEPENDENCY_CUTLASS_RESOLVED})
            set(${CMAKE_FIND_PACKAGE_NAME}_FOUND FALSE)
            if(${CMAKE_FIND_PACKAGE_NAME}_FIND_REQUIRED)
                message(FATAL_ERROR "${CMAKE_FIND_PACKAGE_NAME} package NOT FOUND - dependency missing:\n"
                                    "    Missing CUTLASS dependency.\n"
                                    "    You can set it via cufftdx_CUTLASS_ROOT variable or by providing\n"
                                    "    path to NvidiaCutlass package using NvidiaCutlass_ROOT or NvidiaCutlass_DIR.\n")
            endif()
        endif()
    else()
        set(cufftdx_DEPENDENCY_CUTLASS_RESOLVED TRUE)
    endif()

    # Find commondx
    set(cufftdx_DEPENDENCY_COMMONDX_RESOLVED FALSE)
    if(TARGET commondx::commondx)
        set(cufftdx_DEPENDENCY_COMMONDX_RESOLVED TRUE)
    elseif(NOT TARGET commondx::commondx)
        find_package(commondx QUIET)
        if(${commondx_FOUND})
            set(cufftdx_DEPENDENCY_COMMONDX_RESOLVED TRUE)
        endif()
    endif()
    if(NOT ${cufftdx_DEPENDENCY_COMMONDX_RESOLVED})
        set(${CMAKE_FIND_PACKAGE_NAME}_FOUND FALSE)
        if(${CMAKE_FIND_PACKAGE_NAME}_FIND_REQUIRED)
            message(FATAL_ERROR "${CMAKE_FIND_PACKAGE_NAME} package NOT FOUND - dependency missing:\n"
                                "    Missing commonDx dependency.\n")
        endif()
    else()
        get_property(cufftdx_commondx_include_dirs TARGET commondx::commondx PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
        list(GET cufftdx_commondx_include_dirs 0 cufftdx_commondx_include_dir)
        set_and_check(cufftdx_commondx_INCLUDE_DIR "${cufftdx_commondx_include_dir}")

        if(NOT ${CMAKE_FIND_PACKAGE_NAME}_FIND_QUIETLY)
            message(STATUS "cufftdx: Found commondx dependency")
        endif()
    endif()

    if(${cufftdx_DEPENDENCY_COMMONDX_RESOLVED} AND ${cufftdx_DEPENDENCY_CUTLASS_RESOLVED})
        set(cufftdx_VERSION "1.6.1")
        # build: 6
        include("${CMAKE_CURRENT_LIST_DIR}/cufftdx-targets.cmake")

        # Resolve dependencies:
        # 1) CUTLASS
        if(NOT ${cufftdx_DEPENDENCY_CUTLASS_DISABLED})
            if(${NvidiaCutlass_FOUND})
                target_link_libraries(cufftdx::cufftdx INTERFACE nvidia::cutlass::cutlass)
            elseif(DEFINED cufftdx_CUTLASS_ROOT)
                target_include_directories(cufftdx::cufftdx INTERFACE ${cufftdx_cutlass_INCLUDE_DIR})
            elseif(DEFINED ENV{cufftdx_CUTLASS_ROOT})
                target_include_directories(cufftdx::cufftdx INTERFACE ${cufftdx_cutlass_INCLUDE_DIR})
            endif()
        else()
            target_compile_definitions(cufftdx::cufftdx INTERFACE CUFFTDX_DISABLE_CUTLASS_DEPENDENCY)
        endif()
        # 2) commondx
        target_link_libraries(cufftdx::cufftdx INTERFACE commondx::commondx)

        set_and_check(cufftdx_INCLUDE_DIR  "${PACKAGE_PREFIX_DIR}/include")
        set_and_check(cufftdx_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
        set_and_check(cufftdx_cufft_MODULE_PATH "${PACKAGE_PREFIX_DIR}/lib/cmake/cufftdx/")
        set(cufftdx_LIBRARIES cufftdx::cufftdx)
        check_required_components(cufftdx)

        if(NOT ${CMAKE_FIND_PACKAGE_NAME}_FIND_QUIETLY)
            message(STATUS "Found cufftdx: (Version: 1.6.1, Include dirs: ${cufftdx_INCLUDE_DIRS})")
        endif()
    else()
        set(${CMAKE_FIND_PACKAGE_NAME}_FOUND FALSE)
    endif()
endif()

if(NOT TARGET cufftdx::cufftdx_separate_twiddles_lut)
    if(NOT DEFINED cufftdx_SEPARATE_TWIDDLES_CUDA_ARCHITECTURES OR cufftdx_SEPARATE_TWIDDLES_CUDA_ARCHITECTURES STREQUAL "")
        set(cufftdx_SEPARATE_TWIDDLES_CUDA_ARCHITECTURES ${CMAKE_CUDA_ARCHITECTURES})
    endif()

    set_and_check(cufftdx_SEPARATE_TWIDDLES_SRCS "${cufftdx_INCLUDE_DIRS}/../src/cufftdx/lut.cu")
    add_library(cufftdx_separate_twiddles_lut OBJECT EXCLUDE_FROM_ALL ${cufftdx_SEPARATE_TWIDDLES_SRCS})
    add_library(cufftdx::cufftdx_separate_twiddles_lut ALIAS cufftdx_separate_twiddles_lut)
    set_target_properties(cufftdx_separate_twiddles_lut
        PROPERTIES
            CUDA_SEPARABLE_COMPILATION ON
            CUDA_ARCHITECTURES "${cufftdx_SEPARATE_TWIDDLES_CUDA_ARCHITECTURES}"
    )
    target_compile_definitions(cufftdx_separate_twiddles_lut PUBLIC CUFFTDX_USE_SEPARATE_TWIDDLES)
    target_link_libraries(cufftdx_separate_twiddles_lut PUBLIC cufftdx::cufftdx)
endif()
