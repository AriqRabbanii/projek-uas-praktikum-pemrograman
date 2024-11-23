#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int login() {
    char username[50], password[50];

    // Username dan password yang valid
    const char valid_username[] = "admin";
    const char valid_password[] = "password123";

    // Meminta input dari pengguna
    printf("Masukkan username: ");
    scanf("%s", username);
    printf("Masukkan password: ");
    scanf("%s", password);

    // Memeriksa apakah username dan password cocok
    if (strcmp(username, valid_username) == 0 && strcmp(password, valid_password) == 0) {
        printf("Login berhasil!\n");
        return 1;
    } else {
        printf("Username atau password salah!\n");
    }

    return 0;
}



// Fungsi menu utama
int main() {
    int pilihan;

     if (!login()) {
        return 0;
    }

    do {
        printf("\n===== Sistem Kasir =====\n");
        printf("1. Tambah Barang\n");
        printf("2. Lihat Daftar Barang\n");
        printf("3. Hapus Barang\n");
        printf("4. Pembayaran\n");
        printf("5. Tambah Member\n");
        printf("6. Tambah Poin Member\n");
        printf("7. Laporan Penjualan\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahBarang();
                break;
            case 2:
                lihatDaftarBarang();
                break;
            case 3:
                hapusBarang();
                break;
            case 4:
                pembayaran();
                break;
            case 5:
                tambahMember();
                break;
            case 6:
                tambahPoinMember();
                break;
            case 7:
                laporanPenjualan();
                break;
            case 0:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 0);

    return 0;
}

