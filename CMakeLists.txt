cmake_minimum_required(VERSION 4.0)
project(Practice_virtual_02_03)

set(CMAKE_CXX_STANDARD 20)

add_executable(Practice_virtual_02_03 main.cpp
        MyString.h
        MyString.cpp
        Pet.h
        Dog.h
        Cat.h
        Parrot.h
        Hamster.h)
