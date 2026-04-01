// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
using namespace std;

int power(int base, int exp){
    if (exp==0) return 1;
    else return base*power(base, exp -1);
}
int main() {
    cout <<"2^8= "<<power(2,8)<<endl; // Should output 256
    cout <<"3^4= "<<power(3,4)<<endl; // Should output 81
    return 0;
}
