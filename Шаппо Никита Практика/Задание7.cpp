#include <iostream>

using namespace std;

int main() {

    setlocale(0, "");
    int year;
    cout << "Введите год: ";
    cin >> year;

    if (year % 100 == 0) {
        cout << year << " является вековым годом.\n";
    }
    else {
        cout << year << " не является вековым годом.\n";
    }

    return 0;
}