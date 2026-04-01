// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
#include<string>
using namespace std;

void printType(int value){
	cout <<value<<" is of type int"<< endl;
}

void printType(double value){
	cout<< value << " is oftype double"<< endl;
}

void printType(char value){
	cout<<value << " is of type char"<< endl;
}

void printType(string value){
	cout <<value<< " is of type string"<< endl;
}

int main(){
	printType(10);
	printType(3.14);
	printType('A');
	printType("Hello");

	return 0;
}
