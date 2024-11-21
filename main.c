#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define MAX 100
#define FILE_BARANG "barang.txt"
#define FILE_MEMBER "member.txt"
#define FILE_TRANSAKSI "transaksi.txt"

// Fungsi utama untuk menjalankan program
int main() {
    
    int hapus_barang();

    if (!login()) {
        return 0;
    }

    int pilihan;
    do {
        menu_utama();
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambah_barang();
                break;
            case 2:
                hapus_barang();
                break;
            case 3:
                lihat_barang();
                break;
            case 4:
                tambah_stok();
                break;
            case 5:
                kurangi_stok();
                break;
            case 6:
                pembayaran();
                break;
            case 7:
                tambah_member();
                break;
            case 8:
                // Laporan penjualan
                break;
            case 9:
                printf("Terima kasih. Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid. Coba lagi.\n");
        }
    } while (pilihan != 9);

    return 0;
}
