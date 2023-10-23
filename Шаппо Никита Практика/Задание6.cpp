#include <iostream>

using namespace std;

int main() {

 setlocale(0, "");
 int number;

 cout << "Введите число: ";
 cin >> number;

 while (number % 2 == 0 ) {
  number /= 2;
 }
 if (number == 1 ) {
  cout << "Число является степенью 2";
 }
 else {
  cout << "Число не является степенью 2";
 }
 return 0;
}