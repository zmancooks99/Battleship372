#include <iostream>
#include <vector>

#include "Model/Board.h"
#include "Model/AI.h"
#include "View/UI.h"

int main() {

    //------------PRINT BOARD-------------------
    UI test;
    Board testBoard;
    test.printBoard(testBoard.getBoardDim(), testBoard.getBoard());
    //-----------PRINT BOARD--------------------
    //-------------Place Battleship------------
    int startX = test.placeBeginX(1);
    int startY = test.placeBeginY();
    int endX = test.placeEndX(1);
    int endY = test.placeEndY(1);

    testBoard.addShip(startX,startY,endX,endY);
    test.printBoard(testBoard.getBoardDim(), testBoard.getBoard());
    //-------------All the UI Outputs-----------
    test.win();
    test.loss();
    test.targetHit();
    test.targetMiss();
    test.targetSunk();
    //-------------All the UI Outputs----------
    return 0;
}
