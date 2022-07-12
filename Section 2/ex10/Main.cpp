#include <iostream>

int main() {
	char input;
	std::cout << "Hello! Please enter an alphabetical character: ";
	std::cin >> input;
	std::string response = (input != 97 && input != 101 && input != 105 && input != 111 && input != 117)
		? "Your character is indeed NOT a lowercase vowel!!"
		: "Your character IS a lowercase vowel ;c";
	std::cout << response << std::endl;
}