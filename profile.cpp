#include <iostream>
using namespace std;

int main() {
    string name, department;
    int age;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore(); // VERY IMPORTANT

    cout << "Enter your department: ";
    getline(cin, department);

    cout << "--- DETAILS ---\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Department: " << department << "\n";

    return 0;
}