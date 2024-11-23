#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void tambahMember() {
    FILE *file = fopen("member.txt", "a");
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    int id;
    char nama[50];

    printf("Masukkan ID Member: ");
    scanf("%d", &id);
    printf("Masukkan Nama Member: ");
    scanf(" %[^\n]", nama);

    fprintf(file, "%d|%s|0\n", id, nama);  // Poin awal adalah 0
    fclose(file);
    printf("Member berhasil ditambahkan!\n");
}
