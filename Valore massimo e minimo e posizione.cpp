#include <stdio.h>
int main() {
	//Definizione variabili
	int x, max, min, posmax=0, posmin=0;
	//Definizione vettore
	printf("Quanti numeri vuoi inserire? ");
	scanf("%d", &x);
	int v[x];
	//Acquisizione dati
	for(int i=0; i<x; i++) {
		printf("Inserisci il %d numero: ", i+1);
		scanf("%d", &v[i]);
	}
	//Acquisizione numero e posizione massimo e minimo
	max=v[0];
	min=v[0];
	
	for(int i=0; i<x; i++) {
		//Acquisizione numero e posizione massimo
		if(v[i]>max) {
			max=v[i];
			posmax=i;
		}
		//Acquisizione numero e posizione minimo
		if(v[i]<min) {
			min=v[i];
			posmin=i;
		}
	}
	//Stampa valori
	printf("Il numero massimo e': %d\nIl numero minimo e': %d\nLa posizione del numero massimo e': %d (%d nel vettore)\nLa posizione del numero minimo e': %d (%d nel vettore)", max, min, posmax+1, posmax, posmin+1, posmin);
}
