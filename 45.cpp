#include <iostream>
#include <cmath> //добавляем библиотеку cmath для условия замены чисел
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
  double a, b, c, d;
  cout << "Введите четыре действительных числа: ";
  cin >> a >> b >> c >> d;
  // Проверяем условия для замены чисел
  if ((a <= b && b <= c && c <= d) || (a >= b && b >= c && c >= d)) {
    // Если a ≤ b ≤ c ≤ d или a > b > c > d, 
    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    a = max;
    b = max;
    c = max;
    d = max;
  } else {
    a = a * a;
    b = b * b;
    c = c * c;
    d = d * d;
  }
  cout << "Измененные числа: " << a << " " << b << " " << c << " " << d << endl;
  return 0;
}
 