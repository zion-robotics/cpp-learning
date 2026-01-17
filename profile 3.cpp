#include <iostream>
using namespace std;
int main() {
    string fullname, dept;
    int age, level, matricno;
    
    cout<<"Input yr fullname: ";
    getline(cin, fullname);
    cout<<"Input yr Age: ";
    cin>>age;
    
    cin.ignore();
    
    cout<<"Input yr dept: ";
    getline(cin, dept);
    cout<<"Input yr level: ";
    cin>>level;
    cout<<"Input yr Matric number: ";
    cin>>matricno;
    
    cout<<"----Personal Details---- \n";
    
    cout<<"Name : "<<fullname<<"\n";
    cout<<"Age : "<<age<<"\n";
    cout<<"Matric number : "<<matricno<<"\n"
    ;
    cout<<"Department : "<<dept<<"\n";
    cout<<"Level : "<<level<<"\n";
    
    return 0;
}