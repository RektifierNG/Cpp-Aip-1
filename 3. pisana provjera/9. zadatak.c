#include <stdio.h>

/*Branko treba brzi način za računanje volumena stošca iz dvije dimenzije:
širine osnovice, visine. Također s obzirom da radi aplikaciju za unutarnje uređenje navedene
dimenzije mora skalirati. Napravi program koji će kada Branko unese dvije dimenzije i postotak smanjenja
(-5 za 5% smanjenje) ili povećanja (5 za 5% uvećanja) izračunati volumen nakon smanjenja
ili povećanja svih dimenzija za navedeni iznos.

V=1/3  r^2  π h

 */

int main(){
    float sirina, visina, postotak_promjene;
    printf("unesi sirinu osnovice i visinu stosca\n");
    scanf("%f", &sirina);
    printf("unesi postotak povecanja ili smanjenja\n");
    scanf("%f", &postotak_promjene);
    sirina*=(1+postotak_promjene/100);
    visina*=(1+postotak_promjene/100);
    float volumen= 1/3 *sirina/2 *sirina/2 *3.14* visina;

    printf("Oplosje nakon promjene iznosi %.2f", volumen);

return 0;
}
