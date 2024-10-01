// Tirta memiliki usaha air minum yang sudah berjalan cukup lama. Usahanya tersebut memberikan kebebasan kepada pelanggan untuk memesan air minum berapapun volumenya, dengan syarat pelanggannya harus membawa wadah/tangki sendiri berbentuk tabung, dan harganya adalah Rp5,000.00 per meter kubik. Namun, Tirta kewalahan untuk menghitung volume wadah/tangki yang dibawa pelanggannya karena cukup banyak jumlahnya.
// Suatu hari, Tirta ingin mengembangkan usahanya menjadi lebih teratur. Oleh karena itu, Tirta ingin membuat program struk otomatis yang dapat menyertakan data nama, alamat, nomor telepon, dan tanggal beli setiap ada proses pembelian dilakukan.
// Bantulah Tirta untuk membuat program tersebut dalam bahasa C!

// *** HINT ***
// 1. Pastikan nilai π = 3.14
// 2. Gunakan rumus VOLUME TABUNG = PI × JARI JARI × JARI JARI × TINGGI

// === INPUT ===
// Nama: Fauzan
// Alamat: Bekasi
// Nomor telepon: 081234567890
// Diameter wadah (m): 20
// Tinggi wadah (m): 18
// Tanggal pembelian: 28 November 2024

// === OUTPUT ===
// Nama: Fauzan
// Alamat: Bekasi
// Nomor telepon: 081234567890
// Volume air yang dibeli: 5652.0 m^3
// Harga: Rp28260000,00
// Tanggal pelunasan: 28 November 2024

#include <stdio.h>
#include <math.h>
#define PI 3.14
#define PRICE_PER_M3 5000.0  // Harga per meter kubik

int main (){
    float volume, d, t, harga, radius;
    char nama[20], alamat[20], nomor[20], tgl[20];

    printf("== Jurnal 2 ==\n");
    printf("Input nama: "); gets(nama);
    printf("Input alamat: "); gets(alamat);
    printf("Input nomor telepon: "); gets(nomor);
    printf("Input diamter wadah: "); scanf("%f", &d); getchar();
    printf("Input tinggi wadah: "); scanf("%f", &t); getchar();
    printf("Input tanggal pembelian: "); gets(tgl);

    radius = d / 2;
    volume = PI * pow(radius, 2) * t;
    harga = volume * PRICE_PER_M3;

    printf("\n\n");
    printf("== Output Jurnal 2 ==\n");
    printf("Nama: %s\n", nama);
    printf("Alamat: %s\n", alamat);
    printf("Nomor telp: %s\n", nomor);
    printf("Volume air yang dibeli: %.1f\n", volume);
    printf("Harga: %.2f\n", harga);
    printf("Tanggal pelunasan: %s\n", tgl);

    return 0;
}
