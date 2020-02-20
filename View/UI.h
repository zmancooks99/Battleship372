//
// Created by Zachary Mason on 2/10/20.
//

#ifndef BATTLESHIP372_UI_H
#define BATTLESHIP372_UI_H

#include <utility>
    //std::pair
#include <vector>

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
    int printBoard(int boardDim, std::vector<int> boardVect); //(int Board Dimension, int Board Vector)
    std::pair<int, int> getShot(); //Grabs user input for Shots
    void shotInvalid(std::pair<int, int>); //Prints invalid shot
};


#endif //BATTLESHIP372_UI_H
