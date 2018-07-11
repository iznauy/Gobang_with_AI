#ifndef COMMON_H
#define COMMON_H

enum Player
{
    PERSON,
    AI
};

enum Chess
{
    BLACK,
    WHITE,
    EMPTY
};

enum Result
{
    WIN,
    LOSS,
    TIE,
    UNFINISHED
};

class Point
{
public:
    int row;
    int col;
    Point(int row, int col)
        : row(row), col(col) {}
};

#endif // COMMON_H
