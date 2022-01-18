#pragma once
#include "hand.h"
#include "deck.h"

class Dealer :public Hand {
public:
	void play(Deck& deck) {
		do {
			addCard(deck.pop());
			std::cout << "Dealer cards ";
			printHand();
			calculateScore();
			std::cout << "Dealer have " << getScore() << " points" << std::endl;
			if (score == 21) {
				std::cout << " Dealer win!" << std::endl;
				canContinue = false;
				break;
			}
			else if (score > 21) {
				std::cout << " Dealer lose!" << std::endl;
				canContinue = false;
				break;
			}
		} while (score < 17);
	}
};
