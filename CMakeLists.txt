cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(etchasketch)

include_directories(include)

set(SOURCES
	src/main.cpp
	src/elements.cpp
	src/window.cpp
	src/input.cpp
)

add_executable(etchasketch ${SOURCES})

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
target_link_libraries(etchasketch ${CURSES_LIBRARIES})
