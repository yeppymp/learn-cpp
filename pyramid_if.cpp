#include<iostream>
using namespace std;

main() {
	int i, first_number;
	for ( i = 5; i >= 1; i--) {
		if (i == 5) {
			for ( first_number = 1; first_number <= 5; first_number++ ) {
				cout << i;
			}
			cout << endl;
		} else if (i == 4) {
			for ( first_number = 1; first_number <= 4; first_number++ ) {
                                cout << i;
                        }
			cout << endl;
		} else if (i == 3) {
			for ( first_number = 1; first_number <= 3; first_number++ ) {
                                cout << i;
                        }
			cout << endl;
		} else if (i == 2) {
			for ( first_number = 1; first_number <= 2; first_number++ ) {
                                cout << i;
                        }
			cout << endl;
		} else {
			for ( first_number = 1; first_number <= 1; first_number++ ) {
                                cout << i;
                        }
			cout << endl;
		}
	}
}
