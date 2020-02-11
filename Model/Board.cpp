//
// Created by Zachary Mason on 2/9/20.
//

#include "Board.h"

Board::Board() : _b(_BOARD_DIM*_BOARD_DIM){

}

int Board::index(int x, int y) {
    if(x > _BOARD_DIM || y > _BOARD_DIM)
        throw std::out_of_range("COORDINATES ARE OUT OF RANGE");
    return ((--y)*_BOARD_DIM) + (--x);
}


int Board::at(int x, int y) {
    return _b.at(index(x,y));
}

int Board::at(int i) {
    return _b.at(i);
}

int Board::set(int x, int y, int val) {
    set(index(x,y), val);
    return val;
}

int Board::set(int i, int val) {
    if (val != _HIT && val != _EMPTY && val != _SHIP && val != _MISS) {
        std::string e = "PARAM IS NOT A VALID STATE FOR POSITION " + std::to_string(x) + "," + std::to_string(y);
        throw std::invalid_argument(e);
    }
    _b[i] = val;
    return val;
}
bool Board::addShip(int startX, int endX, int startY, int endY) {
    if(startX < endX) {
        if(at(startX, startY) == _EMPTY) {
            set(startX, startY, _SHIP);
            bool validX = addShip(startX + 1, endX, startY, endY);
            if (!validX) {
                set(startX, startY, _EMPTY);
                return false;
            }
        } else return false;
        return true;
    }
    if(startY < endY) {
        if(at(startX, startY) == _EMPTY) {
            set(startX, startY, _SHIP);
            bool validY = addShip(startX, endX, startY+1, endY);
            if (!validY) {
                set(startX, startY, _EMPTY);
                return false;
            }
        } else return false;
        return true;
    }
    if(startX == endX && startY == endY) {
        return true;
    } else throw std::runtime_error("ERROR IN ADDING SHIP");
}

int Board::addShot(int x, int y) {
    int i = index(x, y);
    if(_b.at(i) == _SHIP) {
        set(i, _HIT);
        return _HIT;
    }
    if(_b.at(i) == _EMPTY) {
        set(i, _MISS);
        return _MISS;
    }
    throw std::invalid_argument("INVALID SHOT FIRED -- NOT AN EMPTY SPACE");
}