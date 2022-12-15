project(mylib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(mylib STATIC
    incrementer.cpp
)

install(TARGETS mylib
    CONFIGURATIONS Debug
    DESTINATION ${CMAKE_SOURCE_DIR}/bin/Debug/lib
)

install(TARGETS mylib
    CONFIGURATIONS Release
    DESTINATION ${CMAKE_SOURCE_DIR}/bin/Release/lib
)
