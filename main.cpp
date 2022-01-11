#include <iostream>
#include "card.h"
#include "deck.h"
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	rand();
	Deck deck;
	deck.printDeck();
	deck.shuffle();
	cout << endl;
	deck.printDeck();
}
