#include <iostream>

void parity(int num) {
	std::string parity = (num % 2 == 0) ? "EVEN" : "ODD";
	std::cout << "Number " << num << " is " << parity << "!\n";
}

int main() {
	int a, b, c;
	std::cout << "Please enter a value for number a: ";
	std::cin >> a;
	std::cout << "Please enter a value for number b: ";
	std::cin >> b;
	std::cout << "Please enter a value for number c: ";
	std::cin >> c;
	std::cout << "\n";
	parity(a);
	parity(b);
	parity(c);
}