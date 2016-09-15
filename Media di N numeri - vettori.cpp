#include <stdio.h>

int main() {
	int a;
	float somma;
	printf("Di quanti numeri vuoi fare la media? ");
	scanf("%d", &a);
	int x[a];
	for(int i=0; i<a; i++) {
		printf("Inserisci il %d numero: ", i+1);
		scanf("%d", &x[i]);
		somma=somma+x[i];
	}
	printf("La media dei %d numeri che hai inserito e': %.2f", a, somma/a);
}
