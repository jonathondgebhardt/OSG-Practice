cmake_minimum_required(VERSION 3.2)

project(MonitoringTarget C CXX)

set(SOURCE_FILES
    main.cpp
    MonitoringTarget.h
)

add_executable(MonitoringTarget ${SOURCE_FILES})

config_project(MonitoringTarget OPENTHREADS)
config_project(MonitoringTarget OSG)
config_project(MonitoringTarget OSGDB)
config_project(MonitoringTarget OSGUTIL)
config_project(MonitoringTarget OSGVIEWER)

install(TARGETS MonitoringTarget DESTINATION ${OSG_PRAC_INSTALL_BIN_DIR})
