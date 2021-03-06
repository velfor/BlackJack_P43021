#pragma once
#include "player.h"
#include "dealer.h"

class Game {
private:
	Deck deck;
	Player player;
	Dealer dealer;
public:
	void play() {
		//тусуем колоду
		deck.shuffle();
		//ход игрока
		player.play(deck);
		//если игра не закончилась
		if (player.getCanContinue()) {
			//ход дилера
			dealer.play(deck);
			//если игра не закончилась
			if (dealer.getCanContinue()) {
				//выясняем исход игры
				//игрок выиграл
				if (player.getScore() > dealer.getScore()) {
					std::cout << "You win!" << std::endl;
				}
				//дилер выиграл
				else if (dealer.getScore() > player.getScore()) {
					std::cout << "Dealer win!" << std::endl;
				}
				//ничья
				else if (player.getScore() == dealer.getScore()) {
					std::cout << "Draw." << std::endl;
				}
			}
		}
	}
};