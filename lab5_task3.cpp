// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
using namespace std;
int multiply(const int &a,const int &b);

int main(){
    int a=15;
    int b=10;
    cout<<"Product of two integers:"<< a<<" and "<< b<<" is: "<< multiply(a,b);
}

int multiply(const int &a,const int &b){
    return a*b;
}
