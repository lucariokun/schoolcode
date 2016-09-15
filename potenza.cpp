#include <iostream>
using namespace std;
int potenza() {
	int x,n;
	long r=1;		
	cout<<"Inserisci la base della potenza: ";
	cin>>x;
	cout<<"Inserisci l'esponente della potenza: ";
	cin>>n;
	for(int i=0;i<n;i++) {
		r=r*x;
	}
	cout<<"Il risultato e': "<<r<<endl;
	}

int main() {
	// Prob metodo migliore
	char s;
	cout<<"Vuoi calcolare una potenza? Y/N: ";
	cin>>s;
	if(s=='Y'||s=='y'||s=='N'||s=='n'){
	}
	else {
	}
	/* Metodo un po' meno cretino
	char s;
	cout<<"Vuoi calcolare una potenza? Y/N: ";
	cin>>s;
	switch(s) {
		case ('Y'):
			potenza();
			main();
			break;		
		case ('y'):
			potenza();
			main();
			break;		
		case ('N'):
			cout<<"---> Uscita <---";
			return 0;
			break;
		case ('n'):
			cout<<"---> Uscita <---";
			return 0;
			break;
		default:
			cout<<"Scelta invalida"<<endl;
			main();		
	}
	/* Metodo cretino 
	char s='Y';
	while (s=='Y'||s=='y') {
		potenza();
		cout<<"Vuoi ripetere?"<<endl<<"Y/N: ";
		cin>>s;
		if (s=='N'||s=='n') {
			cout<<"----Uscita----"<<endl;
			return 0;
		}
	}
	return 0; */
	}
