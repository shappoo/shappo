#include <iostream>

using namespace std;

int main() {

    setlocale(0, "");
    string str1;
    cout << "Введите первую строку: ";
    cin >> str1;

    string str2;
    cout << "Введите вторую строку: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << str1 << " и " << str2 << " не являются анаграммами.\n";
        return 0;
    }

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[str1.length() - 1 - i]) {

            cout << str1 << " и " << str2 << " не являются анаграммами.\n";
            return 0;
        }
    }

    cout << str1 << " и " << str2 << " являются анаграммами.\n";
    return 0;
}