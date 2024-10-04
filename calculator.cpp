#include<iostream>
using namespace std;

int main(){
    double num1,num2;
    char op;
    cout<<"Enter the Operator (+,-,*,/)\n";
    cin>>op;
    cout<<"Enter The First Number\n";
    cin>>num1;
    cout<<"Enter The Second Number\n";
    cin>>num2;
    
    switch (op){
    case '-':
    cout<<"Subtraction "<<num1<<op<<num2<<"="<<num1-num2<<endl;
        break;
    case '+':
    cout<<num1<<op<<num2<<"="<<num1+num2<<endl;
        break;
    case '*':
    cout<<num1<<op<<num2<<"="<<num1*num2<<endl;
        break;
    case '/':
    if(num2 == 0.0){
        cout<<"Divde by zero"<<endl;
    }
    else{
        cout<<num1<<op<<num2<<"="<<num1/num2<<endl;
    }
    
     break;    
    default:
    cout<<"Invalid Operator";
        break;
    }

return 0;

}