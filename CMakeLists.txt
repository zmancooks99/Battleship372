cmake_minimum_required(VERSION 3.15)
project(Battleship372)

set(CMAKE_CXX_STANDARD 20)

add_executable(Battleship372 main.cpp Model/Board.cpp Model/Board.h Game.cpp Game.h Model/UI.cpp Model/UI.h)