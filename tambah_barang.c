#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define FILE_BARANG "barang.txt"

// Fungsi untuk menambahkan barang ke toko
void tambah_barang() {
    FILE *file = fopen(FILE_BARANG, "a");
    if (file == NULL) {
        printf("Gagal membuka file barang.txt\n");
        return;
    }

    Barang barang;
    printf("Masukkan ID Barang: ");
    scanf("%s", barang.id_barang);
    printf("Masukkan Nama Barang: ");
    scanf(" %[^\n]", barang.nama_barang);
    printf("Masukkan Kategori Barang: ");
    scanf("%s", barang.kategori);
    printf("Masukkan Harga Barang: ");
    scanf("%f", &barang.harga);
    printf("Masukkan Stok Barang: ");
    scanf("%d", &barang.stok);

    fprintf(file, "%s | %s | %s | %.2f | %d\n", barang.id_barang, barang.nama_barang, barang.kategori, barang.harga, barang.stok);
    fclose(file);
    printf("Barang berhasil ditambahkan!\n");
}