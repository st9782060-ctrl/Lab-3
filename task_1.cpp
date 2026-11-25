#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter a positive three-digit number N: ";
    cin >> N;

    if (N < 100 || N > 999) {
        cout << "Error: N must be a positive three-digit number (100..999)." << endl;
        return 1;
    }

    int d1 = N / 100;         // сотні
    int d2 = (N / 10) % 10;   // десятки
    int d3 = N % 10;          // одиниці

    int sum = 0;
    if (d1 > 5) sum += d1;
    if (d2 > 5) sum += d2;
    if (d3 > 5) sum += d3;

    cout << "Digits: " << d1 << ", " << d2 << ", " << d3 << endl;
    cout << "Sum of digits greater than 5: " << sum << endl;

    return 0;
}
