#pragma once
#include <iostream>
#include "card.h"
#include <vector>
class Deck {
private:
	static const int deck_size = 52;
	std::vector<Card> deck;
	size_t getRandomCardNumber() { return rand() % deck_size; }
public:
	Deck();
	void shuffle();
	void printDeck();
	Card pop();
};
