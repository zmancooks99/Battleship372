//
// Created by Zachary Mason on 2/9/20.
//

#include <algorithm>
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

int Board::set(int i, int val) {
    if (val != _HIT && val != _EMPTY && val != _SHIP && val != _MISS) {
        std::string e = "PARAM IS NOT A VALID STATE FOR POSITION";
        throw std::invalid_argument(e);
    }
    _board[i] = val;
    return val;
}

int Board::set(int x, int y, int val) {
    set(index(x,y), val);
    return val;
}

bool Board::addShip(int startX, int startY, int endX, int endY) {

    //LOGIC FOR PLACING SHIP HORIZONTALLY
    if(startX < endX) {
        //CHECKS IF THE CURRENT SPACE (startX, startY) IS EMPTY AND IF SO ADDS A SHIP IN _board AND ADDS THE SHIP ID IN _ships
        if(at(startX, startY) == _EMPTY) {
            set(startX, startY, _SHIP);
            _ships[index(startX, startY)] = _shipID;

            //CHECKS THE NEXT SPACE RECURSIVELY AND STORES WHETHER OR NOT IT WAS LEGAL
            bool validX = addShip(startX + 1, endX, startY, endY);

            //IF THE NEXT SPACE RETURNS FALSE, RESET THE _board AND _ships VALUES AND THEN RETURN FALSE UP THE CHAIN
            if (!validX) {
                set(startX, startY, _EMPTY);
                _ships[index(startX, startY)] = _EMPTY;
                return false;
            }
        } else return false; //IF THE SPACE BEING CHECKED IS ILLEGAL RETURN FALSE
        return true; //IF NONE HAVE RETURNED FALSE BY THIS POINT, RETURN TRUE
    }
    //LOGIC FOR PLACING SHIP VERTICALLY
    if(startY < endY) {
        //CHECKS IF THE CURRENT SPACE (startX, startY) IS EMPTY AND IF SO ADDS A SHIP IN _board AND ADDS THE SHIP ID IN _ships
        if(at(startX, startY) == _EMPTY) {
            set(startX, startY, _SHIP);
            _ships[index(startX, startY)] = _shipID;

            //CHECKS THE NEXT SPACE RECURSIVELY AND STORES WHETHER OR NOT IT WAS LEGAL
            bool validY = addShip(startX, endX, startY+1, endY);

            //IF THE NEXT SPACE RETURNS FALSE, RESET THE _board AND _ships VALUES AND THEN RETURN FALSE UP THE CHAIN
            if (!validY) {
                set(startX, startY, _EMPTY);
                _ships[index(startX, startY)] = _EMPTY;
                return false;
            }
        } else return false; //IF THE SPACE BEING CHECKED IS ILLEGAL RETURN FALSE
        return true; //IF NONE HAVE RETURNED FALSE BY THIS POINT, RETURN TRUE
    }

    //IF THE RECURSION REACHES THE END, INCREMENT _shipID FOR NEXT TIME AND RETURN TRUE UP THE CHAIN
    if(startX == endX && startY == endY) {
        ++_shipID;
        return true;
    } else throw std::runtime_error("ERROR IN ADDING SHIP"); //IF START COORDINATES ARE NEITHER LESS THAN OR EQUAL TO END COORDINATES, THROW ERROR
}

int Board::addShot(int x, int y) {
    int i = index(x, y);
    if(checkShot(x,y)) {
        int result = set(i, at(i) + _SHOT); //SET RETURNS THE VALUE, WHICH IS THE CURRENT VALUE + _SHOT
        if(result = _HIT) {
            int id = _ships[i]; //GET THE ID OF THE SHIP AT THE LOCATION x,y
            _ships[i] *= -1; //SET THAT PARTICULAR LOCATION THAT WAS SHOT TO THE SHIP ID * -1
            if(isSunk(id))  //IF THE SHIP ID (AS A POSITIVE VALUE) NO LONGER EXISTS IN _ships WE RETURN _SUNK INSTEAD OF _HIT
                result = _SUNK;
        }
        return result;
    }

    throw std::invalid_argument("INVALID SHOT FIRED -- NOT AN EMPTY SPACE");
}

bool Board::checkShot(int x, int y) {
    int i;
    try {
        i = index(x, y);    //MAKE SURE THE ATTEMPTED SHOT IS TO A LEGAL INDEX
    } catch(std::out_of_range e) {return false;}

    //IF IT IS A SHIP OR EMPTY, RETURN TRUE. IF IT HAS A PREEXISTING SHOT, RETURN FALSE
    return (_board.at(i) == _EMPTY || _board.at(i) == _SHIP) ? true : false;
}

bool Board::isSunk(int ship) {
    return std::find(_ships.begin(), _ships.end(), ship) == _ships.end();
}

bool Board::allSunk() {
    //If any locations in _ships are > 0 then ships are left alive.
    for(int s : _ships) {
        if (s > 0) return false;
    }
    return true;
}

int Board::getBoardDim() { return _BOARD_DIM; }

const vector<int>& Board::getBoard() { return _board; }

const vector<int>& Board::getShips() { return _ships; }