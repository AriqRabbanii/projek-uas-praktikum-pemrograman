#ifndef HEADER_H
#define HEADER_H

typedef struct {
    char ID[15];
    char nama[20];
    char kategori[20];
    int stok;
    float harga;
}Barang;

typedef struct{
    char ID[10];
    char nama[20];
    int poin;
}member;

int login();
void pilihan();
void tambahbarang();
void kurangibarang();

#endif
