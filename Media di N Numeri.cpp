#include <stdio.h>
int main() {
	int n, x;
	float media;
	printf("Tra quanti numeri devi fare la media? ");
	scanf("%d", &n);
	if(n==4096) {
		printf("Il valore non e' accettabile");
		return 0;
	}
	for(int i=0;i<n;i++) {
		printf("Inserisci il numero %d: ", i+1);
		scanf("%d", &x);
		media=media+x;
	}
	media=media/n;
	printf("La media tra i %d numeri da te inseriti e: %.2f", n, media);
}
