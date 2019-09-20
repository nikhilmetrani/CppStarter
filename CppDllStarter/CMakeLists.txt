cmake_minimum_required(VERSION 3.0)
project(CppDllStarter)

set(CMAKE_CXX_STANDARD 17)

add_definitions(-DCPP_DLL_STARTER_DLL)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/source/*.cpp)

add_library(CppDllStarter SHARED ${SRC_FILES})

target_include_directories(
        CppDllStarter PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

set_target_properties(
        CppDllStarter PROPERTIES
        LINKER_LANGUAGE CXX
)
