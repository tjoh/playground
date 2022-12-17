project(unittests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(unittests
    mylib-tests.cpp
)

target_include_directories(unittests PRIVATE
    ${CMAKE_SOURCE_DIR}/src/lib
)

target_link_libraries(unittests PRIVATE
    mylib
)

ADD_TEST(
    NAME mylib-unittest
    COMMAND unittests
)
