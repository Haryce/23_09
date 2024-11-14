#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double B, H;
    double x, y;
    B = 2;
    H = 3;
    // Ввод координат точки
    cout << "Введите координаты точки (x, y): ";
    cin >> x >> y;
    // Проверяем, принадлежит ли точка (x, y) заштрихованной области
    if (x >= 0 && y >= 0 && y <= (-H / B) * x + H) {
        cout << "Точка (" << x << ", " << y << ") принадлежит заштрихованной области." << endl;
    } else {
        cout << "Точка (" << x << ", " << y << ") не принадлежит заштрихованной области." << endl;
    }

    return 0;
}