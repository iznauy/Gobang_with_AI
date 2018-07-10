#ifndef STATE_H
#define STATE_H

#include "constant.h"
#include "common.h"



class state
{
public:
    state();
    Chess get(int row, int col);
    bool put(int row, int col, Chess chess);
    Result getResult();
    double evaluate(Player player);
private:
    Chess borad[board_size][board_size];
};

#endif // STATE_H
