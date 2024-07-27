// Date: 7/27/2024
// By: 53142

#include <iostream>
#include <fstream>
#include <string>


// Function for encrypting the data
void encrypt() {
	std::fstream file;
	std::string input = "";
	int key;


	std::cout << "Opening file..." << std::endl;
	file.open("file.dat", std::ios::in | std::ios::out | std::ios::binary | std::ios::trunc);
	if (!file.is_open()) {
		std::cout << "Error opening the file!" << std::endl;
		throw new std::exception("Error opening the file!");
	}

	std::cout << "What is the encryption key?" << std::endl;
	std::cin >> key;

	std::cout << "What should the file contain?" << std::endl;
	std::cin >> input;


	for (int i = 0; i < input.length(); i++) {
		input[i] = input[i] + key;
	}


	std::cout << "Writing file..." << std::endl;
	file.write(input.c_str(), input.length());
}


// Function for decrypting the data
void decrypt() {
	std::string input = "";
	int key;


	std::cout << "Opening file..." << std::endl;

	std::fstream file("file.dat");
	if (!file.is_open()) {
		std::cout << "Error opening the file!" << std::endl;
		throw new std::exception("Error opening the file!");
	}

	std::cout << "What is the encryption key?" << std::endl;
	std::cin >> key;

	file >> input;

	for (int i = 0; i < input.length(); i++) {
		input[i] = input[i] - key;
	}

	std::cout << "Decrypted: " << input << std::endl;
}


// Main function
int main() {
	int choice;
	std::cout << "Press 1 to encrypt. Press 2 to decrypt." << std::endl;
	std::cin >> choice;

	switch (choice) {
		case 1:
			encrypt();
			break;
		case 2:
			decrypt();
			break;
		default:
			std::cout << "Invalid input. Please enter 1 or 2." << std::endl;
			break;
	}
	return 0;
}