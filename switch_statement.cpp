// March, 19 2019
// Yeppy Mangun Puspitajudin

#include <iostream>
using namespace std;

int main() {
	int score;

	cout << "Enter your score (10 - 100): "; cin >> score;

	switch (score / 10) {
		case 10:
		case 9:
			cout << "Your grade is A" << endl;
			break;
		case 8:
			cout << "Your grade is B" << endl;
			break;
		case 7:
			cout << "Your grade is C" << endl;
			break;
		case 6:
			cout << "Your grade is D" << endl;
			break;
	
		default:
			cout << "Error: score is out of range." << endl;
			break;
	}

	cout << "Adios!" << endl;
}