#ifndef HEADER_H
#define HEADER_H

// Struktur untuk menyimpan informasi barang
typedef struct {
    char id_barang[20];
    char nama_barang[50];
    char kategori[30];
    float harga;
    int stok;
} Barang;

// Struktur untuk menyimpan informasi member
typedef struct {
    char id_member[20];
    char nama[50];
    int poin;
} Member;

int login();
void menu_utama();
void tambah_barang();
void tambah_stok();
void kurangi_stok();
void lihat_barang();
void pembayaran();
void menu_utama();
int hapus_barang();
void tambah_member();


#endif
