# Copyright (c) 2024-2025, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
#
# NVIDIA CORPORATION and its licensors retain all intellectual property
# and proprietary rights in and to this software, related documentation
# and any modifications thereto.  Any use, reproduction, disclosure or
# distribution of this software and related documentation without an express
# license agreement from NVIDIA CORPORATION is strictly prohibited.

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was commondx-config.cmake.in                            ########

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

if(NOT TARGET commondx::commondx)
    set(commondx_VERSION "1.3.0")
    # build: 6

    # Targets
    include("${CMAKE_CURRENT_LIST_DIR}/commondx-targets.cmake")

    set_and_check(commondx_INCLUDE_DIR  "${PACKAGE_PREFIX_DIR}/include")
    set_and_check(commondx_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
    check_required_components(commondx)
    if(NOT ${CMAKE_FIND_PACKAGE_NAME}_FIND_QUIETLY)
        message(STATUS "Found commondx: (Version: 1.3.0, Include dirs: ${commondx_INCLUDE_DIRS})")
    endif()
endif()
