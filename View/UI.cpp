//
// Created by Zachary Mason on 2/10/20.
// Code by Riley Maranville
//

#include "UI.h"
#include <iostream>

using std::pair;

//PROTOTYPE -- NEEDS TO BE WRITTEN
pair<int, int> UI::getShot() {
    return pair<int,int>(0, 0);
}

//PROTOTYPE -- Will test to see if works.
void UI::shotInvalid(pair<int, int>) {
    std::cout << "This shot is invalid, please try again" << std::endl;
}

//UNFINISHED -- NEEDS inputBoardVect translation, unknown if correct
void UI::printBoard(int boardDim, std::vector<int> inputBoardVect) {

    std::vector<char> boardVect(inputBoardVect.size());
    for(int i = 0; i < inputBoardVect.size(); i++)
    {
        switch(inputBoardVect[i])
        {
            case 0:
                boardVect[i] = '~';
                break;
            case 2:
                boardVect[i] = 'X';
                break;
            case 3:
                boardVect[i] = '@';
                break;
            case 5:
                boardVect[i] = '#';
                break;
            default:
                /*
                 *
                 * THIS SHOULDN'T PRINT AN ERROR TO USER. THEY CAN'T FIX. THROW AN ERROR FOR GAME TO HANDLE --ZACH
                 *
                 */
                std::cout << "UI.cpp failure (printBoard)" << std::endl;
                break;
        }
    }

    //------------------------PRINTING BORDER------------------------------
    std::cout << " -"; //starts top border
    for(int topborder = 0+(65); topborder < boardDim+(65); topborder++) //prints top border with ASCII Letters
        std::cout << (char)topborder;

    std::cout << "-" << std::endl; //finishes top border

    for(int x = 0; x < boardDim; x++) //Loops over horizontal axis, including left and right boarders
    {
        if (x+1 < 10)
            std::cout << " ";
        std::cout << x+1; //left border
        for(int y = 0; y < boardDim; y++)
        {
            std::cout << boardVect[x,y]; //prints the vector of the board
        }
        std::cout << "|" << std::endl; //right border and end-line
    }
    std::cout << " ";
    for(int botborder = 0; botborder < boardDim+2; botborder++) //prints bottom border
        std::cout << "-";
    std::cout << std::endl; //finishes top border
}

bool UI::Start() {
    while(true)
    {
        int choice;
        std::cout << "1. Start" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1:
                return true;
                break;
            case 2:
                return false;
                break;
            default:
                std::cout << "Invalid Choice" << std::endl;
                break;
        }
    }
}

void UI::targetSunk() {
    std::cout << "You have sunk a ship!" << std::endl;
}

void UI::targetHit() {
    std::cout << "You have hit a ship!" << std::endl;
}

void UI::targetMiss() {
    std::cout << "You have miss a ship!" << std::endl;
}

void UI::Win() {
    std::cout << "You have won the game!" << std::endl;
}

void UI::Loss() {
    std::cout << "You have lost the game!" << std:: endl;
}

int UI::placeBattleships(int _TEMP_VALUE_LENGTH_SHIP) {
    char charx; int x; //Allows user to input A as the X Axies
    int y;
    char direction;
    std::cout << "You are currently placing your " << _TEMP_VALUE_LENGTH_SHIP << " long ship." << std::endl;
    std::cout << "Which Letter will you be placing this at? (Capitals Only)" << std::endl;
    std::cin >> charx;
    x = charx-64;
    std::cout << "Which Number will you be placing this at?" << std::endl;
    std::cin >> y;
    std::cout << "Which Direction will you be placing towards?" << std::endl;
    std::cout << "Use L for Left, R for Right, U for Up, D for Down" << std::endl;
    std::cin >> direction;
    switch(direction)
    {
        case 'L':
            return x, y, x-_TEMP_VALUE_LENGTH_SHIP, y;
        case 'R':
            return x, y, x+_TEMP_VALUE_LENGTH_SHIP, y;
        case 'U':
            return x, y, x, y-_TEMP_VALUE_LENGTH_SHIP;
        case 'D':
            return x, y, x, y+_TEMP_VALUE_LENGTH_SHIP;
        default:
            std::string e = "INVALID VARIABLE INPUTTED TO UI.CPP";
            throw std::invalid_argument(e);
    }
}
