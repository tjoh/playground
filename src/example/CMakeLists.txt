project(example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example
    main.cpp
)

target_include_directories(example PRIVATE
    ${CMAKE_SOURCE_DIR}/src/lib
)

target_link_libraries(example PRIVATE
    mylib
)

install(TARGETS example
    CONFIGURATIONS Debug
    DESTINATION ${CMAKE_SOURCE_DIR}/bin/Debug/bin
)

install(TARGETS example
    CONFIGURATIONS Release
    DESTINATION ${CMAKE_SOURCE_DIR}/bin/Release/bin
)
