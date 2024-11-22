#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define FILE_BARANG "barang.txt"

// Fungsi untuk melakukan pembayaran
void pembayaran() {
    char id_barang[20];
    int jumlah;
    float total = 0;

    printf("Masukkan ID Barang yang dibeli: ");
    scanf("%s", id_barang);
    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlah);

    FILE *file = fopen(FILE_BARANG, "r");
    if (file == NULL) {
        printf("Gagal membuka file barang.txt\n");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        Barang barang;
        sscanf(line, "%s | %s | %s | %f | %d", barang.id_barang, barang.nama_barang, barang.kategori, &barang.harga, &barang.stok);
        if (strcmp(barang.id_barang, id_barang) == 0) {
            total = barang.harga * jumlah;
            printf("Total Pembayaran: %.2f\n", total);
            break;
        }
    }

    fclose(file);
}
