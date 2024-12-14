#pragma once
#include <windows.h>
#include <windowsx.h>
#include <iostream>

using namespace std;

struct Point_R {
	int x, y;
};

class Figure {
protected:
	Point_R top[4]{};
	HWND hwnd;
	HDC hdc;
	RECT rt;
	COLORREF colorP;
	COLORREF colorB;
public:
	Figure(Point_R O, int R, COLORREF c1, COLORREF c2);
	virtual void draw();
	~Figure();
	class ConsoleBorderException {
	public:
		ConsoleBorderException(string error);
		string getError() const;
	private:
		string er;
	};

	class NegativeValueException {
	public:
		NegativeValueException(string error);
		string getError() const;
	private:
		string er;
	};
}; 
