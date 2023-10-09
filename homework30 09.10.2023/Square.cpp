#include "Square.h"

using namespace std;

Square::Square(float a) { area = a; }

void Square::InputSquare() { 
	cout << "Введите площадь квадрата: ";
	cin >> area;
}

void Square::PrintSquare() { cout << "Площадь квадрата: " << area << endl; }


float Square::GetSquare() const { return area; }


void Square::SetSquare(float a) { area = a; }
