//
// Created by Zachary Mason on 2/10/20.
//

#include "UI.h"
#include <iostream>

using std::pair;

//PROTOTYPE -- NEEDS TO BE WRITTEN
pair<int, int> UI::getShot() {
    return pair<int,int>(0, 0);
}

//PROTOTYPE -- Will test to see if works.
void UI::shotInvalid(pair<int, int>) {
    std::cout << "This shot is invalid, please try again" << std::endl;
}