cmake_minimum_required(VERSION 3.25)

project(playground LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    message(STATUS "Setup for GCC")
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif ()

find_package(Boost 1.80 REQUIRED)

add_subdirectory(src)
