#include <stdio.h>

int main(void) {
    int answer;

    printf("Ile wynosi 2 + 2? ");
    scanf("%d", &answer);

    if (answer == 4) {
        printf("Brawo!\n");
    } else {
        printf("Zla odpowiedz!\n");
    }

    return 0;
}
