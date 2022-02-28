#include <stdio.h>

/*Marko je dvostruko stariji od Luke,
a Filip je 7 godine stariji od Luke.
Ako je Luki N godina, koliko ukupno godina imaju sva trojica?*/

int main(){

    int luka, filip, marko;
    printf("Koliko Luka ima godina? \n");
    scanf("%d",&luka);
    filip=luka+7;
    marko=luka*2;
    printf("Zajedno imaju %d godina",luka+filip+marko);


return 0;
}
