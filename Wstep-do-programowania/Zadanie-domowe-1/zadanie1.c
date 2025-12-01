#include <stdio.h>

int main(void) {
    printf("--- Zadanie 1 ---\n");
    char miasto[100];
    int populacja;
    float powierzchnia;

    printf("Podaj nazwe miasta: ");
    scanf("%99s", miasto);

    printf("Podaj liczbe mieszkancow: ");
    if (scanf("%d", &populacja) != 1) {
        printf("Blad wczytywania liczby mieszkancow.\n");
        return 1;
    }

    printf("Podaj powierzchnie miasta (km2): ");
    if (scanf("%f", &powierzchnia) != 1) {
        printf("Blad wczytywania powierzchni.\n");
        return 1;
    }

    printf("Miasto %s ma %d mieszkancow i zajmuje %.2f km2.\n", miasto, populacja, powierzchnia);
    return 0;
}
