#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void hapusBarang() {
    FILE *file = fopen("barang.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    int idHapus, id;
    char nama[50], kategori[50];
    int harga, stok;

    printf("Masukkan ID Barang yang ingin dihapus: ");
    scanf("%d", &idHapus);

    while (fscanf(file, "%d|%[^|]|%[^|]|%d|%d\n", &id, nama, kategori, &harga, &stok) != EOF) {
        if (id != idHapus) {
            fprintf(temp, "%d|%s|%s|%d|%d\n", id, nama, kategori, harga, stok);
        }
    }

    fclose(file);
    fclose(temp);

    remove("barang.txt");
    rename("temp.txt", "barang.txt");

    printf("Barang berhasil dihapus.\n");
}