#include <stdio.h>
/*Josip je 1.5 puta stariji od Filipa,
a Filip je 4 godine stariji od Luke.
Ako je Luki N godina, koliko ukupno godina imaju sva trojica?*/

int main(){

    int josip, filip, luka;
    printf("Koliko je luki godina?");
    scanf("%d",&luka);
    filip = luka + 4;
    josip= filip * 1.5;
    printf("ukupno imaju %d godina",luka+josip+filip);

return 0;
}
