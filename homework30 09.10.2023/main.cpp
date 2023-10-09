#include <iostream>
#include "CircleSquared.h"

using namespace std;

int main() {
    setlocale(0, "");

    CircleSquared obj(5, 10);

    if (obj.Rez())
        cout << "Круг вписан в квадрат" << endl;
    else
        cout << "Круг не вписан в квадрат" << endl;

    return 0;
}

