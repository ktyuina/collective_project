#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

Point::Point(Point_s _p1, int a, COLORREF c) : diag(a), color(c) {
    hwnd = GetConsoleWindow();
    hdc = GetDC(hwnd);
    GetClientRect(hwnd, &rt);
}

void Point::print() {
}

Point::~Point() {
    ReleaseDC(hwnd, hdc);
}