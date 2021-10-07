cmake_minimum_required(VERSION 3.20)
project(Labb3_Rainbow_Robin_Ellingsen)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Labb3_Rainbow_Robin_Ellingsen
        blink.ino
        colorSwitch.ino
        declare.h
        Labb3_Rainbow_Robin_Ellingsen.ino
        rainbow.ino
        readKey.ino
        showstopper.ino)
