//
// Created by Zachary Mason on 2/9/20.
//

#include "Game.h"

Board::Board() : _b(_BOARD_DIM*_BOARD_DIM){

}

int Board::getLoc(int x, int y) {
    return _b.at( ((--y)*_BOARD_DIM) + (--x));
}