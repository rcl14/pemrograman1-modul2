#include <stdio.h>
int main() {
    char nama[100];
    char nim[20];
    char kelas_paralel[10];
    char tempat_lahir[100];
    char tanggal_lahir[12];
    char alamat[200];
    char hobby[100];
    char no_hp[20];
    printf("Nama : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel : ");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);
    printf("Tempat Lahir : ");
    fgets(tempat_lahir, sizeof(tempat_lahir), stdin);
    printf("Tanggal Lahir (dd-mm-yyyy) : ");
    fgets(tanggal_lahir, sizeof(tanggal_lahir), stdin);
    printf("Alamat : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP : ");
    fgets(no_hp, sizeof(no_hp), stdin);
    printf("Nama : %s", nama);
    printf("NIM : %s", nim);
    printf("Kelas Paralel : %s", kelas_paralel);
    printf("Tempat/Tanggal Lahir : %s/%s", tempat_lahir, tanggal_lahir);
    printf("Alamat : %s", alamat);
    printf("Hobby : %s", hobby);
    printf("No. HP : %s", no_hp);
    return 0;
}
