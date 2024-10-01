#include <stdio.h>
#define PI 3.141592653589793 /* (A) Tentukan sintaks pendeklarasian konstanta */

int main() {
    float r, v; /* (B) Tentukan variabel */

    /* === INPUT === */
    printf("Jari-jari bola (dalam cm): "); 
    scanf("%f", &r); /* (C) Tentukan sintaks format input */

    /* === OPERASI HITUNG === */
    v = PI * ((4.0 / 3.0) * r * r * r);

    /* === OUTPUT === */
    printf("Volume bola = %.2f cm^3", v); /* (D) Tentukan format hasil menjadi 2 angka di belakang koma */
    return 0;
}