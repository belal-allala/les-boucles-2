#include <stdio.h>
#include <math.h>

int main(){
    int  ligne, etoile, i, j, k;

    printf("entrer le nombre de lignes : ");
    scanf("%d", &ligne);

    etoile = 1;
    for (i = 1; i <= ligne; i++){
        for (j = ligne - i; j > 0; j--) {
            printf(" ");
        }
        for (j = 1; j <= etoile; j++) {
            printf("*");
        }
        printf("\n");
        premier:
        etoile+=2;
        for (int i = 2; i <= sqrt(etoile); i++) {
            if (etoile % i == 0) {
                goto premier;
            }
        }
    }
    return 0;
}