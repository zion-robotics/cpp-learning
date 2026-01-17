#include <iostream>
using namespace std;
int main() {
    string fullname;
    
    cout << "Enter your name:  ";
    getline (cin , fullname);
    
    string dept;
    
     cout << "Enter your dept:  ";
     getline(cin , dept);
     
     int age;
     
      cout<< "Enter your age:  ";
      cin >> age;
      
      int level;
      
      cout<<"Enter your level: ";
      cin >> level;  "\n";
      
      int matricno;
      
      cout<<"Enter your matric number: ";
      cin >> matricno;
      "/n/n";
      
      cout <<"My name is "<<fullname << "\n";
       cout <<"I'm "<<age << " years old\n";
       cout <<"My matric number is "<<matricno<< "\n";
        cout <<"I'm in "<< level << " level \n";
         cout <<"I'm in "<<dept <<  " department \n";
           
            return 0;
}