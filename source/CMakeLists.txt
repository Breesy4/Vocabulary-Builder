cmake_minimum_required(VERSION 3.2)
project(VocabularyBuilder VERSION 1.0.0 LANGUAGES CPP)
add_executable( VocabularyBuilder
    IO_Manager/InputManager.cpp
    main.cpp  
)