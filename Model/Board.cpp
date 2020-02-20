//
// Created by Zachary Mason on 2/9/20.
//

#include "Board.h"

using std::vector;

Board::Board() : Board(10) { }
Board::Board(int BoardDim) : _BOARD_DIM(BoardDim), _board(_BOARD_DIM * _BOARD_DIM), _ships(_BOARD_DIM * _BOARD_DIM, _EMPTY), _shipID(1){ }

int Board::index(int x, int y) {
    if(x > _BOARD_DIM || y > _BOARD_DIM || x < 0 || y < 0)
        throw std::out_of_range("COORDINATES ARE OUT OF RANGE");
    return ((--y)*_BOARD_DIM) + (--x);
}

int Board::at(int x, int y) {
    return _board.at(index(x, y));
}

int Board::at(int i) {
    return _board.at(i);
}

int Board::set(int x, int y, int val) {
    set(index(x,y), val);
    return val;
}

int Board::set(int i, int val) {
    if (val != _HIT && val != _EMPTY && val != _SHIP && val != _MISS) {
        std::string e = "PARAM IS NOT A VALID STATE FOR POSITION";
        throw std::invalid_argument(e);
    }
    _board[i] = val;
    return val;
}
bool Board::addShip(int startX, int endX, int startY, int endY) {

    if(startX < endX) {
        if(at(startX, startY) == _EMPTY) {
            set(startX, startY, _SHIP);
            _ships[index(startX, startY)] = _shipID;
            bool validX = addShip(startX + 1, endX, startY, endY);
            if (!validX) {
                set(startX, startY, _EMPTY);
                _ships[index(startX, startY)] = _EMPTY;
                return false;
            }
        } else return false;
        return true;
    }
    if(startY < endY) {
        if(at(startX, startY) == _EMPTY) {
            set(startX, startY, _SHIP);
            _ships[index(startX, startY)] = _shipID;
            bool validY = addShip(startX, endX, startY+1, endY);
            if (!validY) {
                set(startX, startY, _EMPTY);
                _ships[index(startX, startY)] = _EMPTY;
                return false;
            }
        } else return false;
        return true;
    }
    if(startX == endX && startY == endY) {
        ++_shipID;
        return true;
    } else throw std::runtime_error("ERROR IN ADDING SHIP");
}

int Board::addShot(int x, int y) {
    int i = index(x, y);
    if(checkShot(x,y)) {
        int result = set(i, _board.at(i) + _SHOT);
        if(result = _HIT) {
            int id = _ships[i];
            _ships[i] *= -1;
            if(isSunk(id))
                result = _SUNK;
        }
        return result;
    }

    throw std::invalid_argument("INVALID SHOT FIRED -- NOT AN EMPTY SPACE");
}

bool Board::checkShot(int x, int y) {
    int i;
    try {
        i = index(x, y);
    } catch(std::out_of_range e) {return false;}

    return (_board.at(i) == _EMPTY || _board.at(i) == _SHIP) ? true : false;
}

bool Board::isSunk(int ship) {
    return std::find(_ships.begin(), _ships.end(), ship) == _ships.end();
}