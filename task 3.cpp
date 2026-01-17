#include  <iostream>
#include <string> 
using namespace std;

int main() {
    string fullname;
    cout << "Enter your full name: ";
    getline(cin, fullname);
    

    string favlan;
    cout << "Enter your favorite programming language : ";
    getline(cin, favlan);

  

    string dept;
    cout << "Enter your department: ";
    getline(cin, dept);

    cout << "\n----Profile Details---- \n";
    cout << "Name: " << fullname << "\n";
    cout << "Name length: " << fullname.length() << "\n";
    cout << "Favorite Programming Language: " << favlan << "\n";
    cout << "Department: " << dept << "\n";

    cout << "\nWow you like " << favlan << " programming language!\n";
    cout << "\nThank you for providing your details!\n";

    return 0;
}