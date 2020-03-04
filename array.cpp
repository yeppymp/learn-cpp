#include <iostream>

using namespace std;

int main() {
	int i,j,ANGKA[5];

	for(i=0; i<5; i++) {
		cout << "MASUKAN ANGKA [" << i << "]= ";
		cin >> ANGKA[i];
	}

	for(i=0; i<5; i++) {
		cout <<"ANGKA ["<<i<<"]= "<<ANGKA[i]<<" ADA DIALAMAT = "<<&ANGKA[i]<<endl;
	}

	return 0;
}
