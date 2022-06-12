#include "chess.h"
#include "figures.h"

void display() {
	char** firstWhite = join(whiteSquad, reverse(whiteSquad));
	char** firstBlack = join(reverse(whiteSquad), whiteSquad);
	char** img = up(firstBlack, firstWhite); //suponiendo uno arriba y otro abajo similar a join
	char** upTabl = repeatH(img, 4);					 
	char** table = repeatV(upTabl, 2);
	interpreter(table);
}
