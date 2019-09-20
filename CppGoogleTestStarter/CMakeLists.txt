cmake_minimum_required(VERSION 3.0)
# Set the project name
project (CppGoogleTestStarter)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(lib/google-test)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/tests/*.cpp)

# Add a testing executable
add_executable(CppGoogleTestStarter ${SRC_FILES})

# Link google test
target_link_libraries(CppGoogleTestStarter
    gtest
    gtest_main
    CppDllStarter
)

# enable CTest testing
enable_testing()

add_test(NAME
    CppGoogleTestStarter
    COMMAND ${CMAKE_BINARY_DIR}/bin/CppGoogleTestStarter
)
