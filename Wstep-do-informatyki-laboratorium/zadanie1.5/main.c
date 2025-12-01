#include <stdio.h>

int main(void) {
    int n;

    printf("Podaj liczbe od 1 do 7: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("poniedzialek\n");
            break;
        case 2:
            printf("wtorek\n");
            break;
        case 3:
            printf("sroda\n");
            break;
        case 4:
            printf("czwartek\n");
            break;
        case 5:
            printf("piatek\n");
            break;
        case 6:
            printf("sobota\n");
            break;
        case 7:
            printf("niedziela\n");
            break;
        default:
            printf("Niepoprawna liczba! Podaj liczbe od 1 do 7.\n");
            break;
    }

    return 0;
}
