// Berdasarkan problematika dari soal Jurnal No. 3 sebelumnya, Anda diminta untuk memberikan solusi dari 
// gagasan inti diagram alir (flowchart) yang telah Anda kerjakan sebelumnya berupa kode program dari 
// permasalahan Chezta di atas, dengan metode percabangan menggunakan `SWITCH-CASE`!

// *** HINT ***
// 1. R = V ÷ I
// 2. V = I × R
// 3. I = V ÷ R

// === INPUT ===
// >> Kalkulator Hukum Ohm <<
// 1. Mencari RESISTANSI (R)
// 2. Mencari TEGANGAN (V)
// 3. Mencari ARUS (I)
// Pilihan (1/2/3): 2

// Masukkan nilai ARUS: 3.5
// Masukkan nilai RESISTANSI: 8

// === OUTPUT ===
// Nilai TEGANGAN dengan ARUS = 3.5 A dan RESISTANSI = 8 ohm, adalah: 28 V

#include <stdio.h>

int main (){
    float  V, I, R;
    int input;
    puts("==== Kalkulator Hukum ohm");
    puts("1. Mencari RESISTANSI");
    puts("2. Mencari TEGANGAN ");
    puts("3. Mencari ARUS");
    printf("Input : "); scanf("%d", &input);

    switch (input)
    {
    case 1:  printf("Input V: "); scanf("%f", &V);
             printf("Input I: "); scanf("%f", &I);
             R = V/ I;
             printf("Hasil: %.2f", R);
             break;
    
    case 2:  printf("Input R: "); scanf("%f", &R);
             printf("Input I: "); scanf("%f", &I);
             V = I * R;
             printf("Hasil: %.2f", V);
             break;

    case 3:  printf("Input V: "); scanf("%f", &V);
             printf("Input R: "); scanf("%f", &R);
             I = V/ R;
             printf("Hasil: %.2f", I);
             break;
    
    default: puts("Pilhan anda tidak ada pada menu!!");
        break;
    }

    return 0;
}