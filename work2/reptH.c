#include "chess.h"
#include "figures.h"

void display() {
	char** fig = whiteSquare + reverse(whiteSquare);
	char** repHor = repeatH(fig, 8);
	interpreter(repHor);
}	
