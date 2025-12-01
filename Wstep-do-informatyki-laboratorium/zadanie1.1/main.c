#include <stdio.h>

int main(void) {
    int a, b;

    printf("Podaj bok a: ");
    scanf("%d", &a);

    printf("Podaj bok b: ");
    scanf("%d", &b);

    int pole = a * b;
    int obwod = 2 * (a + b);

    printf("Pole: %d\n", pole);
    printf("Obwod: %d\n", obwod);

    return 0;
}
