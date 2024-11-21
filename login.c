#include <stdio.h>
#include <string.h>


int login(){
    FILE *file = fopen( "login.txt", "r");
    if(!file){
        printf("file login.txt tidak ditemukan\n");
        return 0;
    }
    char usn[50], passw[50], stored_usn[50], stored_passw[50];
    printf("masukkan username: ");
    scanf("%s", &usn);
    printf("masukkan password: ");
    scanf("%s", &passw);

    while(fscanf(file, "%s %s",stored_usn, stored_passw) != EOF){
        if(strcmp(usn, stored_usn) == 0 && strcmp(passw, stored_passw) == 0){
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    printf("login gagal. username atau password salah:(");
    return 0;
}