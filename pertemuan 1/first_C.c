#include <stdio.h>

int main() {
    int nim;
    char kom, nama[50];
    float ip;

    printf("Hello, World!\n");

    printf("Masukkan Nama: ");
    gets(nama);
    
    printf("Masukkan NIM : ");
    scanf("%d",&nim);

    printf("Masukkan KOM : ");
    scanf(" %c",&kom);

    printf("Masukkan IP  : ");
    scanf("%f",&ip);
   
    printf("Nama: "); puts(nama);
    printf("NIM : %d\n",nim);
    printf("KOM : %c\n",kom);
    printf("IP  : %.2f\n",ip);
}