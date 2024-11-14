#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
  double x, y;
  cout << "Введите x: ";
  cin >> x;
  cout << "Введите y: ";
  cin >> y;

  double max_value = max(x, y);
  cout << "Максимальное значение: " << max_value << endl;
  return 0;
}
 