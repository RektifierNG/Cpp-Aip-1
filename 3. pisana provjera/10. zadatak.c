#include <stdio.h>

/*	Branko treba brzi način za računanje volumena stošca iz dvije dimenzije:
širine osnovice, visine. Također s obzirom da radi aplikaciju za unutarnje uređenje navedene dimenzije mora skalirati.
Napravi program koji će kada Branko unese dvije dimenzije i postotak smanjenja (-5 za 5% smanjenje) ili povećanja (5 za 5% uvećanja)
izračunati volumen nakon smanjenja ili povećanja svih dimenzija za navedeni iznos.
O=r π (s+r)
s=√(r^2+h^2 )


 */

int main(){
    float sirina, visina, postotak_promjene;
    printf("unesi sirinu osnovice i visinu stosca\n");
    scanf("%f %f", &sirina, &visina);
    printf("unesi postotak povecanja ili smanjenja\n");
    scanf("%f", &postotak_promjene);
    sirina*=(1+postotak_promjene/100);
    visina*=(1+postotak_promjene/100);
    float s= sqrt(sirina/2*sirina/2+visina*visina);
    float oplosje= sirina/2 *(sirina/2+visina) *3.14;

    printf("Oplosje nakon promjene iznosi %.2f", oplosje);

return 0;
}
