#ifndef ACTION_H
#define ACTION_H

#include "action.h"
#include "common.h"

class Action
{
private:
    Point point;
    Player player;
public:
    Action(Point point, Player player)
        : point(point), player(player) {}
    Point getPoint() {
        return this->point;
    }
    Player getPlayer() {
        return this->player;
    }
    ~Action() {}
};

#endif // ACTION_H
