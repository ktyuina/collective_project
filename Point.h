#pragma once
#include "Figure_C.h"
#include <windows.h>
#include <windowsx.h>
using namespace std;

struct Point_s {
	int x, y;
};

class Point : public Figure_C {
protected:
	Point_s vertex[4]{};
	HWND hwnd;
	HDC hdc;
	RECT rt;
	COLORREF color;
	int diag;
	double radius = (diag * 2 / sqrt(2)) / 2;
public:
	Point(Point_s _p1, int a, COLORREF c);
	void print() override;
	~Point();
	class OutOfBorder {};
	class NegativeCoord {};
}; 
