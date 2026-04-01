// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
using namespace std;

int accumulate(int value){
    static int total = 0;
    total += value;
    return total;
}

int main(){
    cout<< "current total:" <<accumulate(10)<< endl;
    cout<< "current total: "<<accumulate(25)<< endl;
    cout<< "current total: "<<accumulate(5)<< endl;
    return 0;
}