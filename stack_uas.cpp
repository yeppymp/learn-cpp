#include<iostream>
#include<stack>

using namespace std;

int main() {
	int c = 0;
	// Empty Stack
	stack<int> mystack;
	mystack.push(5);
	mystack.push(0);
	mystack.push(9);
	// Stack becomes 9, 0, 5

	// Counting number of elements in queue
	while(!mystack.empty()) {
		cout << " " << mystack.top();
		mystack.pop();
	}
	cout << endl;
}

