#include "chess.h"
#include "figures.h"

void display() {
	char** img = join(reverse(whiteSquad), whiteSquad);
	char** repImg = repeatH(img, 4);
	interpreter(repImg);
}
