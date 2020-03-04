#include <iostream>
#include <vector>
#include <algorithm>    // std::shuffle
#include <array>    		// std::shuffle
#include <random>       // std::default_random_engine
#include <iomanip>			// std::setw for table score

using namespace std;

// Variable declaration
bool repeat_menu = true;
vector<string> user_name, user_id;
array<int, 100> user_score;
int user_index = -1,
		menu;


// Function declaration
string toUpperCase(string s);
bool checkAnswer(string user_input, string correct_answer);

// Procedure declaration
void showScore(),
		 swap(int *xp, int *yp),
		 about(),
		 sortDescending(int user_data_count),
		 viewIndex(),
		 doTest(),
		 getQuestion(),
		 backOrExit();

// stroingto uppercase, if user input a, converted to A
string toUpperCase(string s) {
	locale loc;
	string converted;

  for (string::size_type i = 0; i < s.length(); ++i) converted.push_back(toupper(s[i],loc));

	return converted;
}

bool checkAnswer(string user_input, string correct_answer) {
	if( toUpperCase(user_input) == correct_answer ) {
		return true;
	} else {
		return false;
	}
}

// bubble sort
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void sortDescending(int user_data_count)  {
	for (int row = 0; row < user_data_count; row++) {
		for (int col = 0; col < user_data_count - 1; col++) {
			if (user_score[col] < user_score[col + 1]) {
				swap(user_name[col], user_name[col + 1]);
				swap(user_id[col], user_id[col + 1]);
				swap(user_score[col], user_score[col + 1]);
			}
		}
	}
}
// end bubble sort

void backOrExit() {
	char input;
	cout << "\nInsert anything for Exit or '0' for Back to menu : "; cin >> input;

	switch (input) {
		case '0': viewIndex(); break;
		default: repeat_menu = false; break;
	}
}

void viewIndex() {
	cout << "\n===========================================\n";
	cout << "== Placement Test Mercu Buana University ==\n";
	cout << "===========================================\n\n";
	cout << setw(35) << left << "1. Do Test" << setw(35) << left << "3. About" << endl;
	cout << setw(35) << left << "2. Score" << setw(35) << left << "4. Exit" << endl;
	cout << "\n===========================================\n";
	cout << "\nPlease insert the menu number [1-4]: "; cin >> menu;

	// Conditional -> Switch Case
	switch(menu) {
		case 1: doTest(); backOrExit(); break;
		case 2: showScore(); backOrExit(); break;
		case 3: about(); backOrExit(); break;
		case 4: repeat_menu = false; break;
		default: repeat_menu = false; cout << "\nNumber " << menu << " is not on the lists!\n"; break;
	}
}

void doTest() {
	string name, nim;
	user_index += 1;

	cout << "\n===========================================\n";
	cout << "\nYour First Name: "; cin >> name; user_name.push_back(name);
	cout << "Your Student ID: "; cin >> nim; user_id.push_back(nim);

	cout << "\n===========================================\n";
	cout << "\nOK " << user_name[user_index] << ", answer the question below!\n";
	cout << "\n            With, A, B, C or D            ";
	cout << "\n===========================================\n";
	getQuestion();
}

void showScore(){

	int user_data_count = user_name.size();

	sortDescending(user_data_count);

	cout << "\n===========================================\n";
	cout << "================== SCORE ==================\n";
	cout << "===========================================\n\n";
	cout << setw(19) << left << "Name" << setw(19) << left << "ID" << setw(19) << left << "Score" << endl << endl;
	for (size_t n = 0; n < user_data_count; n++) {
		cout << setw(19) << left << user_name[ n ] << setw(19) << left << user_id[ n ] << setw(19) << left << user_score[n] << endl;
	}
	cout << "\n===========================================\n";
}

void about() {
	cout << "\n===========================================\n";
	cout << "================ ALGORITHM ================\n\n";
	cout << "1. Sorting Algorithm (Bubble Sort)\n";
	cout << "2. Random Algorithm (Fisher–Yates Shuffle)\n\n";
	cout << "================= MADE BY =================\n\n";
	cout << "1. Yeppy Mangun Puspitajudin\n";
	cout << "2. Muhammad Fauzi Maulana\n";
	cout << "3. Riska Putri Chubara\n";
	cout << "\n===========================================\n";
}

void getQuestion() {
	// Multidimentional Array -> 2 Dimension
	string questions[5][2] = {
		{
			"\nWho is the inventor of 0 ?\n\nA. James Watt\nB. As-Syifa\nC. Al-Khawarizmi\nD. Stephen Hawking",
			"C"
		},
		{
			"\nThe sequence of logical steps for solving problems arranged systematically is called ?\n\nA. Algorithm\nB. Flowchart\nC. Variable\nD. Data Type",
			"A"
		},
		{
			"\nThe data type for TRUE or FALSE is ?\n\nA. String\nB. Char\nC. Byte\nD. Boolean",
			"D"
		},
		{
			"\nThe term 'Repetition' in programming is known as ?\n\nA. Repeating\nB. Replay\nC. Looping\nD. Again",
			"C"
		},
		{
			"\nThe data type that is suitable for storing name is ?\n\nA. Character\nB. Numeric\nC. Integer\nD. Array",
			"A"
		}
	};

	string choice;
	user_score[user_index] = 0;

	// shuffle algorithm
	random_device rd;
  mt19937 g(rd());
  shuffle(begin(questions), end(questions), g);
	// end shuffle algorithm

	for(int row = 0; row < sizeof questions / sizeof questions[0]; row++) {
		for (int column = 0; column < 1; column++) {
			// Conditional -> If Clause -> Nested If
			if (row == row) {
				cout << endl << questions[row][column] << endl;
				cout << "\nYour choice : "; cin >> choice;
				if (checkAnswer(choice, questions[row][column+1])) {
					user_score[user_index] += 20;
				};
			}
		}
	}

	cout << "\nTest Finished!\n";
	cout << "\n===========================================\n";
}

int main() {
	// Go to Menu
	do {
		viewIndex();
	}
	while (repeat_menu);	
}
