#include <stdio.h>
int main() {
	//Definizione variabili
	int x;
	float mediap=0, mediad=0, np=0, nd=0;
	//Definizione array
	printf("Quanti numeri vuoi inserire?\n");
	scanf("%d", &x);
	
	int s[x];
	
	printf("Vuoi Inserisci %d numeri\n", x);
	
	for(int i=0; i<x; i=i+2) {
		// Acquisizione
		printf("Inserisci il %d numero: ", i+1);
		scanf("%d", &s[i]);
		printf("Inserisci il %d numero: ", i+2);
		scanf("%d", &s[i+1]);
		
		// Calcolo media
		mediap=mediap+s[i];
		mediad=mediad+s[i+1];
	}
	// Stampa valori
	printf("La somma dei numeri in posizione pari e' %.2f \nLa somma dei numeri in posizione dispari e' %.2f \nLa media dei numeri in posizione pari e' %.2f \nLa media dei numeri in posizione dispari e' %.2f", mediap, mediad, mediap/np, mediad/nd);
}
