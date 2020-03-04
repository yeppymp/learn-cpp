#include<iostream>
using namespace std;

bool repeat_menu = true;
int menu;

// Procedure Declaration
void spaciousCircle() {
	float phi = 3.14, r, spacious;
	
	cout << "\nInsert circle radius: "; cin >> r;
	spacious = (phi * r * r);
	cout << "The spacious circle with radius " << r << " is " << spacious << endl;
}

void spaciousTriangle() {
	float spacious, high, triangle_base;

	cout << "\nInsert triangle high: "; cin >> high;
	cout << "\nInsert triangle base: "; cin >> triangle_base;

	spacious = (0.5 * triangle_base * high);
	cout << "\nThe spacious from triangle high " << high << " and triangle base " << triangle_base << " is " << spacious << endl;
}

void aroundTheCone() {
	float phi = 3.14, r, result;

	cout << "\nInsert cone base radius: "; cin >> r;
	result = (2 * phi * r);
	cout << "\nAround the cone from cone base radius " << r << " is " << result << endl;
}

void viewIndex() {
	cout << "\n==============================================\n";
	cout << "           Welcome! You can count:\n";
	cout << "1. Spacious circle\n";
	cout << "2. Spacious triangle\n";
	cout << "3. Around the cone\n";
	cout << "4. Exit\n";
	cout << "==============================================\n";
	cout << "\n Please insert the menu number [1-4]: "; cin >> menu;

	switch(menu) {
		case 1: spaciousCircle(); repeat_menu = false; break;
		case 2: spaciousTriangle(); repeat_menu = false; break;
		case 3: aroundTheCone(); repeat_menu = false; break;
		default: repeat_menu = false; break;
	}
}

main() {
	do {
		viewIndex();
	}
	while (repeat_menu);
}
