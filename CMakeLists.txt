cmake_minimum_required(VERSION 3.10)
project(VocabularyBuilder VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(
    source/IO_Manager
)

add_executable( VocabularyBuilder
    source/IO_Manager/InputManager.cpp
    source/Flow/main.cpp  
)