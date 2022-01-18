#pragma once
#include "hand.h"
#include "deck.h"

class Player :public Hand {
public:
	void play(Deck& deck) {
		char choice;
		do {
			addCard(deck.pop());
			std::cout << "Your cards ";
			printHand();
			calculateScore();
			std::cout << "You have " << getScore() << " points" << std::endl;
			if (score == 21) {
				std::cout << " You win!" << std::endl;
				canContinue = false;
				break;
			}
			else if (score > 21) {
				std::cout << " You lose!" << std::endl;
				canContinue = false;
				break;
			}
			std::cout << "Do you want another card? (y/n) ";
			std::cin >> choice;
		} while (choice == 'y' || choice == 'Y');
	}
};
