#include <stdio.h>
#include <conio.h>
main() {
 char ulang;
 
 do {
 int n,x, i = 1, jumlah = 0;
 printf("Masukkan nilai n: ");
 scanf("%d", &n);
 while (i <= n) {
 
 x=i*2;
 jumlah += x;
 i++;
 }
 printf("Jumlah deret bilangan genap hingga suku ke-%d adalah: %d\n", n, 
jumlah);
 printf("Apakah Anda ingin mengulang? (y/n): ");
 ulang=getch();
 } while (ulang == 'y' || ulang == 'Y');
}