#include <stdio.h>

int main(void) {
    printf("\n--- Zadanie 4 ---\n");
    float a, b, c;
    printf("Podaj dlugosci trzech bokow trojkata: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Blad wczytywania bokow.\n");
        return 1;
    }
    if (a + b > c && a + c > b && b + c > a) {
        printf("Z podanych bokow mozna zbudowac trojkat: ");
        if (a == b && b == c) {
            printf("rownoboczny.\n");
        } else if (a == b || a == c || b == c) {
            printf("rownoramienny.\n");
        } else {
            printf("roznoboczny.\n");
        }
    } else {
        printf("Z podanych bokow nie mozna zbudowac trojkata.\n");
    }
    return 0;
}
