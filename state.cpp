#include "state.h"

state::state()
{
    for (int i = 0; i < board_size; i++)
        for (int j = 0; j < board_size; j++)
            this->borad[i][j] = Chess::EMPTY;
}

state::~state()
{

}

std::vector<Action> state::getAvailableActions(Player player)
{
    std::vector<Action> actions;
    for (int i = 0; i < board_size; i++)
        for (int j = 0; j < board_size; j++) {
            if (this->borad[i][j] == Chess::EMPTY) {
                actions.push_back(Action(Point(i, j), player));
            }
        }
    return actions;
}

void state::applyAction(Action & action)
{
    Point & point = action.getPoint();
    Chess chess = Chess::WHITE;
    if (action.getPlayer() == Player::PERSON) {
        chess = Chess::BLACK;
    }
    if (this->get(point) != Chess::EMPTY)
        return;
    this->set(point, chess);
}

Result state::getResult()
{
    return Result::WIN;
}

double state::evaluate(Player player)
{
    return 0.0;
}

void state::set(Point point, Chess chess)
{

}
