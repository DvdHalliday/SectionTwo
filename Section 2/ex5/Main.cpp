#include <iostream>

std::string coin(int value) {
	return (value % 2 == 0) ? "Tails" : "Heads";
}

int main() {
	std::cout << "Welcome to Flip-a-Coin!\n1 - Heads\n2 - Tails\n\nWhat's your guess ? ";
	int guess, cguess;
	std::srand(std::time(0));
	cguess = rand() % 2;
	std::cin >> guess;
	std::cout << "\nYour guess: " << coin(guess) << "\nActual result : " << coin(cguess) << "\n\n";
	std::string response = (guess == cguess) ? "You win, I mean, it's luck..." : "You lose, LOSER!";
	std::cout << response << "\n";
}