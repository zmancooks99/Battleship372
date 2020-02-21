//
// Created by Zachary Mason on 2/10/20.
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
int UI::printBoard(int boardDim, std::vector<int> inputBoardVect) {

    char boardVect[inputBoardVect.size()];
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
                std::cout << "UI.cpp failure (printBoard)" << std::endl;
                break;
        }
    }

    //------------------------PRINTING BORDER------------------------------

    for(int topborder = 0; topborder < boardDim+2; topborder++) //prints top border
        std::cout << "-";

    std::cout << std::endl; //finishes top border
    for(int x = 0; x < boardDim; x++) //Loops over horizontal axis, including left and right boarders
    {
        std::cout << "|"; //left border
        for(int y = 0; y < boardDim; x++)
        {
            std::cout << boardVect[x,y]; //prints the vector of the board
        }
        std::cout << "|" << std::endl; //right border and end-line
    }

    for(int botborder = 0; botborder < boardDim+2; botborder++) //prints bottom border
        std::cout << "--";
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
