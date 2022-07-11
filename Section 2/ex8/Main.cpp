#include <iostream>

enum options{firstLie,secondLie,thirdLie,fourthLie,fact};

int main() {
	int whatever;
	std::cout << "Welcome to your future! Ask a question: ";
	std::cin >> whatever;
	std::cout << "Your answer is: ";
	std::srand(std::time(0));
	int lie = rand() % 5;
	switch (lie) {
	case firstLie:
		std::cout << "Hmmm... perhaps!\n";
		break;
	case secondLie:
		std::cout << "Hmmm... the stars are favouring it!\n";
		break;
	case thirdLie:
		std::cout << "Hmmm... get on it.\n";
		break;
	case fourthLie:
		std::cout << "Hmmm... very unlikely ;c\n";
		break;
	case fact:
		std::cout << "Hmmm... that's never gonna happen. Don't ever ask that to anyone, like ever again!\n";
		break;
	}
}