cmake_minimum_required(VERSION 3.16)
project(donkey_kong)
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include)
set(SOURCES
	src/main.cpp
	src/input.cpp
	src/window.cpp
)

add_executable(donkey_kong ${SOURCES})

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
target_link_libraries(donkey_kong ${CURSES_LIBRARIES})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
