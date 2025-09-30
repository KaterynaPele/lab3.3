// Lab_03_3.cpp
// <Пелещишин Катерина>
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -1)
        y = 0;// 1 ділянка
    else
        if (-1 < x && x <= 0)
            y = -(x + 1);// 2 ділянка
        else
            if (0 < x && x < 1)
                y = 0;// 3 ділянка
            else
                if (1 <= x && x <= 1 + 2 * R)
                    y = sqrt(R * R - (x - (1 + R)) * (x - (1 + R)));// 4 ділянка (півколо)
                else
                    if (1 + 2 * R < x && x <= 7)
                        y = -1.0 / (6 - 2 * R) * (x - (1 + 2 * R));// 5 ділянка (права пряма)
                    else {
                        cout << "Для даного x значення функцiї не визначене." << endl;
                        return 0;
                    }


    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}