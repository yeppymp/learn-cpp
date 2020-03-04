#include<iostream>
using namespace std;

void print(int p) {
	if (p==0) return;
	cout << p;
	print(p-1);
	return;
}

int Fibonacci(int n) {
	if (n==0) return 0;

	return( Fibonacci(n-2) + Fibonacci(n-1) );
}


bool isPrime(int p, int i=2) {
	if (i==p) return 1;
	if (p%i == 0) return 0;

	return isPrime (p, i+1);
}

int sum (int num, int total=0) {
	if (num<=0) return total;
	else if (num==0) return 0;
	return (sum(num-1) + (num));
}

main() {
	int input;

	cout << "Insert some number: "; cin >> input;
	print(input);
	// cout << sum(input);
	// cout << isPrime(input);
	cout << endl;
}