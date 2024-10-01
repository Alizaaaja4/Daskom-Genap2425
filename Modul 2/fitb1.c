#include <stdio.h> /* (A) Tentukan sintaks dan library */

int main() {
    int angka1, angka2, angka3, hasil; /* (B) Tentukan tipe data yang sesuai */

    /* === INPUT === */
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);
    printf("Masukkan angka ketiga: ");
    scanf("%d", &angka3);

    /* === OPERASI HITUNG === */
    hasil = angka1 + angka2 - angka3;

    /* === OUTPUT === */
    printf("Hasil operasi hitung dari angka-angka tersebut adalah %d\n", hasil); /* (C) Tentukan variabel */
    return 0;
}