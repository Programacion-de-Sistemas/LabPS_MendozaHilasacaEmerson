#include "chess.h"
#include "figures.h"

void display() {
	char** fig = join(whiteSquare, reverse(whiteSquare));
	char** repHor = repeatH(fig, 4);
	interpreter(repHor);
}	
