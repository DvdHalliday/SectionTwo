#include <iostream>

std::string getNameofCoin(int value) {
	return (value % 2 == 0) ? "Tails" : "Heads";
}

int main() {
	std::cout << "Welcome to Flip-a-Coin!\n1 - Heads\n2 - Tails\n\nWhat's your guess ? ";
	int guess, computerGuess;
	std::srand(std::time(0));
	computerGuess = (rand() % 2)+1;
	std::cin >> guess;
	std::cout << "\nYour guess: " << getNameofCoin(guess) << "\nActual result : " << getNameofCoin(computerGuess) << "\n\n";
	std::string response = (guess == computerGuess) ? "You win, I mean, it's luck..." : "You lose, LOSER!";
	std::cout << response << std::endl;
}