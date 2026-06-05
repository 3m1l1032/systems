# 
# Emilio Cazares Borbon, June 2026
# 
# Building the exploration project for system controls.
# 
cmake_minimum_required(VERSION 3.26)
project(systems VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(messages)
target_sources(messages
    PRIVATE
        messages/messages.cpp
)

add_executable(systems)
target_sources(systems
    PRIVATE
        main.cpp
    PUBLIC
        main.hpp
)
target_link_libraries(systems
    PRIVATE
        messages
)