#include <stdio.h>
int main() {
	int x[10], o[10], max;
	printf("Inserisci dieci numeri.\n");
	for(int i=0; i<10; i++) {
		printf("Inserisci il %d numero: ", i+1);
		scanf("%d", &x[i]);
	}
	for(int i=10; i>0; i--) {
		max=x[0];
		for(int j=1; j<10; j++) {
			if(x[j]>max) {
				max=x[j];
			}
		}
		o[i-1]=max;
		for(int j=0; j<10; j++) {
			if(max==x[j]) {
				x[j]=0;
			}
		}
	}
	printf("I numeri in ordine sono: ");
	for(int i=0; i<10; i++) {
		printf("%d ", o[i]);
	}
}
