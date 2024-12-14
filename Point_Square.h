#pragma once
#include <windows.h>
#include <windowsx.h>

class Point_Square {

public:
	Point_Square();
	Point_Square(int _x, int _y, int _a, COLORREF _p, COLORREF _b);
	void Draw();
	~Point_Square();
protected:
	int x, y, a;
	HWND hwnd;
	HDC hdc;
	RECT rt;
	COLORREF Pen;
	COLORREF Brush;
	POINT points[4];
};

