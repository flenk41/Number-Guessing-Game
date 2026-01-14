#include<iostream>
#include<random>

void TrueNum(int Try, int ComputerNumber) {
	int playerNum;
	for (int i = 0; i <= Try; i++) {
		std::cout << "Enter a number: ";
		std::cin >> playerNum;
		if (playerNum == ComputerNumber) {
			std::cout << "YOU WIN THIS GAME" << std::endl
				<< "Remaining number of attempts: " << Try << std::endl;
			break;
		}
		else if (playerNum != ComputerNumber) {
			if (playerNum > ComputerNumber) {
				std::cout << "The number of computers is greater" << std::endl;
			}
			else {
				std::cout << "The number of computers is less" << std::endl;
			}
		}
		Try--;
	}
}

int main() {
	std::cout << " W E L C O M T H I S G A M E" << std::endl;
	int ComNumber = std::rand() % 100;
	int PlayerChance;
	int Try; 
	std::cout << "Choise your chance" << std::endl
		<< "1.Easy (10 chances)" << std::endl
		<< "2.Medium (5 chances)" << std::endl
		<< "3.Hard (3 chances)" << std::endl
		<< "Enter your choice: ";
	std::cin >> PlayerChance;
	switch (PlayerChance) {
		case 1: Try = 10; break;
		case 2: Try = 5; break;
		case 3: Try = 3; break;
	}
	TrueNum(Try, ComNumber);
}