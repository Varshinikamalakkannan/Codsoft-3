#include<iostream>
using namespace std;

class calculator{
    public:
       float add(int a, int b){
        return a+b;
       }
       float sub(int a,int b){
        return a-b;
       }
       float multiply(int a, int b){
        return a*b;
       }
       float divide(int a,int b){
        return a/b;
       }
};

int main(){
    calculator c;
    int a,b,op,ch;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    do{
    cout<<"Enter the option:";
    cin>>op;
    switch(op){
    case 1:cout<<"Addition:"<<c.add(a,b)<<endl;
    break;
    case 2:cout<<"Subtraction:"<<c.sub(a,b)<<endl;
    break;
    case 3:cout<<"Multiplication:"<<c.multiply(a,b)<<endl;
    break;
   case 4:cout<<"Division:"<<c.divide(a,b)<<endl;
    default:cout<<"Invalid operator:";
    break;
        }
    cout<<"Do you want to continue press '0':";
    cin>>ch;
    }
    while(ch==0);
    return 0;
}