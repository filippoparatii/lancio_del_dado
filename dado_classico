#include <stdio.h>
#include <time.h>

//effettuare il lancio ripetuto di un dado per un numero di volte stabilito dell'utebte
//quindi calcolare la frequenza delle uscite di ini valoree stamparle
const int MAX=7;

int leggi_controlla();
void inizializza(int *, int);
int lancio(int );
void calcola_frequenza(int *, float *, int, int);
void stampa(int *, float *, int );

int main(){
	
	int numeri[MAX];//vettori paralleli sono due vettori separate ma che a livello logico sono legato. alla posizione x del primo vett c'è qualcosa di collegato alla posizione x del secondo vett
	int n, n_lanci, i;
	float f[MAX];
	
	srand(time(NULL));

	n_lanci=leggi_controlla();
	inizializza(numeri, MAX);
	for(i=0; i<n_lanci; i++){
		n=lancio(6);
		numeri[n]++;
	}
	calcola_frequenza(numeri, f, MAX, n_lanci);
	stampa(numeri, f, MAX);
	
	return 0;
}

int leggi_controlla(){
	
	int input;
	
	printf("Inserisci quanti lanci vuoi effettuare: ");
	do{
		scanf("%d", &input);
	}while(input<=0);
	
	return input;
}

void inizializza(int *v, int dim){
	
	int i;
	
	for(i=0; i<dim; i++)
		v[i]=0;
	
}

int lancio(int max){
	
	return rand()%max+1;
}

void calcola_frequenza(int *v, float *f, int dim, int tot){
	
	int i;
	
	for(i=1; i<dim; i++)
		f[i]=(float)v[i]/tot*1.0;
}

void stampa(int *v, float *f, int dim){
	
	int i;

	for(i=1; i<dim; i++){
		printf("Il numero %d e' uscito per una frequenza di %f.\n", v[i], f[i]);
	}	
}

