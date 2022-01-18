#include <ctime>
#include "game.h"
using namespace std;
int main()
{
	srand(time(0));
	rand();
	Game game;
	game.play();
}
