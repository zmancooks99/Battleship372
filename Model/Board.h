//
// Created by Zachary Mason on 2/9/20.
//

#ifndef BATTLESHIP372_BOARD_H
#define BATTLESHIP372_BOARD_H

#include <vector>
#include <exception>
#include <string>
class Board {
private:
    const int _BOARD_DIM = 10;
    const int _EMPTY = 0;
    const int _SHIP = 1;
    const int _MISS = 2;
    const int _HIT = 3;

    std::vector<int> _b;

    int getCoord(int i);
public:
    Board();

    int at(int x, int y);
    int at(int i);
    int set(int x, int y, int val);
    int set(int i, int val);
    int index(int x, int y);
    bool addShip(int startX, int endX, int startY, int endY);
    int addShot(int x, int y);
};


#endif //BATTLESHIP372_BOARD_H
