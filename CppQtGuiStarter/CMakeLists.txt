cmake_minimum_required(VERSION 3.0)
project(CppQtGuiStarter)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

set(SRC_LOC ${PROJECT_SOURCE_DIR}/source/)
file(GLOB SRC_FILES ${SRC_LOC}*.cpp ${SRC_LOC}*ui ${PROJECT_SOURCE_DIR}/resources/*.rc)

if(WIN32)
    if("${CMAKE_PREFIX_PATH}" STREQUAL "")
        set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.13.0\\5.13.0\\msvc2017_64")
        if("${CMAKE_SIZEOF_VOID_P}" STREQUAL "4")
            set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.13.0\\5.13.0\\msvc2017")
        endif()
    endif()

    set(Qt5_DIR "${CMAKE_PREFIX_PATH}\\lib\\cmake\\Qt5")

    message("CMAKE_PREFIX_PATH: " ${CMAKE_PREFIX_PATH})
    message("Qt5_DIR: " ${Qt5_DIR})
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

include_directories(${CMAKE_BINARY_DIR}/${PROJECT_NAME}/${PROJECT_NAME}_autogen/include/)
add_executable(CppQtGuiStarter WIN32 ${SRC_FILES})

target_link_libraries(CppQtGuiStarter CppDllStarter Qt5::Widgets)

add_custom_command(
    TARGET CppQtGuiStarter POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Core> $<TARGET_FILE_DIR:CppQtGuiStarter>
    COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Gui> $<TARGET_FILE_DIR:CppQtGuiStarter>
    COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Widgets> $<TARGET_FILE_DIR:CppQtGuiStarter>
)
