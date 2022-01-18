#pragma once
#include <vector>
#include <iostream>
#include "card.h"

class Hand {
protected:
	std::vector<Card> hand;
	int score;
	bool canContinue;
public:
	Hand() :score{ 0 }, canContinue{ true }
	{}
	void addCard(Card card) {	hand.push_back(card); }
	void printHand() {
		size_t size = hand.size();
		for (int i = 0; i < size; i++) {
			hand[i].printCard();
		}
		std::cout << std::endl;
	}
	void calculateScore() {
		score = 0;
		size_t size = hand.size();
		for (int i = 0; i < size; i++) {
			if (hand[i].getRank() == "A") {
				score += hand[i].getScore() + 10;
				if (score > 21) score -= 10;
			}
			else score += hand[i].getScore();
		}
	}
	int getScore() { return score; }
	bool getCanContinue(){ return canContinue; }
};
