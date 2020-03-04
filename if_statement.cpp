#include<iostream>
using namespace std;

int main() {
	// divider
	// int val, divider;

	// cout << "Input some value: "; cin >> val;
	// cout << "Input divider: "; cin >> divider;

	// if ((val % divider) != 0) {
	// 	cout << val << " couldn't be divided by " << divider << endl;
	// } else {
	// 	cout << val << " divided by " << divider << " is " << (val / divider) << endl;
	// }

	int a, b, c, m;

	cout << "Input 3 numerical value: "; cin >> a >> b >> c;

	// if( a < b ) m = a; else m = b;
	// if( c < m ) m = c;
	// cout << m << endl;

	if (a < b) {
		if (a < c) cout << "Minimum value is: " << a << endl;
		else cout << "Minimum value is: " << c << endl;
	} else {
		if (b < c) cout << "Minimum value is: " << b << endl;
		else cout << "Minimum value is: " << c << endl;
	}
}

