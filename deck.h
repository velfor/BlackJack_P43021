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
	Deck() {
		for (int i = suitDiamonds; i < MAX_SUITS; i++) {
			for (int j = rank2; j < MAX_RANK; j++) {
				Card temp_card(static_cast<CardRank>(j), static_cast<CardSuit>(i));
				deck.push_back(temp_card);
			}
		}
	}
	void shuffle() {
		//перетасовывает колоду
		for (int j = 0; j < 5; j++) {
			for (size_t i = 0; i < deck_size; i++) {
				size_t rand = getRandomCardNumber();
				std::swap(deck[i], deck[rand]);
			}
		}
	}
	void printDeck() {
		// печать колоды
		for (size_t i = 0; i < deck_size; i++) {
			deck[i].printCard();
		}
	}
};
