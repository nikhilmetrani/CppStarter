cmake_minimum_required(VERSION 3.0)
project(CppExeStarter)
include(../3rdParty/cmake-precompiled-header/PrecompiledHeader.cmake)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR})
file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/source/*.cpp)

add_executable(CppExeStarter ${SRC_FILES} cppstpch.cpp)

target_link_libraries(CppExeStarter CppDllStarter)

add_precompiled_header(CppExeStarter cppstpch.h SOURCE_CXX cppstpch.cpp FORCEINCLUDE)
