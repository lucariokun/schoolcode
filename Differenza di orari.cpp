#include <stdio.h>
#include <math.h>
int main() {
	int h, h1, m, m1, s, s1, o, o1;
	float d; //ore, ore1, minuti, minuti1, secondi, secondi1, differenza, orario, orario1
	printf("Inserire in sequenza le ore, i minuti e i secondi del primo orario. \nh: ");
	scanf("%d", &h);
	printf("m: ");
	scanf("%d", &m);
	printf("s: ");
	scanf("%d", &s);
	printf("Inserire in sequenza le ore, i minuti e i secondi del secondo orario. \nh: ");
	scanf("%d", &h1);
	printf("m: ");
	scanf("%d", &m1);
	printf("s: ");
	scanf("%d", &s1);
	o=h*3600+m*60+s;
	o1=h1*3600+m1*60+s1;
	d=o-o1;
	d=abs(d);
	printf("La differenza tra le %d:%d:%d e le %d:%d:%d e' di %.0f secondi.", h, m, s, h1, m1, s1, d);
	}
