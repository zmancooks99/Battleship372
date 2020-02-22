#include <iostream>
#include <vector>

#include "catch.hpp"
#include "View/UI.h"

int main() {
    UI test;
    int _boardLength = 10;
    std::vector<int> _boardArray(100);
    _boardArray.assign(100, 0);
    test.printBoard(_boardLength, _boardArray);
    return 0;
}
