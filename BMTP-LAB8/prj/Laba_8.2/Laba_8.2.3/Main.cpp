#include <iostream>
#include <iomanip>
#include <locale>
#include "/StaticLib/StaticLib/Name.h"

using namespace std;
void s_calculation(double a, double b, double c, double d, double e, double f) {
    setlocale(LC_ALL, "ukr");
    // Обчислення значень x, y і z
    double x = a + b;
    double y = c * d;
    double z = e - f;

    // Виведення значень x, y і z в десятковій системі числення
    cout << "Значення x (десяткова): " << fixed << setprecision(2) << x << endl;
    cout << "Значення y (десяткова): " << fixed << setprecision(2) << y << endl;
    cout << "Значення z (десяткова): " << fixed << setprecision(2) << z << endl;

    // Виведення значень x, y і z в шістнадцятковій системі числення
    cout << "Значення x (шiстнадцяткова): " << hexfloat << x << endl;
    cout << "Значення y (шiстнадцяткова): " << hexfloat << y << endl;
    cout << "Значення z (шiстнадцяткова): " << hexfloat << z << endl;
}

int Job_name() {
    SetConsoleOutputCP(866);
    const int width = 32;

    cout << (char)218 << string(width, (char)196) << (char)191 << endl;

    cout << (char)179;
    SetConsoleOutputCP(1251);
    cout << "Розроблено студентом групи КБ-23";
    SetConsoleOutputCP(866);
    cout << (char)179 << endl;
    cout << (char)179;
    SetConsoleOutputCP(1251);
    cout << "Захарченком Антоном             ";
    SetConsoleOutputCP(866);
    cout << (char)179 << endl;
    cout << (char)179;
    SetConsoleOutputCP(1251);
    cout << "\u00A9" << " Всі права захищені!           ";
    SetConsoleOutputCP(866);
    cout << (char)179 << endl;

    cout << (char)192 << string(width, (char)196) << (char)217 << endl;

    return 0;
}
int s_calculation() {
    double a = 5.0, b = 3.0, c = 2.0, d = 4.0, e = 10.0, f = 7.0;
    // Виклик функції s_calculation() з переданими значеннями
    s_calculation(a, b, c, d, e, f);

    return 0;
}


