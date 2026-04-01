// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)
#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter two integes : ";
    cin >>x>> y;

    auto sum_product = [=]() {
        int sum = x + y;
        int product = x * y;
        cout << "Sum: " << sum << endl;
        cout << "Product: " << product << endl;
    };

    sum_product();
    return 0;
}
