#include "Circle.h"

using namespace std;

Circle::Circle(float r) { radius = r; }

void Circle::InputCircle() { 
	cout << "������� ������ ������: ";
	cin >> radius;
}

void Circle::PrintCircle() { cout << "������ �����: " << radius << endl; }


float Circle::GetCircle() const { return radius; }


void Circle::SetCircle(float r) { radius = r; }
