#pragma once
#include <iostream>

class Square {
	float area;
public:
	Square(float a);
	void InputSquare();
	void PrintSquare();


	float GetSquare() const;
	void SetSquare(float a);
};

