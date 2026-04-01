// Mini Calculator Program
// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
using namespace std;

int calculate(int a,int b,char op);
double calculate(double a,double b,char op);
double power(double base, int exp);
int total_calc();

int main(){
    int count=0;

    int i1, i2;
    char operator1;
    cout << "enter two integers and operator: ";
    cin >> i1>>i2>> operator1;
    cout << "Result: "<<calculate(i1, i2, operator1)<< endl;
    count = total_calc();

    double d1, d2;
    char operator2;
    cout<<"Enter two decimal numbers and a operator: ";
    cin>> d1 >> d2 >>operator2;
    cout<<"Result: "<<calculate(d1, d2, operator2)<<endl;
    count=total_calc();

    double base;
    int exp;
    cout<<"Enter base and exponent: ";
    cin>>base>>exp;
    cout<< "Power result = " <<power(base, exp)<<endl;
    count=total_calc();

    auto printAbsDifference = [](double a, double b){
        if(a >= b){
            cout<<"Absolute difference = "<<(a-b)<<endl;
        }else{
            cout<<"Absolute difference = "<<(b-a)<<endl;
        }
    };

    double x, y;
    cout << "Enter two numbers for absolute difference: ";
    cin >> x >> y;
    printAbsDifference(x,y);
    count = total_calc();

    cout << "Total calculations done: "<<count<< endl;
    return 0;
}

int calculate(int a, int b, char op){
    switch(op){
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/':
            if(b==0){
                cout<<"division by zero"<<endl;
                return 0;
            }
            return a/b;
        default:
            cout<<"Invalid operator"<<endl;
            return 0;
    }
}
double calculate(double a,double b,char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if(b==0){
                cout<<"dividing by zero is not possible"<< endl;
                return 0;
            }
            return a/b;
        default:
            cout<<"invalid  operator entered"<<endl;
            return 0;
    }
}

double power(double base,int exp){
    if(exp==0){
        return 1;
    }
    else return base*power(base,exp - 1);
}

int total_calc(){
    static int count=0;
    count++;
    return count;
}