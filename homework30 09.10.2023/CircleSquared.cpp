#include "CircleSquared.h"

CircleSquared::CircleSquared(float r, float a):
	Circle(r), Square(a) { }

void CircleSquared::Input() {
	Circle::InputCircle();
	Square::InputSquare();
}

bool CircleSquared::Rez() {
	return Circle::GetCircle() <= Square::GetSquare();
}
