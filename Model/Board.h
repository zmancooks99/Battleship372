//
// Created by Zachary Mason on 2/9/20.
//

#ifndef BATTLESHIP372_BOARD_H
#define BATTLESHIP372_BOARD_H

#include <vector>

class Board {
private:
    const int _BOARD_DIM = 10;
    const int _EMPTY = 0;
    const int _SHIP = 1;
    const int _MISS = 2;
    const int _HIT = 3;

    std::vector<int> _b;

    int getLoc(int x, int y);
public:
    Board();

    int at(int x, int y);
    int set(int x, int y);
};


#endif //BATTLESHIP372_BOARD_H
