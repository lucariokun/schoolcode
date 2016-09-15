#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random() {
	srand(time(NULL));
	int r=rand()%10+1;
	printf ("%d \n", r);
}
int main() {
	int n;
	printf("Quanti numeri casuali? ");
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		random();
		system("PAUSE");
	}
}
