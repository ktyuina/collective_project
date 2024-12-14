#include<iostream>
#include "Square.h"
using namespace std;

Square::Square(int x, int y, int a, COLORREF p, COLORREF b) : Point_Square(x, y, a, p, b) {
    points[0] = { x, y };
    points[1] = { x + a, y };
    points[2] = { x + a, y + a };
    points[3] = { x, y + a };
}

void Square::Draw() {
    Point_Square::Draw();
}