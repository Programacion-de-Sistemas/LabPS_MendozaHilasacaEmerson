#include <stdio.h>

 //bitXor - x^y using only ~ and &
 //   Example: bitXor(4, 5) = 1
 //    *   Legal ops: ~ &
 //    *   Max ops: 14
 //     *   Rating: 1
 //     
int bitXor(int x, int y) {	
	return (~x & y) + (x & ~y);
}

/* 
 *  * tmin - return minimum two's complement integer 
 *   *   Legal ops: ! ~ & ^ | + << >>
 *    *   Max ops: 4
 *     *   Rating: 1
 *      */
int tmin(void) {
	  return ~tmin();
}

int main() {
	int value = bitXor(7, 8);

	int val2 = 6;
	val2 = tmin();

	printf("%d", val2);
	return 0;
}
