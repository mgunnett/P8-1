#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str);

int main() {
	string input;
	int characters;

	cout << "Please enter your word: ";
	getline(cin, input);

	characters = countCharacter(input);

	cout << "There are " << characters << " characters in your word.";
	return 0;
}

int countCharacter(string str) {
	return str.length();
}