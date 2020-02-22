#include <iostream>
#include <vector>

#include "catch.hpp"
#include "View/UI.h"

int main() {
    //------------PRINT BOARD-------------------
    UI test;
    int _boardLength = 10;
    std::vector<int> _boardArray(100);
    _boardArray.assign(100, 0);
    test.printBoard(_boardLength, _boardArray);
    //-----------PRINT BOARD--------------------
    //-------------All the UI Outputs-----------
    test.Win();
    test.Loss();
    test.targetHit();
    test.targetMiss();
    test.targetSunk();
    //-------------All the UI Outputs----------
    return 0;
}
