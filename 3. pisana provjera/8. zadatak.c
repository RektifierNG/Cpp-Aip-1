#include <stdio.h>

/*		Stjepan treba brzi način za računanje oplošja kugle iz širine.
Također s obzirom da radi aplikaciju za uređenje parkova navedene dimenzije mora skalirati.
Napravi program koji će kada Stjepan unese širinu i postotak smanjenja (-5 za 5% smanjenje)
ili povećanja (5 za 5% uvećanja) izračunati oplošje nakon smanjenja ili povećanja širine za navedeni iznos.
O=4r^2  π


 */

int main(){
    float sirina, postotak_promjene;
    printf("unesi sirinu kugle\n");
    scanf("%f", &sirina);
    printf("unesi postotak povecanja ili smanjenja\n");
    scanf("%f", &postotak_promjene);
    sirina*=(1+postotak_promjene/100);
    float oplosje= 4 *sirina/2 *sirina/2 *3.14;

    printf("Oplosje nakon promjene iznosi %.2f", oplosje);

return 0;
}
