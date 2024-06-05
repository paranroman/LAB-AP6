#include<iostream>
#include "operasi.h"
#include "preprocessor.h"

uns;

void sayhello(){    //function without any value to return
    o<<"Hello world"<<n;
}

void bintang(){
    o<<"*************"<<n;
}


int main(){
    bintang();
    o<<tambah(2, 3)<<n; //using the new code that had been created in header processor.h
    o<<kurang(2, 3)<<n;
    o<<kali(2, 3)<<n;
    o<<bagi(2, 3)<<n;
    sayhello();
    o<<PI<<n;
    return 0;
}

