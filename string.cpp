#include <iostream>
using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Hello " << fullName << "\n";

    return 0;
}