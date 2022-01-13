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
		} while (score < 17);
	}
};
