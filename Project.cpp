#include "Rectangle1.h"
#include "Circle.h"
#include "Point.h"
#include "Figure_C.h"
#include <iostream>
using namespace std;

int main() {
	const int NotUsed = system("color F0");
	SetConsoleTitle((LPCWSTR)L"23VP1");
	COORD p = { 0, 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

	const double PI = 3.14159265358979323846;


	Rectangl1* b4 = new Rectangl1({ 360, 360 }, 260, RGB(0, 0, 0), RGB(127, 118, 121));
	b4->draw();


	for (int i = 0; i < 5; ++i) {
		double angle = i * (2 * 3.14159265358979323846 / 5);
		int x = 400 + 50 * cos(angle);
		int y = 110 + 50 * sin(angle);
		Circle petal{ {x, y}, 50, RGB(255, 153, 189) };
		petal.print();
	}
	for (int i = 0; i < 5; ++i) {
		double angle = i * (2 * 3.14159265358979323846 / 5);
		int x = 600 + 50 * cos(angle);
		int y = 110 + 50 * sin(angle);
		Circle petal{ {x, y}, 50, RGB(255, 215, 0) };
		petal.print();
	}
	for (int i = 0; i < 5; ++i) {
		double angle = i * (2 * 3.14159265358979323846 / 5);
		int x = 500 + 50 * cos(angle);
		int y = 210 + 50 * sin(angle);
		Circle petal{ {x, y}, 50, RGB(206, 063, 217) };
		petal.print();
	}

	Circle circle2{ {640, 60}, 23, RGB(255, 0, 51) };
	circle2.print();


	Sleep(12000);
}