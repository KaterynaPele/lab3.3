// Lab_03_3.cpp
// <Пелещишин Катерина>
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 19

#include <iostream>
#include <cmath>


using namespace std;

int getCase(double x, double R) {
    if (x <= -1)
        return 1;
    if (-1 < x && x <= 0)
        return 2;
    if (0 < x && x < 1)
        return 3;
    if (1 <= x && x <= 1 + 2 * R)
        return 4;
    if (1 + 2 * R < x && x <= 7)
        return 5;
    return -1; // поза графіком
}

int main_v1()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y = 0; // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    int caseNum = getCase(x, R);

    switch (caseNum) {
    case 1: // ліва частина (y=0)
        y = 0;
        break;

    case 2: // ліва похила пряма
        y = -(x + 1);
        break;

    case 3: // проміжок 0<x<1 (y=0)
        y = 0;
        break;

    case 4: // півколо
    {
        double t = R * R - (x - (1 + R)) * (x - (1 + R));
        if (t < 0) {
            cout << "Пiдкореневий вираз < 0. Значення не iснує." << endl;
            return 0;
        }
        y = sqrt(t);
        break;
    }

    case 5: // права похила пряма
        y = -1.0 / (6 - 2 * R) * (x - (1 + 2 * R));
        break;

    default:
        cout << "Для даного x значення функцiї не визначене." << endl;
        return 0;
    }

    cout << endl << "y = " << y << endl;

    return 0;
}