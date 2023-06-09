cmake_minimum_required(VERSION 3.2)
project(deepviewrt_cpp_example)

IF (NOT CMAKE_BUILD_TYPE)
    SET (CMAKE_BUILD_TYPE release CACHE STRING "Choose the type of build" FORCE)
ENDIF()

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall -O3")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g  -O1")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wno-unused-variable -O3")


find_package(OpenCV 4.0 QUIET)
if(NOT OpenCV_FOUND)
    find_package(OpenCV 3.0 QUIET)
    if(NOT OpenCV_FOUND)
        message(FATAL_ERROR "OpenCV > 3.0 not found.")
    endif()
endif()


add_definitions(-DUSE_ION)
add_definitions(-DUSE_G2D)


find_package(PkgConfig)
pkg_check_modules(GLIB REQUIRED glib-2.0)
pkg_check_modules(GSTREAMER REQUIRED gstreamer-1.0>=1.4)
pkg_check_modules(GSTVIDEO  REQUIRED gstreamer-video-1.0>=1.4)
pkg_check_modules(GSTVIDEO  REQUIRED gstreamer-video-1.0>=1.4)


# add_subdirectory(lib/ocl) ldconfig -p | grep vpu
# add_subdirectory(lib/gst)
add_subdirectory(vpu)
# add_subdirectory(gst_case)
