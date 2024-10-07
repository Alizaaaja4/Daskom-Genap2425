#include <stdio.h>
#include <string.h> /* (A) Tentukan header file yang digunakan */

int main() {
    int pilihan;
    char username[100], password[100]; /* (B) Tentukan tipe data */

    /* === INPUT === */
    puts("=== SIGN-IN ===");

    puts("");
    puts("Selamat Datang! Berikut adalah pilihan akun yang tersedia:");
    puts("[1] Administrator");
    puts("[2] Pengguna");
    printf("Sign-in sebagai: "); scanf("%d", &pilihan);
    fflush(stdin);

    /* === CONDITIONAL-FLOW && OUTPUT === */
    puts("");
    switch (pilihan) { /* (C) Tentukan sintaks percabangan */
        case 1: { /* (D) Tentukan sintaks percabangan */
            printf("Masukkan nama administrator: ");
            gets(username);
            printf("Masukkan kata sandi: ");
            gets(password);
            
            /*
                (E) Tentukan sintaks yang sesuai
                (F) Tentukan operasi boolean
            */
            puts("");
            if (strcmp(username, "Admin123") == 0 && strcmp(password, "AdminKece") == 0) {
                puts("Selamat Datang, Admin123!");
                puts("Anda telah berhasil melakukan sign-in sebagai Administrator...");
            } else {
                puts("Maaf, Anda telah gagal melakukan sign-in sebagai Administrator...");
            } break;

        } case 2: {
            printf("Masukkan nama pengguna: ");
            gets(username);
            printf("Masukkan kata sandi: ");
            gets(password);
            
            puts("");
            if (strcmp(username, "Praktikan123") == 0 && strcmp(password, "Praktikan123") == 0) {
                puts("Selamat Datang, Praktikan123!");
                puts("Anda telah berhasil melakukan sign-in sebagai Pengguna...");
            } else {
                puts("Maaf, Anda telah gagal melakukan sign-in sebagai Pengguna...");
            } break;

        } default: { break; } /* (G) Tentukan sintaks percabangan */
    }

    return 0;
}