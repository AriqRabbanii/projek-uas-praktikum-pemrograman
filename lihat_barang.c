#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define FILE_BARANG "barang.txt"

// Fungsi untuk menampilkan daftar barang
void lihat_barang() {
    FILE *file = fopen(FILE_BARANG, "r");
    if (file == NULL) {
        printf("Gagal membuka file barang.txt\n");
        return;
    }

    char line[256];
    printf("Daftar Barang:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}
