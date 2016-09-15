#include <stdio.h>

int main() {
	
int r=1;         //Risultato della potenza
int n=0;         //n esponente x è base 
int x=0;
    printf ("Programma che calcola la potenza\n");
    printf ("Inserisci la base\n");
	scanf("%d",&x);
	printf("Inserisci l'esponente\n");
	scanf("%d",&n);
int i;
    for(i=0;i<n;i++)	
{
 	 r=r*x;
}

printf("La potenza vale %d\n",r);
	 
	
	
	
	
return 0;
}
