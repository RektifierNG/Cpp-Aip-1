#include <stdio.h>

/*	Stjepan treba brzi način za računanje volumena kugle iz širine.
Također s obzirom da radi aplikaciju za uređenje parkova navedene dimenzije mora skalirati.
Napravi program koji će kada Stjepan unese širinu i postotak smanjenja (-5 za 5% smanjenje)
ili povećanja (5 za 5% uvećanja) izračunati volumen nakon smanjenja ili povećanja širine za navedeni iznos.

V=4/3 r^3  π

 */

int main(){
    float sirina, postotak_promjene;
    printf("unesi sirinu kugle\n");
    scanf("%f", &sirina);
    printf("unesi postotak povecanja ili smanjenja\n");
    scanf("%f", &postotak_promjene);
    sirina*=(1+postotak_promjene/100);
    float volumen= 4/3 *sirina/2 *sirina/2 *sirina/2 *3.14;

    printf("Volumen nakon promjene iznosi %.2f", volumen);

return 0;
}
