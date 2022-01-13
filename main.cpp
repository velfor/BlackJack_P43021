#include <iostream>
#include <ctime>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"

using namespace std;
int main()
{
	srand(time(0));
	rand();
	Deck deck;
	deck.shuffle();
	deck.printDeck();
	Hand hand;
	hand.addCard(deck.pop());
	hand.printHand();
	hand.calculateScore();
	cout << "You have " << hand.getScore() << " points" << endl;
	Player player;
	player.play(deck);
	
	
}
