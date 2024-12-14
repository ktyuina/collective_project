#pragma once
#include <iostream>
#include "Figure_Rec.h"
using namespace std;

class Rectangl1 : public Figure {
public:
	Rectangl1(Point_R O, int R, COLORREF pen, COLORREF brush);
	void draw() override;
}; 
