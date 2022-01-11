#include "card.h"
int Card::getScore() {
	if (rank == rank2) return 2;
	if (rank == rank3) return 3;
	if (rank == rank4) return 4;
	if (rank == rank5) return 5;
	if (rank == rank6) return 6;
	if (rank == rank7) return 7;
	if (rank == rank8) return 8;
	if (rank == rank9) return 9;
	if (rank == rank10) return 10;
	if (rank == rankJ) return 10;
	if (rank == rankQ) return 10;
	if (rank == rankK) return 10;
	if (rank == rankA) return 1;
}
std::string Card::getRank() {
	if (rank == rank2) return "2";
	if (rank == rank3) return "3";
	if (rank == rank4) return "4";
	if (rank == rank5) return "5";
	if (rank == rank6) return "6";
	if (rank == rank7) return "7";
	if (rank == rank8) return "8";
	if (rank == rank9) return "9";
	if (rank == rank10) return "10";
	if (rank == rankJ) return "J";
	if (rank == rankQ) return "Q";
	if (rank == rankK) return "K";
	if (rank == rankA) return "A";
}
char Card::getSuit() {
	if (suit == suitDiamonds) return 'D';
	if (suit == suitHearts) return 'H';
	if (suit == suitClubs) return 'C';
	if (suit == suitSpades) return 'S';
}
void Card::printCard() {
	std::cout << getRank() << getSuit() << ' ';
}
