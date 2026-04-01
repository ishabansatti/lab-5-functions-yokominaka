// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
using namespace std;

int generateID();

int main(){
    cout<<generateID()<<endl;
	cout<<generateID()<<endl;
	cout<<generateID()<<endl;
	cout<<generateID()<<endl;
	cout<<generateID()<<endl;
	return 0;
}

int generateID(){
	static int ID = 1001;
	return ID++;
}
