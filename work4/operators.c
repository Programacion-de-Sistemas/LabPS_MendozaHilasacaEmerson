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
	  return 1 << 31; //cambia el bit '1' para obtener 0x80000000
}
//2
///*
// * isTmax - returns 1 if x is the maximum, two's complement number,
//  *     and 0 otherwise 
//   *   Legal ops: ! ~ & ^ | +
//    *   Max ops: 10
//     *   Rating: 1
int isTmax(int x) {
	x = ~x;
        return x + 1;
}
/* 
 *  * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *    *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *     *   Legal ops: ! ~ & ^ | + << >>
 *      *   Max ops: 12
 *       *   Rating: 2
 *        */
int allOddBits(int x) {
	  
	  return 2;
}

/* 
 *  * negate - return -x 
 *   *   Example: negate(1) = -1.
 *    *   Legal ops: ! ~ & ^ | + << >>
 *     *   Max ops: 5
 *      *   Rating: 2
 *       */
int negate(int x) {
	  return ~x;
}
//3
///* 
// * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
//  *   Example: isAsciiDigit(0x35) = 1.
//   *            isAsciiDigit(0x3a) = 0.
//    *            isAsciiDigit(0x05) = 0.
//     *   Legal ops: ! ~ & ^ | + << >>
//      *   Max ops: 15
//       *   Rating: 3
int isAsciiDigit(int x) {
	int sign = 1 << 31;
        int upperBound = ~(sign | 0x39); /*si resulta > 0x39 es negativo*/
	int lowerBound = ~0x30;/*cuando es < 0x30 resulta negativo*/

	/*ahora se agrega x y verifica el bit de signo */
	upperBound = sign & (upperBound+x) >> 31;
	lowerBound = sign & (lowerBound+1+x) >> 31; 
	/*si cualquiera de los resultados es negativo, no está en el rango deseado*/
	return !(upperBound | lowerBound);
                    
}
/* 
 *  * conditional - same as x ? y : z 
 *   *   Example: conditional(2,4,5) = 4
 *    *   Legal ops: ! ~ & ^ | + << >>
 *     *   Max ops: 16
 *      *   Rating: 3
 *       */
int conditional(int x, int y, int z) {
	 x = !!x; /*pone a x en forma de 1 o 0*/
	 x = ~x+1; /*x ahora es todo 1 o todo 0*/

	 return (x & y) | (~x & z); 
}
/* 
 *  * isLessOrEqual - if x <= y  then return 1, else return 0 
 *   *   Example: isLessOrEqual(4,5) = 1.
 *    *   Legal ops: ! ~ & ^ | + << >>
 *     *   Max ops: 24
 *      *   Rating: 3
 *       */
int isLessOrEqual(int x, int y) {
	int negX = ~x+1;
	int addY = negX + y; /*negativo si x > y*/
	int checkSign = addY >> 31 & 1; /*cambia el bit de signo a la derecha*/

	/*lo anterior no funcionará para valores que superen los límites de ints
	*     el siguiente código comprueba valores muy grandes/pequeños*/
	int leftBit = 1 << 31;
	int xLeft = leftBit & x;
	int yLeft = leftBit & y;
	int xOrd = xLeft ^ yLeft;
	xOrd = (xOrd >> 31) & 1;
	return (xOrd & (xLeft>>31)) | (!checkSign & !xOrd);
}
//4
///* 
// * logicalNeg - implement the ! operator, using all of 
//  *              the legal operators except !
//   *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
//    *   Legal ops: ~ & ^ | + << >>
//     *   Max ops: 12
//      *   Rating: 4 
//       
int logicalNeg(int x) {   
	x = x & (~x+1); /*en caso x sea negativo*/
	x = ~x + 1; /*el bit de signo es solo 0 si x era 0*/

	return (~(x >> 31)) & 1; /*Vuelve lo opuesto al bit de signo*/
}

int main() {
	int value = bitXor(7, 8);

	int val2 = 6;
	val2 = tmin();
	
	int val3 = isTmax(10);
	int val5 = negate(1);
	int val6 = isAsciiDigit(0x3b);
        int val7 = conditional(2,4,5);
	int val8 = isLessOrEqual(3,5);
	int val9 = logicalNeg(4);
	printf("%d", val9);
	return 0;
}
