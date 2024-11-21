#include <stdio.h>
#include <string.h>
#include "header.h"

int login() {
    char username[50], password[50];

    // Username dan password yang valid
    const char valid_username[] = "admin";
    const char valid_password[] = "password123";

    // Meminta input dari pengguna
    printf("Masukkan username: ");
    scanf("%s", username);
    printf("Masukkan password: ");
    scanf("%s", password);

    // Memeriksa apakah username dan password cocok
    if (strcmp(username, valid_username) == 0 && strcmp(password, valid_password) == 0) {
        printf("Login berhasil!\n");
        return 1;
    } else {
        printf("Username atau password salah!\n");
    }

    return 0;
}
