#include <stdio.h>
#include <stdlib.h>

void binario(int n, int arreglo[]) {
	int z,x,rep;
	char value[50];
	arreglo[0] = 0;
	for (x = 0; x < 50; x++) {
		arreglo[x]=n%2;
		n=n/2;
		if(n==0)
			break;
	}
	for(z = x; z >= 0 ;z--) {
		rep = arreglo[z];
		value[z] = (char)rep;
		printf("%d",arreglo[z]);
	}
	
}

int bis(int x, int m){
	return 0;
}
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
	int array[50];
        binario(7, array);
	return 0;
}
