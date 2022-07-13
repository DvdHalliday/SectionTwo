#include <iostream>

enum options {Programming=1,Game_Art,Tech_Art,Music_Production};
int main() {
	std::cout<<"Welcome to Teravision Games! What would you like to know about?\n";
	std::cout << "\n1 - Programming\n2 - Game Art\n3 - Tech Art\n4 - Music Production\n\nYour choice: ";
	int choice;
	std::cin >> choice;
	switch (choice) {
	case Programming:
		std::cout << "Alright! JD can sort this out.\n";
		break;
	case Game_Art:
		std::cout << "Sweeeet, you should ask around for Bergmann!\n";
		break;
	case Tech_Art:
		std::cout << "Cool! You should probably go talk to Dan about that!\n";
		break;
	case Music_Production:
		std::cout << "Woah! Capn' ToonHead's soundtrack was a blast, amirite?\n";
		break;
	default:
		std::cout << "Your answer is not an option, please call us again.\n";
	}
}