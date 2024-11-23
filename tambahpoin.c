#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Fungsi untuk menambahkan poin member
void tambahPoinMember() {
    FILE *file = fopen("member.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    int idCari, id, poin, poinTambah;
    char nama[50];

    printf("Masukkan ID Member: ");
    scanf("%d", &idCari);
    printf("Masukkan Poin yang akan ditambahkan: ");
    scanf("%d", &poinTambah);

    while (fscanf(file, "%d|%[^|]|%d\n", &id, nama, &poin) != EOF) {
        if (id == idCari) {
            poin += poinTambah;
            printf("Poin berhasil ditambahkan. Total Poin: %d\n", poin);
        }
        fprintf(temp, "%d|%s|%d\n", id, nama, poin);
    }

    fclose(file);
    fclose(temp);

    remove("member.txt");
    rename("temp.txt", "member.txt");
}
