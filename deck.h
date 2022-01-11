#pragma once
#include <iostream>
#include "card.h"
#include <vector>

class Deck {
private:
	std::vector<Card> deck;
public:
	Deck() {
		for (int i = suitDiamonds; i < MAX_SUITS; i++) {
			for (int j = rank2; j < MAX_RANK; j++) {
				Card temp_card(CardRank(j),CardSuit(i));
				deck.push_back(temp_card);
			}
		}
	}
	void shuffle() {
		//перетасовывает колоду
	}
	void printDeck() {
		// печать колоды
	}
};
