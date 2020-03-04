#include <iostream>

using namespace std;

int circle(int r) {
	const float phi = 3.14;
	float L;

	L = phi * r * r;

	return L;	
}

void triangle(int width, int height) {
	float L;
	L = ( width * height ) / 2;
	cout << L;
}

int square(int width, int height) {
	float L;
	L = width * height;
	return L;
}

int testProcedure() {
	cout << "Hello from procedure!";
}

main() {
	int width, height, r, chosen;

	cout << "---------------------------------------" << endl;
	cout << "Hey, Welcome! This is my calculate list feature!";
	cout << ":\n1.Triangle\n2.Circle\n3.Square\n";
	cout << "Choose calculate process: "; cin >> chosen;

	switch (chosen) {
		case 1:
			cout << "---------------------------------------" << endl;
			cout << "Calculate triangle!" << endl << endl;
			cout << "Witdh: "; cin >> width;
			cout << "Height: "; cin >> height;
			triangle(width, height);
			cout << "\n---------------------------------------" << endl;
			break;
		case 2:
			cout << "---------------------------------------" << endl;
			cout << "Calculate circle!" << endl << endl;
			cout << "Input circle radius: "; cin >> r;
			cout << "\nResult is " << circle(r);
			cout << "\n---------------------------------------" << endl;
			break;
		case 3:
			cout << "---------------------------------------" << endl;
			cout << "Calculate square!" << endl << endl;
			cout << "Witdh: "; cin >> width;
			cout << "Height: "; cin >> height;
			cout << "\nResult : " << square(width, height);
			cout << "\n---------------------------------------" << endl;
			break;
	
		default:
			cout << "You haven't choose anything!" << endl;
			break;
	}
}