cmake_minimum_required(VERSION 3.2)

project(osg_prac)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(OSG_PRAC_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(OSG_PRAC_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(OSG_PRAC_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

find_package(OpenThreads)
find_package(osg)
find_package(osgDB)
find_package(osgUtil)
find_package(osgViewer)

macro(config_project PROJNAME LIBNAME)
    include_directories(${${LIBNAME}_INCLUDE_DIR})
    target_link_libraries(${PROJNAME} ${${LIBNAME}_LIBRARY})
endmacro()

include_directories(${OSG_PRAC_INSTALL_INCLUDE_DIR})

add_subdirectory(src)
