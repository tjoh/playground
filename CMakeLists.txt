cmake_minimum_required(VERSION 3.18)

project(playground LANGUAGES CXX)

include(CTest)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    message(STATUS "Setup for GCC")
    add_compile_options(
        -Wall
        -Wextra
        -Wpedantic
        -Werror
        -Wshadow
        -fno-common
        -Wconversion
        -Wpointer-arith
        -Wcast-qual
        -Wcast-align
        -Wwrite-strings
    )
    add_link_options(
        $<$<CONFIG:Release>:-flto>
    )
endif ()

find_package(Boost 1.74 REQUIRED)

add_subdirectory(src)
add_subdirectory(test)
