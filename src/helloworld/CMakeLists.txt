cmake_minimum_required(VERSION 3.2)

project(HelloWorld C CXX)

set(SOURCE_FILES
    helloworld.cpp
)

add_executable(HelloWorld ${SOURCE_FILES})

config_project(HelloWorld OPENTHREADS)
config_project(HelloWorld OSG)
config_project(HelloWorld OSGDB)
config_project(HelloWorld OSGUTIL)
config_project(HelloWorld OSGVIEWER)

install(TARGETS HelloWorld DESTINATION ${OSG_PRAC_INSTALL_BIN_DIR})
