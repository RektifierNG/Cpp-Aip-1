#include <stdio.h>

/*Filip ide na ljetovanje i želi saznati koliko èokoladica na sniženju u mjestu gdje
ljetuje mora kupiti kako bi efektivno pokrio svoje putovanje.
Korisnik treba unijeti cijenu èokoladica bez popusta,
postotak popusta i cijenu ljetovanja. Program treba ispisati koliko èokoladica treba kupiti.*/

int main(){

    int cijena_cokoladica, postotak_popusta, cijena_ljetovanja;
    printf("Unesite cijenu cokoladica bez popusta, postotak popusta i cijenu ljetovanja");
    scanf("%d %d %d", &cijena_cokoladica, &postotak_popusta, &cijena_ljetovanja);

    float popust_cokoladica=cijena_cokoladica*postotak_popusta/100;
    int koliko_cokoladica=ceil((float)cijena_ljetovanja/popust_cokoladica);
    printf("treba kupiti barem %d cokoladica", koliko_cokoladica);

return 0;
}
