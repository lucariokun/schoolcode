#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random() {
	srand(time(NULL));
	int r=rand()%10+1;
	return r;
}
int main() {
	int r=random(), n;
	printf("Indovina un numero tra 1 e 10: ");
	scanf("%d", &n);
	if(n>10 || n<1) {
		printf("Il numero non e' accettabile");
		return 0;
	}
	if (n==r) {
		printf("Hai indovinato! Il numero era %d", r);
		return 0;
	}
	else {
		printf("Sbagliato! Il numero era %d", r);
		return 0;
	}
}
