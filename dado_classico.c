#include <stdio.h>
#include <time.h>

void main(){
    
    int numero; 
    int volte;
    
    srand(time(NULL));  
    //lanciamo il dado finchè l'utente digita s
    
    do{
        numero= rand()%6+1;
        printf("dado: %d\n", numero);
        printf("Vuoi un altro lancio?");
        scanf("%d", &volte);
    }
    while(volte==1);
    
    return 0;



    
     
    
}

