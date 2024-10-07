#include <stdio.h>

int main() {
    int angka;

    /* === INPUT === */
    printf("Masukkan angka bebas: ");
    scanf("%d", &angka); /* (A) Tentukan format input */

    /* === CONDITIONAL-FLOW && OUTPUT === */
    if ((angka % 3) == 0 && (angka % 5) == 0) { /* (B) Tentukan operator boolean */
        printf("Angka %d merupakan angka kelipatan TIGA dan LIMA", angka);
    } else if ((angka % 3) == 0) {
        printf("Angka %d merupakan angka kelipatan TIGA", angka);
    } else if ((angka % 5) == 0) { /* (C) Tentukan sintaks percabangan */
        printf("Angka %d merupakan angka kelipatan lima", angka);
    } else { // (D) Tentukan sintaks percabangan */
        printf("Angka %d BUKAN merupakan angka kelipatan TIGA atau LIMA", angka);
    }
    
    return 0;
}