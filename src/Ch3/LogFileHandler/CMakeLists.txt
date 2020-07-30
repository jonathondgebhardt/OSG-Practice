cmake_minimum_required(VERSION 3.2)

project(LogFileHandler C CXX)

set(SOURCE_FILES
    main.cpp
)

add_executable(LogFileHandler ${SOURCE_FILES})

config_project(LogFileHandler OPENTHREADS)
config_project(LogFileHandler OSG)
config_project(LogFileHandler OSGDB)
config_project(LogFileHandler OSGUTIL)
config_project(LogFileHandler OSGVIEWER)

install(TARGETS LogFileHandler DESTINATION ${OSG_PRAC_INSTALL_BIN_DIR})
