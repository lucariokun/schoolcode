#include <stdio.h>
main() {
	int n, r=0, i;
	printf("Inserisci un numero: ");
	scanf("%d", &n);
	if(n%2==0) {
		for(i=0;i<=n;i++) {
			if(i%2==0) {
				r=r+i;
			}
		}
	}
	else {
		for(i=0;i<=n;i++) {
			if(i%2!=0) {
				r=r+i;
			}
		}
	}
	printf("La somma dei numeri pari/dispari e': %d", r);
	return 0;
	
}
