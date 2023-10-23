#include <iostream>
using namespace std;

int main() {
setlocale(0, "");
int n;
cout << "Введите число: ";
cin >> n;

if (n > 0) {
cout << n << " - это положительное число " << endl;
}
else if (n < 0) {
cout << n << " - это отрицательное число " << endl;
}
else {
cout << n << " - это нуль " << endl;
}
return 0;
}