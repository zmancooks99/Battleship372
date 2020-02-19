//
// Created by Zachary Mason on 2/10/20.
//

#ifndef BATTLESHIP372_UI_H
#define BATTLESHIP372_UI_H

#include <utility>
    //std::pair

class UI {
private:

public:
    std::pair<int, int> getShot();
    void shotInvalid(std::pair<int, int>);
};


#endif //BATTLESHIP372_UI_H
