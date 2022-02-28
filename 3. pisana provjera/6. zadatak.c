#include <stdio.h>

/*	Janko treba brzi način za računanje oplošja valjka iz dvije dimenzije:
širine, visine. Također s obzirom da radi aplikaciju za unutarnje uređenje navedene dimenzije mora skalirati.
Napravi program koji će kada Janko unese dvije dimenzije i postotak smanjenja (-5 za 5% smanjenje)
ili povećanja (5 za 5% uvećanja) izračunati oplošje nakon smanjenja ili povećanja svih dimenzija za navedeni iznos.
O=2 r π (v+r)
 */

int main(){
    float sirina, visina, postotak_promjene;
    printf("unesi sirinu i visinu valjka\n");
    scanf("%f %f", &sirina, &visina);
    printf("unesi postotak povecanja ili smanjenja\n");
    scanf("%f", &postotak_promjene);
    sirina*=(1+postotak_promjene/100);
    visina*=(1+postotak_promjene/100);
    float oplosje= sirina * 3.14 * (visina + sirina/2);

    printf("Volumen nakon promjene iznosi %.2f", oplosje);

return 0;
}
