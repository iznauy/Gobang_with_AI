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
    WHITE
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
    int x;
    int y;
};

#endif // COMMON_H
