#include <iostream>

using namespace std;

int main() {
    int code;
    cout << "Available product codes: 101, 102, 103, 104, 105, 106, 107" << endl;
    cout << "Enter product code: ";
    cin >> code;

    switch (code) {
        case 101:
            cout << "Product 101: Price = 250.50 UAH, Stock = 15 pcs." << endl;
            break;
        case 102:
            cout << "Product 102: Price = 120.00 UAH, Stock = 42 pcs." << endl;
            break;
        case 103:
            cout << "Product 103: Price = 890.99 UAH, Stock = 7 pcs." << endl;
            break;
        case 104:
            cout << "Product 104: Price = 45.00 UAH, Stock = 100 pcs." << endl;
            break;
        case 105:
            cout << "Product 105: Price = 1500.00 UAH, Stock = 3 pcs." << endl;
            break;
        case 106:
            cout << "Product 106: Price = 310.25 UAH, Stock = 28 pcs." << endl;
            break;
        case 107:
            cout << "Product 107: Price = 675.00 UAH, Stock = 11 pcs." << endl;
            break;
        default:
            cout << "Error: Product with code " << code << " not found." << endl;
            break;
    }

    return 0;
}
