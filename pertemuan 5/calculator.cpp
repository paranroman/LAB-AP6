#include<iostream>
#include "kalkulator.h"
using namespace std; 

void garis(){
    cout<<"======================="<<endl;
}

void menu(){
  cout<<"1.Tambah\n2.Kurang\n3.Kali\n4.Bagi\n5.Modulo\n6.Pangkat"<<endl;  
}
int main(){
    system("cls");
    int operasi, a, b;
    float hasil;
    char yn;
    do{
    garis();
    cout<<"Selamat datang di program kalkulator"<<endl;
    garis();
    menu();
    garis();
    cout<<"Masukkan operasi : ";
        cin>>operasi;
    
    cout<<"Masukkan angka pertama : ";
        cin>>a;
    cout<<"Masukkan angka kedua : ";
        cin>>b;
    
    switch(operasi){
        case 1:
            hasil = tambah(a,b);    //call the function from calc.h header
            break; 
        case 2: 
            hasil = kurang(a,b);
            break;
        case 3:
            hasil = kali(a,b);
            break;
        case 4: 
            hasil = bagi(a,b);
            break;
        case 5: 
            hasil = modulo(a,b);
            break;
        case 6:
            hasil = pangkat(a,b);
            break;
    }
    cout<<"Hasil : "<<hasil<<endl;
    cout<<"Apakah anda ingin mengulang : ";
        cin>>yn;
    }while(toupper(yn)=='Y');   //switch the char to capital 

    cout<<"TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KALKULATOR";

    return 0;
}
