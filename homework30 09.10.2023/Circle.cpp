#include "Circle.h"

using namespace std;

Circle::Circle(float r) { radius = r; }

void Circle::InputCircle() { 
	cout << "Введите радиус кругка: ";
	cin >> radius;
}

void Circle::PrintCircle() { cout << "Радиус круга: " << radius << endl; }


float Circle::GetCircle() const { return radius; }


void Circle::SetCircle(float r) { radius = r; }
