cmake_minimum_required(VERSION 3.16)

# set the project name
project(Elowan)

# add the executable
add_executable(Elowan main.cpp)
target_include_directories(Elowan PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/headers)
set(SOURCES ${SOURCES} sources/Personnage.cpp)
set(SOURCES ${SOURCES} sources/Monstre.cpp)
set(SOURCES ${SOURCES} sources/Zombie.cpp)
set(SOURCES ${SOURCES} sources/Squelette.cpp)
target_sources(Elowan PRIVATE ${SOURCES})