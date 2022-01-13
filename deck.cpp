#include "deck.h"
Deck::Deck() {
	for (int i = suitDiamonds; i < MAX_SUITS; i++) {
		for (int j = rank2; j < MAX_RANK; j++) {
			Card temp_card(static_cast<CardRank>(j), static_cast<CardSuit>(i));
			deck.push_back(temp_card);
		}
	}
}
void Deck::shuffle() {
	//перетасовывает колоду
	for (int j = 0; j < 5; j++) {
		for (size_t i = 0; i < deck_size; i++) {
			size_t rand = getRandomCardNumber();
			std::swap(deck[i], deck[rand]);
		}
	}
}
void Deck::printDeck() {
	// печать колоды
	for (size_t i = 0; i < deck_size; i++) {
		deck[i].printCard();
	}
}
Card Deck::pop() {
	//сохранили последнюю карту из колоды
	Card temp = deck.back();
	// удалили последнюю карту
	deck.pop_back();
	//возвращаем карту
	return temp;
}