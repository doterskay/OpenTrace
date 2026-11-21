cmake_minimum_required(VERSION 3.20)

project(OpenTrace)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBZIP REQUIRED IMPORTED_TARGET libzip)

add_executable(OpenTrace
    src/main.cpp
)

target_link_libraries(OpenTrace PRIVATE PkgConfig::LIBZIP)