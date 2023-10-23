#include <iostream>

using namespace std;

int main() {
  int n, m;

  cout << "Введите два числа: ";
  cin >> n >> m;

  int fact_n = 1;
  for (int i = 1; i <= n; i++) {
    fact_n *= i;
  }

  int fact_m = 1;
  for (int i = 1; i <= m; i++) {
    fact_m *= i;
  }

  if (fact_n == m) {
    cout << "Да, числа факториал друг друга." << endl;
  } else {
    cout << "Нет, числа не факториал друг друга." << endl;
  }

  return 0;
}