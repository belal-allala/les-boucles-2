#include <stdio.h>
#include <math.h>
int main() {
    int n, i, j, premier;
    printf("entrer un entier positif : ");
    scanf("%d", &n);
    printf("les nombres premiers de 1 à %d sont :\n", n);
    for (i = 2; i <= n; i++) {
        premier = 1;
        for (j = 2; j <= sqrt(i) ; j++) {
            if (i % j == 0) {
                premier = 0;
                break;
            }
        }
        if (premier==1) {
            printf("%d ", i);
        }
    }
    return 0;
}