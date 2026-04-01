// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main(){
	int x=10;
	int y=20;

	cout<<"before swapping:x = " << x << ",y= "<<y<<endl;
	swap(x, y);
	cout<<"after swapping:x = " << x << ",y= "<<y<<endl;
	return 0;
}
void swap(int &a, int &b){
	int temp = a;
	a=b;
	b=temp;
}
