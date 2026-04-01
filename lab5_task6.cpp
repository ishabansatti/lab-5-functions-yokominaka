// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
using namespace std;

int main(){
    int counter = 0;

    auto increment=[&]() {
    counter++;
    };

    increment();
    cout <<"Counter: "<<counter<<endl;

    increment();
    cout <<"Counter: "<<counter<<endl;

    increment();
    cout <<"Counter: "<<counter<< endl;
    return 0;
}