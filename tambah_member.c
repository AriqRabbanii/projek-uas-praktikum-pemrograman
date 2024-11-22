#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define FILE_MEMBER "member.txt"

// Fungsi untuk menambahkan barang ke toko
void tambah_member() {
    FILE *file = fopen(FILE_MEMBER, "a");
    if (file == NULL) {
        printf("Gagal membuka file barang.txt\n");
        return;
    }

    Member member;
    printf("Masukkan ID member: ");
    scanf("%s", member.id_member);
    printf("Masukkan Nama Member: ");
    scanf(" %s", member.nama);
    printf("Masukkan Poin Member: ");
    scanf("%d", &member.poin);

    fprintf(file, "%s | %s | %d\n", member.id_member, member.nama, member.poin);
    fclose(file);
    printf("Member berhasil ditambahkan!\n");
}
