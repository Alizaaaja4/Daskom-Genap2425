// Buatkanlah sebuah program yang dapat menentukan apakah suatu bilangan dapat dikategorikan 
// sebagai bilangan GENAP atau GANJIL, menggunakan metode percabangan `IF-ELSE` dalam bahasa C!

// === INPUT ===
// Masukan angka bebas: 19

// === OUTPUT ===
// Angka 19 merupakan bilangan GANJIL

#include <stdio.h>

int main (){
    int nilai;
    printf("Masukan angka bebas: "); scanf("%d", &nilai);

    if (nilai % 2 == 0){
        printf("Angka %d merupakan bilangan genap\n", nilai);
    } else {
        printf("Angka %d merupakan bilangan ganjil\n", nilai);
    }

    return 0;
}