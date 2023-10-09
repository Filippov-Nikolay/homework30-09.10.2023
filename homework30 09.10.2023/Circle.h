#pragma once
#include <iostream>

class Circle {
	float radius;
public:
	Circle(float r);
	void InputCircle();
	void PrintCircle();


	float GetCircle() const;
	void SetCircle(float r);
};