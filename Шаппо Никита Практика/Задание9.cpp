#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Введите число: ";
  cin >> n;

  int sum = 1;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      sum += i;
      if (i * i != n) {
        sum += n / i;
      }
    }
  }

  if (sum == n) {
    cout << "Да, число совершенное." << endl;
  } else {
    cout << "Нет, число не совершенное." << endl;
  }

  return 0;
}