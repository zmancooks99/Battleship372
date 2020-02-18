//
// Created by Zachary Mason on 2/9/20.
//

#include "Game.h"

using std::vector;
using std::pair;

Game::Game() {
    if(!_COMPUTER) {
        for (int i = 0; i < _NUM_PLAYERS; i++) {
            _boards.push_back(Board());
            _uis.push_back(UI());
        }
    }

}

void Game::doTurn() {
    for (int i = 0; i < _NUM_PLAYERS; i++) {
        Board b = _boards.at(i);
        UI u = _uis.at(i);
        pair<int, int> shot = u.getShot();
        while(!b.checkShot(shot.first, shot.second)) {
            u.shotInvalid(shot);
            shot = u.getShot();
        }
        b.addShot(shot.first, shot.second);
    }
}