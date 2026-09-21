// Lab_02.cpp
// Паюк Максим
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 21
#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    // Налаштування UTF-8 для консолі (кодова сторінка 65001)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double Pi = 4.0 * atan(1.0); // число пі
    double a;                    // вхідний параметр
    double z1;                   // результат обчислення 1-го виразу
    // double z2;                   // результат обчислення 2-го виразу

    cout << "Введіть значення a (в радіанах) = ";
    cin >> a;

    z1 = 2.0 * pow(sin((3.0 * Pi) - 2.0 * a), 2) * pow(cos((5.0 * Pi) + (2.0 * a)), 2);

    // z2 = (1.0 / 4.0) - (1.0 / 4.0) * sin((5.0 * Pi) / 2.0 - (8.0 * a));

    cout << endl;
    cout << "z1 = " << z1 << endl;
    // cout << "z2 = " << z2 << endl;

    cin.get();

    return 0;
}