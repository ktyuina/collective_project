#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

Circle::Circle(Point_s p1, int a, COLORREF brush) : Point(p1, a, brush) {
    vertex[0] = { p1.x - static_cast<int>(radius), 0 };
    vertex[1] = { p1.y - static_cast<int>(radius), 0 };
    vertex[2] = { p1.x + static_cast<int>(radius), 0 };
    vertex[3] = { p1.y + static_cast<int>(radius), 0 };
    if (p1.x < 0 || p1.y < 0) {
        throw NegativeCoord();
    }
    if (p1.x - static_cast<int>(radius) < 0 || p1.y - static_cast<int>(radius) < 0) {
        throw OutOfBorder();
    }
}

void Circle::print() {
    HPEN pen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
    HBRUSH brush = CreateSolidBrush(color);
    SelectObject(hdc, pen);
    SelectObject(hdc, brush);
    POINT points[4]{};
    Ellipse(hdc, vertex[0].x, vertex[1].x, vertex[2].x, vertex[3].x);
    DeleteObject(pen);
    DeleteObject(brush);
}