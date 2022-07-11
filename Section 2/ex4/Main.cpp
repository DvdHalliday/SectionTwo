#include <iostream>

int grader(bool test) {//If the answer to the question is 0, add a ! before the bool when calling this function
	std::string response = (test) ? "CORRECT! Looks like you have common sense." : "WRONG! How could you miss that??";
	std::cout << response << "\n";
	return (test) ? 1 : 0;
}

int main() {
	int grade = 0;
	std::cout << "Welcome to your quiz!\n0 - False\n1 - True\n\nQuestion 1: Are avocados fruits ? ";
	bool r1, r2, r3;
	std::cin >> r1;
	grade += grader(r1);
	std::cout << "Question 2: Is the sky blue? ";
	std::cin >> r2;
	grade += grader(r2);
	std::cout << "Question 3: Is Teravision the Best.Team.Ever? ";
	std::cin >> r3;
	grade += grader(r2);
	std::cout << "You got" << grade << "/3 correct answers! Your final grade is: " << grade*5 / 3.0f << "\n";
}