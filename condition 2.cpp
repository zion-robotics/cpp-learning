#include <iostream>
using namespace std;
int main() {
    string name;
    int score;
    
    cout<<"Input your name : ";
    getline(cin,name);
    cout<<"Input your score : ";
    cin>>score; 
;

    
    
                    
    cout<<"----Result---- \n";
    cout<<"Name : "<<name<<"\n";
    cout<<"Score : "<<score<<"\n";
    
    if (score <0 || score >100){
        cout<<"Result not defined";
    }
   else if (score >= 70){
        cout<<"Grade : A";
    }
        else if (score >= 60){
            cout<<"Grade : B";
        }
            else if (score >= 50){
                cout<<"Grade : C";
            }
                else {
                    cout<<"Fail";
                    }
    
    return 0;
}