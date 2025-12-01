#include <stdio.h>

int main(void) {
    int a, b, c;
    int min, max;

    printf("Podaj liczbe a: ");
    scanf("%d", &a);

    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    printf("Podaj liczbe c: ");
    scanf("%d", &c);

    min = max = a;

    if (b > max) max = b;
    if (b < min) min = b;

    if (c > max) max = c;
    if (c < min) min = c;

    printf("Najwieksza liczba: %d\n", max);
    printf("Najmniejsza liczba: %d\n", min);

    return 0;
}
