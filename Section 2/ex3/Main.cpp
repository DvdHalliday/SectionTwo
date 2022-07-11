#include <iostream>

int main() {
	int number;
	std::cout << "Please enter a number: ";
	std::cin >> number;
	std::string response = (number > 0) ? "Your number is positive!" : (number == 0) ? "Your number is zero!" : "Your number is negative!"; //Trying a nested ternary expression
	std::cout << response << "\n";
}