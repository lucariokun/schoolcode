#include <stdio.h>
int main() {
	//Definizione variabili
	int x;
	float mediap=0, mediad=0, np=0, nd=0;
	//Definizione array
	printf("Quanti numeri vuoi inserire? ");
	scanf("%d", &x);
	int s[x];
	printf("Inserisci %d numeri\n", x);
	for(int i=0; i<x; i++) {
		// Acquisizione
		printf("Inserisci il %d numero: ", i+1);
		scanf("%d", &s[i]);
		// Calcolo media
		if(i%2==0) {
			mediap=mediap+s[i];
			np=np+1;
		}
		else {
			mediad=mediad+s[i];
			nd=nd+1;
		}
	}
	// Stampa valori
	printf("La somma dei numeri in posizione pari e' %.2f \nLa somma dei numeri in posizione dispari e' %.2f \nLa media dei numeri in posizione pari e' %.2f \nLa media dei numeri in posizione dispari e' %.2f", mediap, mediad, mediap/np, mediad/nd);
}
