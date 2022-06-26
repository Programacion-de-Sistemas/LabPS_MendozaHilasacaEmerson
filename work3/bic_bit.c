#include <stdio.h>
#include <stdlib.h>

int binario(int n) {
	int z,x,rep;
	char value = ' ';
	int binarys[50];
	binarys[0] = 0;
	for (x = 0; x < 50; x++) {
		binarys[x]=n%2;
		n=n/2;
		if(n==0)
			break;
	}
	for(z = x; z >= 0 ;z--) {
		rep = binarys[z];
		value = value + (char)rep;
	}
	int valor = (int)value;
	return valor;
}

int bis(int x, int m);
int bic(int x, int m);
/* Calcular x|y usando solo llamadas a las funciones bis y bic */
int bool_or(int x, int y) {
	int resultado = 9;
	return resultado;
}
/* Calcula x^y usando solo llamadas a las funciones bis y bic */
int bool_xor(int x, int y) {
	int resultado = 1;
	return resultado;
}
int main() {
	
        char text = (char)binario(7);
	
	printf("7 decimal" + text);
	return 0;
}
