#include<iostream>
using namespace std; 

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
int bagi(int a, int b);
void bintang();
void sayhello();

int main(){
    bintang();
    cout<<tambah(2, 3)<<endl;
    cout<<kurang(2, 3)<<endl;
    cout<<kali(2, 3)<<endl;
    cout<<bagi(2, 3)<<endl;
    sayhello();
    return 0;
}

//function = fungsi yang memiliki nilai kembalian

int tambah(int a, int b){
    return a+b;
}

int kurang(int a, int b){
    return a-b;
}

int kali(int a, int b){
    return a*b;
}

int bagi(int a, int b){
    // return (float)a/ (float)b; //type casting
    return static_cast<float>(a)/static_cast<float>(b);
 }
//procedure = fungsi tidak memiliki nilai kembalian 
void sayhello(){
    cout<<"Hello world"<<endl;
}

void bintang(){
    cout<<"*************"<<endl;
}