#include <iostream>

int main() {
	char input;
	std::cout << "Hello! Please enter an alphabetical character: ";
	std::cin >> input;
	std::string response = (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'o')
		? "Your character is a lowercase vowel!"
		: "Your character is NOT a lowercase vowel.";
	std::cout << response << "\n";
}