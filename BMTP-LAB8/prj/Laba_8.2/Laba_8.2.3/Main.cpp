#include <iostream>
#include <iomanip>
#include <locale>
#include "/StaticLib/StaticLib/Name.h"

using namespace std;
void s_calculation(double a, double b, double c, double d, double e, double f) {
    setlocale(LC_ALL, "ukr");
    // ���������� ������� x, y � z
    double x = a + b;
    double y = c * d;
    double z = e - f;

    // ��������� ������� x, y � z � ��������� ������ ��������
    cout << "�������� x (���������): " << fixed << setprecision(2) << x << endl;
    cout << "�������� y (���������): " << fixed << setprecision(2) << y << endl;
    cout << "�������� z (���������): " << fixed << setprecision(2) << z << endl;

    // ��������� ������� x, y � z � �������������� ������ ��������
    cout << "�������� x (�i������������): " << hexfloat << x << endl;
    cout << "�������� y (�i������������): " << hexfloat << y << endl;
    cout << "�������� z (�i������������): " << hexfloat << z << endl;
}

int Job_name() {
    SetConsoleOutputCP(866);
    const int width = 32;

    cout << (char)218 << string(width, (char)196) << (char)191 << endl;

    cout << (char)179;
    SetConsoleOutputCP(1251);
    cout << "���������� ��������� ����� ��-23";
    SetConsoleOutputCP(866);
    cout << (char)179 << endl;
    cout << (char)179;
    SetConsoleOutputCP(1251);
    cout << "����������� �������             ";
    SetConsoleOutputCP(866);
    cout << (char)179 << endl;
    cout << (char)179;
    SetConsoleOutputCP(1251);
    cout << "\u00A9" << " �� ����� �������!           ";
    SetConsoleOutputCP(866);
    cout << (char)179 << endl;

    cout << (char)192 << string(width, (char)196) << (char)217 << endl;

    return 0;
}
int s_calculation() {
    double a = 5.0, b = 3.0, c = 2.0, d = 4.0, e = 10.0, f = 7.0;
    // ������ ������� s_calculation() � ���������� ����������
    s_calculation(a, b, c, d, e, f);

    return 0;
}


