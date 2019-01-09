#include <stdio.h>
int main(int argv, char** argc){
	int valorUsuario;
	int mascara=1;
	int resultado;
	int ciclo;
	int cont=0;
	printf("Introduzca un número");
	scanf("%d", &valorUsuario);
	for (ciclo=1; ciclo<=16; ciclo++){
		resultado=valorUsuario&mascara;
		if (resultado==1){
			cont++;
		}
		valorUsuario=valorUsuario>>1;
	}
	printf("Bits prendidos:" "%d", cont);
	return 0;
}
