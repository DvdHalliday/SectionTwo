#include <iostream>

int getAwardedPointsFromAnswer(bool isCorrectAnswer, bool actualAnswer) {
	std::string response = (isCorrectAnswer == actualAnswer) ? "CORRECT! Looks like you have common sense." : "WRONG! How could you miss that??";
	std::cout << response << "\n";
	return (isCorrectAnswer == actualAnswer) ? 1 : 0;
}

int main() {
	int grade = 0;
	std::cout << "Welcome to your quiz!\n0 - False\n1 - True\n\nQuestion 1: Are avocados fruits ? ";
	bool firstAnswer, secondAnswer, thirdAnswer;
	std::cin >> firstAnswer;
	grade += getAwardedPointsFromAnswer(firstAnswer, true);
	std::cout << "Question 2: Is the sky blue? ";
	std::cin >> secondAnswer;
	grade += getAwardedPointsFromAnswer(secondAnswer, true);
	std::cout << "Question 3: Is Teravision the Best.Team.Ever? ";
	std::cin >> thirdAnswer;
	grade += getAwardedPointsFromAnswer(thirdAnswer, true);
	std::cout << "You got " << grade << "/3 correct answers! Your final grade is: " << grade*5 / 3.0f << "\n";
}