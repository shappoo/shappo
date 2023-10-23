#include <iostream>

using namespace std;
int main() {
setlocale(0, "");
 int year;
 cout << "Введите год: ";
cin >> year;

 if (year % 4 == 0) {
  {
   cout << "Год високосный";
  }
 }
 else
 {
 cout << "Год не високосный";
 }
 return 0;
}


 