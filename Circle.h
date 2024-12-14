#pragma once
#include "Point.h"

class Circle : public Point {
public:
    Circle(Point_s p1, int a, COLORREF brush);
    void print();
};
