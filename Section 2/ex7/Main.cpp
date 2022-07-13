#include <iostream>

std::string chooser(int weapon) {
	return (weapon == 1) ? "Rock" : (weapon == 2) ? "Paper" : "Scissors";
}

int main() {
	std::cout << "Welcome to Rock, Paper, Scissors!\n\n1 - Rock\n2 - Paper\n3 - Scissors\nChoose your weapon: ";
	int choice, weapon;
	std::srand(std::time(0));
	weapon = (rand() % 3)+1;
	std::cin >> choice;
	std::cout << "\nYour choice: " << chooser(choice);
	std::cout << "\nComputer's choice: " << chooser(weapon);
	std::cout << "\n\n";
	if (choice == weapon) std::cout << "It's a draw!\n";
	else if (choice == 1 && weapon == 3) std::cout << "You win... big deal!\n";
	else if (choice > weapon) std::cout << "You win... big deal!\n";
	else std::cout << "You lose, HA, LOSER!\n";
}