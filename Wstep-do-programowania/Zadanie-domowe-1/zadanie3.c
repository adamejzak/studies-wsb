#include <stdio.h>

int main(void) {
    printf("\n--- Zadanie 3 ---\n");
    int temp;
    printf("Podaj temperature (liczba calkowita): ");
    if (scanf("%d", &temp) != 1) {
        printf("Blad wczytywania temperatury.\n");
        return 1;
    }
    if (temp < 0) {
        printf("Bardzo zimno\n");
    } else if (temp >= 0 && temp <= 15) {
        printf("Chlodno\n");
    } else if (temp >= 16 && temp <= 25) {
        printf("Cieplo\n");
    } else {
        printf("Goraco\n");
    }
    return 0;
}
