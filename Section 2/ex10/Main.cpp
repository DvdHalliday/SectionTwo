#include <iostream>

int main() {
	char input;
	std::cout << "Hello! Please enter an alphabetical character: ";
	std::cin >> input;
	std::string response = (input != 'a' && input != 'e' && input != 'i' && input != 'o' && input != 'u')
		? "Your character is indeed NOT a lowercase vowel!!"
		: "Your character IS a lowercase vowel ;c";
	std::cout << response << std::endl;
}