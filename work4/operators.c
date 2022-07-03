#include <stdio.h>

 //bitXor - x^y using only ~ and &
 //   Example: bitXor(4, 5) = 1
 //    *   Legal ops: ~ &
 //    *   Max ops: 14
 //     *   Rating: 1
 //     
int bitXor(int x, int y) {
	if(x != y)
		return 1;	
	return 0;
}

int main() {
	int value = bitXor(4, 5);
	printf("%d", value);
	return 0;
}
