#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	vector<int> data = {10, 15, 20, 25, 30, 35};
	int number;

	cout << "=================================" << endl;
	cout << "---- BINARY SEARCH ALGORITHM ----" << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "-------------- DATA -------------" << endl << endl;
	cout << "----  10, 15, 20, 25, 30, 35 ----" << endl << endl;
	cout << "=================================" << endl;
	cout << "Find number in data: ";
	cin >> number; 
	
	if (binary_search(data.begin(), data.end(), number)) {
		cout << "Yupp! " << number << " exist in data.";
	}
	else {
		cout << number << " does not exist in the data.";
		cout << endl;
	}
} 
