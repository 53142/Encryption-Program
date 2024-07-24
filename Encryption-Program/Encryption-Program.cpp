// Encryption-Program.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <fstream>

#include "Encryption-Program.h"

using namespace std;


string strToBinary(string s)
{
	int n = s.length();


	for (int i = 0; i <= n; i++)
	{
		// convert each char to ASCII value
		int val = int(s[i]);

		// Convert each ASCII value to binary
		string bin = "";
		while (val > 0)
		{
			(val % 2) ? bin.push_back('1') :
				bin.push_back('0');
			val /= 2;
		}
		reverse(bin.begin(), bin.end());

		return bin;
	}
}

int main()
{
	fstream file;
	int choice;
	cout << "Press 1 to encrypt. Press 2 to decrypt." << endl;

	cin >> choice;

	if (choice == 1) {
		//encrypt();
		cout << "Opening file..." << endl;
		file.open("file.dat", ios::in | ios::out | ios::binary);
		file.write(strToBinary("h"), 3);
	}
	else if (choice == 2) {
		//decrypt();
	}
	else {
		cout << "Invalid input. Please enter 1 or 2." << endl;
	}
	return 0;
}