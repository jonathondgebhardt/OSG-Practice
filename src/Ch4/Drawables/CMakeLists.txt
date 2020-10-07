cmake_minimum_required(VERSION 3.2)

project(Drawables C CXX)

set(SOURCE_FILES
    main.cpp
)

add_executable(Drawables ${SOURCE_FILES})

config_project(Drawables OPENTHREADS)
config_project(Drawables OSG)
config_project(Drawables OSGDB)
config_project(Drawables OSGUTIL)
config_project(Drawables OSGVIEWER)

install(TARGETS Drawables DESTINATION ${OSG_PRAC_INSTALL_BIN_DIR})
