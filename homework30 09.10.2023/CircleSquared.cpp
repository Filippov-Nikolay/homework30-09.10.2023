#include "CircleSquared.h"

CircleSquared::CircleSquared(float r, float a):
	Circle(r), Square(a) { }

bool CircleSquared::Rez() {
	return Circle::GetCircle() <= Square::GetSquare();
}
