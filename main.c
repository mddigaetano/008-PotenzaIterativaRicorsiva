#include <stdio.h>
#include <stdlib.h>

int potenzaIterativa(int base, int esponente);
int potenzaRicorsiva(int base, int esponente);

int main(int argc, char** argv) {
    int base,esponente;
    int rIterativo, rRicorsivo;
    
    printf("Inserisci la base (intera): ");
    scanf("%d", &base);
    printf("Inserisci l'esponente (intero non ngeativo): ");
    scanf("%d", &esponente);
    
    rIterativo = potenzaIterativa(base, esponente);
    rRicorsivo = potenzaRicorsiva(base, esponente);// correzione funzione
    
    printf("%d^%d = %d (formulazione iterativa)\n", base, esponente, rIterativo);
    printf("%d^%d = %d (formulazione iterativa)\n", base, esponente, rRicorsivo);
    return (EXIT_SUCCESS);
}

int potenzaIterativa(int base, int esponente) {
    int risultato=1;
    
    for(;esponente>0;esponente--)
        risultato*=base;
    
    return risultato;
}
int potenzaRicorsiva(int base, int esponente) {// correzione nome funzione
    int risultato=0;
    
    if(esponente==0)
        return 1;
    else{
        risultato=base*potenzaRicorsiva(base,esponente-1);
        return risultato;
    }
}