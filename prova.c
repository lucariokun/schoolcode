#include <stdio.h>
int main() {
	int x[10], min, pos, temp;
	int i,k;
	printf("Inserisci dieci numeri.\n");
	for( i=0; i<10; i++) {
		printf("Inserisci il %d numero: ", i+1);
		scanf("%d", &x[i]);
		
	}
	
	
	printf("I numeri in sequenza sono: ");
	for(i=0; i<10; i++) {
		printf("%d ", x[i]);
	}
	
	for( i=0; i<10; i++) {
		min=x[i];
		for(k=i; k<10; k++) {
			if(x[k]<min) {
				min=x[k];
				pos=k;
			}
		}
		temp=x[i];
		x[i]=min;
		x[pos]=temp;
	}
	printf("I numeri in sequenza sono: ");
	for(i=0; i<10; i++) {
		printf("%d ", x[i]);
	}
}
