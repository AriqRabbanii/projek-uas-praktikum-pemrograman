#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void tambahBarang() {
    FILE *file = fopen("barang.txt", "a");
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    int id, stok, harga;
    char nama[50], kategori[50];

    printf("Masukkan ID Barang: ");
    scanf("%d", &id);
    printf("Masukkan Nama Barang: ");
    scanf(" %[^\n]", nama);
    printf("Masukkan Kategori Barang: ");
    scanf(" %[^\n]", kategori);
    printf("Masukkan Harga Barang: ");
    scanf("%d", &harga);
    printf("Masukkan Stok Barang: ");
    scanf("%d", &stok);

    fprintf(file, "%d|%s|%s|%d|%d\n", id, nama, kategori, harga, stok);
    fclose(file);
    printf("Barang berhasil ditambahkan!\n");
}