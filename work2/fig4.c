#include "chess.h"
#include "figures.h"

void display() {
	char** btower = superImpose(rook, reverse(whiteSquare));
	char** whorse = superImpose(knight, whiteSquare);
	char** bbishop = superImpose(bishop, reverse(whiteSquare));
	char** quen = superImpose(queen, whiteSquare);
	char** rey = superImpose(king, reverse(whiteSquare));
	char** wbishop = superImpose(bishop, whiteSquare);
	char** bhorse = superImpose(knight, reverse(whiteSquare));
	char** wtower = superImpose(rook, whiteSquare);
	char** list1 = join(btower, whorse);
	char** list2 = join(list1, bbishop);
	char** list3 = join(list2, quen);
	char** list4 = join(list3, rey);
	char** list5 = join(list4, wbishop);
	char** list6 = join(list5, bhorse);
	char** line = join(list6, wtower);
	interpreter(line);
	free(line);
	
}
