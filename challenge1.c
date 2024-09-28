#include <stdio.h>

int main() {
    int nombre, i;
    printf("entrer un nombre : ");
    scanf("%d", &nombre);
    printf("table de multiplication de %d en ordre decroissant :\n", nombre);
    for (i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }
    return 0;
}