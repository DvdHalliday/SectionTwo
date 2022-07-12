#include <iostream>

int main() {
	int number;
	std::cout << "Please enter a number: ";
	std::cin >> number;
	if (number > 0) std::cout << "Your number is positive!";
	else if (number == 0) std::cout << "Your number is zero!";
	else std::cout << "Your number is negative!";
	std::cout<< std::endl;
}