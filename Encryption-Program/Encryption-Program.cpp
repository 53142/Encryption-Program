// Encryption-Program.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <fstream>

#include "Encryption-Program.h"

using namespace std;



void encrypt() {
	fstream file;
	string input = "";

	cout << "Opening file..." << endl;
	file.open("file.dat", ios::in | ios::out | ios::binary | ios::trunc);

	cout << "What should the file contain?" << endl;
	cin >> input;

	cout << "Writing file..." << endl;
	cout << "input: " << input << endl;
	file.write(new char[input.length() + 1], input.length());
}



int main() {
	int choice;
	cout << "Press 1 to encrypt. Press 2 to decrypt." << endl;

	cin >> choice;

	switch (choice) {
		case 1:
			encrypt();
			break;
		case 2:
			//decrypt();
			break;
		default:
			cout << "Invalid input. Please enter 1 or 2." << endl;
			break;
	}
	return 0;
}
