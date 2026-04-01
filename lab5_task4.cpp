// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 05 (OOP)

#include<iostream>
using namespace std;

bool isPrime(int n);

int main(){
	int n1=2;
	int n2=4;
	int n3=17;

	if(isPrime(n1))cout << n1 << " is prime"<<endl;
	else cout<<n1<<"is not a prime" << endl;

	if(isPrime(n2)) cout << n2 << " is prime"<<endl;
	else cout<<n2 <<"is not prime" << endl;

	if(isPrime(n3)) cout<<n3<<" is prime"<< endl;
	else cout << n3 << " is not prime" << endl;

	return 0;
}

bool isPrime(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
