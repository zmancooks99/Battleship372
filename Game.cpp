//
// Created by Zachary Mason on 2/9/20.
//

#include "Game.h"

using std::vector;
using std::pair;

Game::Game() : _gameOver(false){
    if(!_COMPUTER) {
        for (int i = 0; i < _NUM_PLAYERS; i++) {
            _boards.push_back(Board());
            _uis.push_back(UI());
        }
    }

}

void Game::doTurn() {
    while(!_gameOver) {
        for (int i = 0; i < _NUM_PLAYERS; i++) {
            Board b = _boards.at(i);
            UI u = _uis.at(i);
            pair<int, int> shot = u.getShot();
            while (!b.checkShot(shot.first, shot.second)) {
                u.shotInvalid(shot);
                shot = u.getShot();
            }
            int r = b.addShot(shot.first, shot.second);
            if (r == _HIT)
                u.targetHit();
            if (r == _MISS)
                u.targetMiss();
            if (r == _SUNK)
                u.targetSunk();
            u.printBoard(b.getBoardDim(), b.getBoard());
            if (b.allSunk()) {
                u.win();
                for(UI u1 : _uis) {
                    if(&u != &u1)
                        u1.loss();
                }
                _gameOver = true;
                break;
            }
        }
    }
}