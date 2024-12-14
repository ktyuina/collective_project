#pragma once
#include "Point_Square.h"

class Square : public Point_Square
{
public:
    Square(int x, int y, int a, COLORREF p, COLORREF b);
    void Draw();
};

