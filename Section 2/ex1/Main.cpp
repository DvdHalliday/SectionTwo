#include <iostream>

int main() {
	std::cout << "Welcome to the game!\nWARNING! This game is extremely gory, bloody, and gross. you need to be at least 18 years old to enter.\nPlease enter your age: ";
	int age;
	std::cin >> age;
	std::string response = (age > 17) ? "Good! You can play the game! But I lied... there is no game :(" : "Toddlers aren't allowed to play it.";
	std::cout << response << std::endl;
}