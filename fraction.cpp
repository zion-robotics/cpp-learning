#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The sum is " << a + b << "\n";
    cout << "The product is " << a * b << "\n";
    cout << "The difference is " << a - b << "\n";

    if (b != 0) {
        cout << "The fraction of a to b is " << (float)a / b << "\n";
    } else {
        cout << "Division by zero is not allowed.\n";
    }

    return 0;
}