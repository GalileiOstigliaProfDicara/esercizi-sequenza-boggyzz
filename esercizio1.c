#include <stdio.h>

int main() {

float prezzo_pieno , prezzo_percentuale , sconto_valore , prezzo_scontato;

printf("inserisci il prezzo pieno: ");
scanf("%f" , &prezzo_pieno);
 
printf("inserisci il prezzo scontato: ");
scanf("%f" , &prezzo_scontato);

sconto_valore = prezzo_pieno * prezzo_percentuale / 100;
 prezzo_scontato = prezzo_pieno - sconto_valore;

 printf("Sconto: %.2f euro\n", sconto_valore);
printf("Prezzo scontato: %.2f euro\n", prezzo_scontato);

return 0;
}