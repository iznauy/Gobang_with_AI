#ifndef STATE_H
#define STATE_H

#include "constant.h"
#include "common.h"
#include "action.h"
#include <vector>

class state
{
public:
    state();
    Chess get(Point point);
    // 获取当前用户可以进行的所有行动
    std::vector<Action> getAvailableActions(Player player);
    // 做出行动
    void applyAction(Action & action);
    // 获取比赛结果
    Result getResult();
    // 评价当前局势好坏，用于AI搜索算法的启发式函数
    double evaluate(Player player);
    ~state();
private:
    Chess borad[board_size][board_size];
    void set(Point point, Chess chess);
};

#endif // STATE_H
