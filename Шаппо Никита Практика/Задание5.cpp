#include <iostream>

using namespace std;
int main () {
   setlocale(0, "");
    int num;

    cout << "введите число: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0) {
        cout << "число кратно 5 и 3";
    }
    else {
        cout << "число не кратно 5 и 3";
    }
    return 0;
}