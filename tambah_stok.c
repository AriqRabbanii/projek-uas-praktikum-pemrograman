#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define FILE_BARANG "barang.txt"

// Fungsi untuk menambah stok barang
void tambah_stok() {
    char id_barang[20];
    int jumlah;
    printf("Masukkan ID Barang untuk menambah stok: ");
    scanf("%s", id_barang);
    printf("Masukkan jumlah yang ingin ditambah: ");
    scanf("%d", &jumlah);

    FILE *file = fopen(FILE_BARANG, "r+");
    if (file == NULL) {
        printf("Gagal membuka file barang.txt\n");
        return;
    }

    char line[256];
    int found = 0;
    while (fgets(line, sizeof(line), file)) {
        Barang barang;
        sscanf(line, "%s | %s | %s | %f | %d", barang.id_barang, barang.nama_barang, barang.kategori, &barang.harga, &barang.stok);
        if (strcmp(barang.id_barang, id_barang) == 0) {
            found = 1;
            fseek(file, -strlen(line), SEEK_CUR);  // Move to the beginning of the current line
            barang.stok += jumlah;
            fprintf(file, "%s | %s | %s | %.2f | %d\n", barang.id_barang, barang.nama_barang, barang.kategori, barang.harga, barang.stok);
            printf("Stok barang berhasil ditambah.\n");
            break;
        }
    }

    if (!found) {
        printf("Barang dengan ID tersebut tidak ditemukan.\n");
    }

    fclose(file);
}
