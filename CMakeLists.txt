# CMakeList.txt : CMake project for ToolboxPluginTemplate, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.15)

set(CMAKE_GENERATOR_PLATFORM win32)

project("my_toolbox_plugin") # CHANGEME

if(NOT(CMAKE_SIZEOF_VOID_P EQUAL 4))
    message(FATAL_ERROR "You are configuring a non 32-bit build, this is not supported. Run cmake with `-A Win32`")
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    gwtoolbox
    GIT_REPOSITORY https://github.com/adituv/gwtoolboxpp
    GIT_TAG        519238641e74a869cd8c4fb84fa8119338b5be9e # public-headers-cmake
)
FetchContent_MakeAvailable(gwtoolbox)

# Add source to this project's executable.
add_library (my_toolbox_plugin SHARED "src/MyToolboxPlugin.cpp" "src/MyToolboxPlugin.h")
target_link_libraries(my_toolbox_plugin GWToolboxdll)

set_property(TARGET my_toolbox_plugin PROPERTY CXX_STANDARD 20)