#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c, d, e, f, g, h;
    cout << "Введите координаты точки A (a, b): ";
    cin >> a >> b;
    cout << "Введите координаты точки B (c, d): ";
    cin >> c >> d;
    cout << "Введите координаты точки E (e, f): ";
    cin >> e >> f;
    cout << "Введите координаты точки G (g, h): ";
    cin >> g >> h;
    //Проверка на действительность
    double det1 = (g - e) * (b - f) - (h - f) * (a - e);
    double det2 = (g - e) * (d - f) - (h - f) * (c - e);
    if ((det1 > 0 && det2 > 0) || (det1 < 0 && det2 < 0)) {
        cout << "Точки (a, b) и (c, d) принадлежат одной и той же полуплоскости." << endl;
    } else {
        cout << "Точки (a, b) и (c, d) не принадлежат одной и той же полуплоскости." << endl;
    }
    return 0;
}