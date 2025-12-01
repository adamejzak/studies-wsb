#include <stdio.h>

int main(void) {
    printf("\n--- Zadanie 2 ---\n");
    int l1, l2, l3;
    printf("Podaj trzy liczby calkowite (oddzielone spacjami): ");
    if (scanf("%d %d %d", &l1, &l2, &l3) != 3) {
        printf("Blad wczytywania liczb.\n");
        return 1;
    }
    int suma = l1 + l2 + l3;
    float srednia = suma / 3.0f;
    int max = l1;
    if (l2 > max) max = l2;
    if (l3 > max) max = l3;
    int min = l1;
    if (l2 < min) min = l2;
    if (l3 < min) min = l3;
    printf("Suma: %d\n", suma);
    printf("Srednia: %.2f\n", srednia);
    printf("Najwieksza wartosc: %d\n", max);
    printf("Najmniejsza wartosc: %d\n", min);
    return 0;
}
