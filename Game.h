//
// Created by Zachary Mason on 2/9/20.
//

#ifndef BATTLESHIP372_GAME_H
#define BATTLESHIP372_GAME_H

#include <vector>
    //std::vector

#include <utility>
    //std::pair

#include "Model/Board.h"
#include "Model/AI.h"
#include "View/UI.h"

class Game {

private:
    const int _NUM_PLAYERS = 2;
    const bool _COMPUTER = false;
    const int _CARRIER = 5;
    const int _BATTLESHIP = 4;
    const int _DESTROYER = 3;
    const int _SUBMARINE = 3;
    const int _PATROLBOAT = 2;
    std::vector<Board> _boards;
    AI _ai;
    std::vector<UI> _uis;
public:
    Game();

    void doTurn();
};


#endif //BATTLESHIP372_GAME_H
