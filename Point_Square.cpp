#include"Point_Square.h"
#include <iostream>
using namespace std;

Point_Square::Point_Square() = default;

Point_Square::Point_Square(int _x, int _y, int _a, COLORREF _p, COLORREF _b) : x(_x), y(_y), a(_a), Pen(_p), Brush(_b) {
    hwnd = GetConsoleWindow();
    hdc = GetDC(hwnd);
    GetClientRect(hwnd, &rt);
}

void Point_Square::Draw() {
    try {
        for (int i = 0; i < 4; i++) {
            if (points[i].x < rt.left || points[i].y < rt.top || points[i].x > rt.right || points[i].y > rt.bottom) {
                throw "Out of the screen border";
            }
        }
        HDC hdc = GetDC(GetConsoleWindow());
        HPEN pen = CreatePen(PS_SOLID, 3, Pen);
        HBRUSH brush = CreateSolidBrush(Brush);

        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        Polygon(hdc, points, 4);

        DeleteObject(pen);
        DeleteObject(brush);
    }
    catch (const std::runtime_error& e) {
        std::cout << std::endl << e.what() << std::endl;
    }
}

Point_Square::~Point_Square() {
    ReleaseDC(hwnd, hdc);
}
