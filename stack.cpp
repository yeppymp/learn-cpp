#include<iostream>
#include<stack>
using namespace std;

int main() {
	stack<string> mystack;

	int length;
	cout << "How many character for your word that you want to show? "; cin >> length;

	for (int i = 0; i < length; i++) {
		string character;
		cout << "Insert " << i + 1 << " : "; cin >> character;
		mystack.push(character);
	}
	
	cout << endl;
	while(!mystack.empty()) {
		cout << " " << mystack.top();
		mystack.pop();
	}
	cout << endl;
}

