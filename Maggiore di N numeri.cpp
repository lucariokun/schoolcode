#include <stdio.h>
int main() {
	int a;
	printf("Tra quanti numeri devo trovare il maggiore? ");
	scanf("%d", &a);
	int max=0, n[a];
	for(int i=0; i<a; i++) {
		printf("Inserisci il %d numero: ", i+1);
		scanf("%d", &n[i]);
	}
	max=n[0];
	for(int i=1; i<a; i++) {
		if(n[i]>max) {
			max=n[i];
		}
	}
	printf("Il piu' grande dei %d numeri che hai inserito e': %d", a, max);
}
