#include <stdio.h>
int main() {
	int x[10], min, pos, temp;
	printf("Inserisci dieci numeri.\n");
	for(int i=0; i<10; i++) {
		printf("Inserisci il %d numero: ", i+1);
		scanf("%d", &x[i]);
	}
	for(int i=0; i<10; i++) {
		min=x[i];
		for(int k=i; i<10; i++) {
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
	for(int i=0; i<10; i++) {
		printf("%d ", x[i]);
	}
}
