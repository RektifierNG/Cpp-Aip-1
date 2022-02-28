#include <stdio.h>

/*Marko je dvostruko stariji od Filipa, 
a Filip je 3 godine stariji od Luke. 
Ako je Luki N godina, koliko ukupno godina imaju sva trojica?*/

int main(){
    int luka, filip, marko;
    printf("Koliko godina ima Luka?\n");
    scanf("%d",&luka);
    filip=luka+3;
    marko=filip*2;
    printf("Zajedno imaju %d godina", luka+filip+marko);

    return 0;
}