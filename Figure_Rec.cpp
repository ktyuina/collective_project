#include "Figure_Rec.h"

Figure::Figure(Point_R O, int R, COLORREF c1, COLORREF c2) : colorP(c1), colorB(c2) {
	hwnd = GetConsoleWindow();				// получаем идентификатор окна
	hdc = GetDC(hwnd);						// получаем контекст отображения					
	GetClientRect(hwnd, &rt);				// получаем прямоугольник окна
}

void Figure::draw() {
	HPEN pen = CreatePen(PS_SOLID, 2, colorP);
	HBRUSH brush = CreateSolidBrush(colorB);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	POINT points[4]{};
	for (int i = 0; i < 4; ++i) {
		points[i].x = top[i].x;
		points[i].y = top[i].y;
	}
	Polygon(hdc, points, 4);
	DeleteObject(pen);
	DeleteObject(brush);
}

Figure::~Figure() { ReleaseDC(hwnd, hdc); }

Figure::ConsoleBorderException::ConsoleBorderException(string error) : er(error) {}
string Figure::ConsoleBorderException::ConsoleBorderException::getError() const {
	return er;
}

Figure::NegativeValueException::NegativeValueException(string error) : er(error) {}
string Figure::NegativeValueException::NegativeValueException::getError() const {
	return er;
}
