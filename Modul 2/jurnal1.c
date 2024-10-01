// Tirta memiliki usaha air minum yang sudah berjalan cukup lama. Usahanya tersebut memberikan kebebasan kepada pelanggan untuk memesan air minum berapapun volumenya, dengan syarat pelanggannya harus membawa wadah/tangki sendiri berbentuk tabung, dan harganya adalah Rp5,000.00 per meter kubik. Namun, Tirta kewalahan untuk menghitung volume wadah/tangki yang dibawa pelanggannya karena cukup banyak jumlahnya.
// Tirta memiliki persediaan air minum sebanyak 100.000 L. Buatkanlah program untuk membantu Tirta menghitung volume air, harga air, dan sisa air yang tersedia ditokonya tersebut!

// ⇒ Persyaratan pembuatan kode program:
// 1. Gunakan `float` atau `double` untuk menghitung volume agar lebih ter-presisikan, dan pastikan hasilnya di-format menjadi 1 angka di belakang koma.
// 2. Gunakan `#define PI 3.14` sebagai nilai π.

// *** HINT ***
// VOLUME = PI × JARI_JARI × JARI_JARI × TINGGI

// === INPUT ===
// Diameter wadah (cm): 20
// Tinggi wadah (cm): 18

// === OUTPUT ===
// Volume air yang dibeli: 5652.0 m^3
// Harga beli air: Rp28260000,00
// Sisa air: 94348.0 m^3

#include <stdio.h>
#include <math.h>

#define PI 3.14
#define TOTAL_WATER 100000.0 // Total air dalam meter kubik
#define PRICE_PER_M3 5000.0  // Harga per meter kubik

int main() {
    float diameter, height, radius, volume, price, sisa_air;

    printf("Program Penghitung Volume Air Tirta\n");
    printf("Diameter wadah (m): ");
    scanf("%f", &diameter);
    printf("Tinggi wadah (m): ");
    scanf("%f", &height);

    // Menghitung jari-jari dari diameter
    radius = diameter / 2;

    // Menghitung volume tabung
    volume = PI * pow(radius, 2) * height;

    // Menghitung harga air
    price = volume * PRICE_PER_M3;

    // Menghitung sisa air
    sisa_air = TOTAL_WATER - volume;

    // Output hasil perhitungan
    printf("\n\n== OUTPUT ==\n");
    printf("Volume air yang dibeli: %.1f m^3\n", volume);
    printf("Harga beli air: Rp%.0f,00\n", price);
    printf("Sisa air: %.1f m^3\n", sisa_air);

    return 0;
}


