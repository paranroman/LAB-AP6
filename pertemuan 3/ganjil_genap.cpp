// program untuk menentukan sebulah bilangan ganjil atau genap

#include <iostream>
using namespace std;

main(){
    int x,i;

    cout << "Masukkan Angka ";
    cin >> x;

    string jenis = (x % 2 == 0) ? "Genap" : "Ganjil";
    cout << jenis << endl;
}