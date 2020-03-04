// March, 19 2019
// Yeppy Mangun Puspitajudin

// TASK
#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "May i know your age? Please: "; cin >> age;

	if (age < 18) cout << "You're a child!\n";
	else if (age >= 18 && age < 65) cout << "You're an adult!\n";
	else cout << "You're an senior citizen!\n";
}
