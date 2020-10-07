cmake_minimum_required(VERSION 3.2)

project(ColoredQuad C CXX)

set(SOURCE_FILES
    main.cpp
)

add_executable(ColoredQuad ${SOURCE_FILES})

config_project(ColoredQuad OPENTHREADS)
config_project(ColoredQuad OSG)
config_project(ColoredQuad OSGDB)
config_project(ColoredQuad OSGUTIL)
config_project(ColoredQuad OSGVIEWER)

install(TARGETS ColoredQuad DESTINATION ${OSG_PRAC_INSTALL_BIN_DIR})
