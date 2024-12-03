#include "std.h"
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;

    cout << "Сумма: " << (a + b) << endl;
    cout << "Произведение: " << (a * b) << endl;
    cout << "Частное: " << (a / b) << endl;

    cout << "Изменения в master" << endl;
    cout << "Изменения в division" << endl;

    return 0;
}

