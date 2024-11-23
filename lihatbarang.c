#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Fungsi untuk melihat daftar barang
void lihatDaftarBarang() {
    FILE *file = fopen("barang.txt", "r");
    if (file == NULL) {
        printf("Data barang belum ada.\n");
        return;
    }

    char buffer[255];
    printf("ID | Nama Barang | Kategori | Harga | Stok\n");
    printf("-------------------------------------------\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    fclose(file);
}
