//
// Created by Zachary Mason on 2/9/20.
//

#ifndef BATTLESHIP372_BOARD_H
#define BATTLESHIP372_BOARD_H

#include <vector>
#include <stdexcept>
#include <string>
class Board {
private:
    //Dimension of each side of the board
    const int _BOARD_DIM = 10;

    //Represents an empty space on _board
    const int _EMPTY = 0;

    //Represents a ship space on _board
    const int _SHIP = 1;

    //Represents an missed shot on _board
    const int _MISS = 2;

    //Represents an hit shot on _board
    const int _HIT = 3;

    //Returned from addShot() to represent that it was a hit and sunk the ship
    const int _SUNK = 5;

    //added to the value of _board when a shot is fired (_EMPTY -> _MISS, _SHIP -> _HIT)
    const int _SHOT = 2;

    //The board containing spaces that are _EMPTY, _SHIP, _HIT, _MISS
    std::vector<int> _board;

    //A duplicate of the size of the board, but with _EMPTY, or a _shipID or a negative _shipID for each space
    std::vector<int> _ships;

    //ID of the current ship to be placed. Has to be global member because addShip is recursive
    int _shipID;

public:

    //default constructor
    Board();

    //Constructor with board size
    Board(int BoardDim);

    //Returns _board[x,y]
    int at(int x, int y);

    //Returns _Board[i] where i is the literal index in _board, rather than coordinates
    int at(int i);

    //Sets _board[x,y] to a specific value (_HIT, _MISS, etc)
    int set(int x, int y, int val);

    //Same as other set, but with literal index in _board instead of coordinates
    int set(int i, int val);

    //Return the literal index in _board for a set of coordinates
    //throws std::out_of_range()
    int index(int x, int y);

    //Adds a ship based on a starting and ending x and y coordinates
    //Ships added recursively
    //throws std::runtime_error()
    bool addShip(int startX, int endX, int startY, int endY);

    //Adds a shot at the specified coordinates
    //throws std::invalid_argument()
    int addShot(int x, int y);

    //Confirms that making a shot is legal at location x,y
    bool checkShot(int x, int y);

    //Checks if ship with ID "ship" has been sunk
    bool isSunk(int ship);
};


#endif //BATTLESHIP372_BOARD_H
