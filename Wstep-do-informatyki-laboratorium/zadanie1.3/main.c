#include <stdio.h>

int main(void) {
    float temp;

    printf("Podaj temperature ciala: ");
    scanf("%f", &temp);

    if (temp >= 36.6f && temp <= 37.0f) {
        printf("OK\n");
    } 
    else if (temp >= 37.1f && temp <= 38.0f) {
        printf("stan podgoraczkowy\n");
    } 
    else if (temp >= 38.1f && temp <= 41.0f) {
        printf("goraczka\n");
    } 
    else {
        printf("skonsultuj sie z lekarzem\n");
    }

    return 0;
}
