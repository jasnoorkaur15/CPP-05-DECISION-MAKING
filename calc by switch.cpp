//Jasnoor Kaur
//24070123049
#include <iostream>
using namespace std;

int main() {
    int a,b,r;
    char choice;
    
    cout<<"Available operations on the calculator:"<<"\n";
    cout<<"A) Addition"<<"\n";
    cout<<"B) Subtraction"<<"\n";
    cout<<"C) Multiplication"<<"\n";
    cout<<"D) Divison"<<"\n";
    cout<<"Enter operation you want to do(A,B,C,D): ";
    cin>>choice;
    cout<<"\n"<<"Enter num 1:";
    cin>>a;
    cout<<"Enter num 2:";
    cin>>b;
    
    switch (choice){
        case 'A':
        r = a+b;
        cout<<"\n"<<"Addition of the given numbers is "<<r;
        break;
      
        case 'B':
        r = a-b;
        cout<<"\n"<<"Subtraction of the given numbers is "<<r;
        break;
      
        case 'C':
        r = a*b;
        cout<<"\n"<<"Multiplication of the given numbers is "<<r;
        break;
      
        case 'D':
        if(b != 0){
        cout<<"Division of the given numbers is: "<<a/b<<endl;
        }
        else{
            cout<<"Invalid";
            exit(0);
        }
        break;
      
        default:
        cout<<"\n"<<"INVALID INPUT!";
        break;
    }
    
    return 0;
}
