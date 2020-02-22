//
// Created by Zachary Mason on 2/10/20.
// Code by Riley Maranville
//

#ifndef BATTLESHIP372_UI_H
#define BATTLESHIP372_UI_H

#include <utility>
    //std::pair
#include <vector>
#include <stdexcept>
#include <string>

class UI {
private:
    //Represents an empty space on _board
    const int _EMPTY = 0;

    //Represents a ship space on _board
    const int _SHIP = 1;

    //Represents an missed shot on _board
    const int _MISS = 2;

    //Represents an hit shot on _board
    const int _HIT = 3;
public:
    //---------User Input Functions
    bool Start(); //When program starts menu
    std::pair<int, int> getShot(); //Grabs user input for Shots
    int placeBattleships(int _TEMP_VALUE_LENGTH_SHIP); //Positions is for each ship

    //---------User Output Functions
    void printBoard(int boardDim, std::vector<int> boardVect); //(int Board Dimension, int Board Vector)
    void shotInvalid(std::pair<int, int>); //Prints invalid shot to User

    void targetSunk(); //When Shot Sinks a ship
    void targetHit(); //When Shot Hits a ship
    void targetMiss(); //When Shot Misses a ship

    void Win(); //Game Complete
    void Loss();  //Game Lost
};


#endif //BATTLESHIP372_UI_H
