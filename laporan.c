#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Fungsi untuk laporan penjualan
void laporanPenjualan() {
    FILE *file = fopen("penjualan.txt", "r");
    if (file == NULL) {
        printf("Belum ada data penjualan.\n");
        return;
    }

    char buffer[255];
    printf("ID Barang | Jumlah | Total Harga\n");
    printf("-------------------------------\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    fclose(file);
}
