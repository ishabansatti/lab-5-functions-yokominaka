// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
using namespace std;

int area(int side){
	return side * side;
}

int area(int length,int width){
	return length * width;
}
double area(double radius){
	return 3.14159*radius*radius;
}

int main(){
	int side=5;
	int length=8;
	int width=4;
	double radius=3.0;
	cout << "Area of square: "<<area(side)<< endl;
	cout << "Area of rectangle: "<<area(length,width)<< endl;
	cout << "Area of circle: "<<area(radius)<< endl;
	return 0;
}
