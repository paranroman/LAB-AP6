#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int nim;
    char kom;
    string nama;
    float ip;

    system("CLS");

    cout << "Hello World!" << endl;

    cout << "Masukkan Nama: ";getline(cin, nama);
    cout << "Masukkan NIM : "; cin >> nim;
    cout << "Masukkan KOM : "; cin >> kom;
    cout << "Masukkan IP  : "; cin >> ip;

    system("CLS");
    
    cout << "Nama: " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    cout << "IP  : " << fixed << setprecision(2) << ip << endl;

    system("pause");
    return 0;
}