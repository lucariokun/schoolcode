#include <stdio.h>
#include <stdlib.h>

int main() {
	int x[5];
	float media;
	for(int i=0; i<5; i++) {
		printf("Inserisci il %d numero: ", i+1);
		scanf("%d", &x[i]);
	}
	for(int i=0; i<5; i++) {
		media=media+x[i];
	}
	printf("La media dei 5 numeri che hai inserito e': %.2f", media/5);
}
