#include <stdio.h>

int main(void) {
    float netto, vat_procent;

    printf("Podaj cene netto (zl): ");
    scanf("%f", &netto);

    printf("Podaj stawke VAT (%%): ");
    scanf("%f", &vat_procent);

    float kwota_vat = netto * vat_procent / 100.0f;
    float brutto = netto + kwota_vat;

    printf("VAT = %.2f zl\n", kwota_vat);
    printf("Cena brutto = %.2f zl\n", brutto);

    return 0;
}
