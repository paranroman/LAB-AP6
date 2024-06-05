#include <iostream>
using namespace std;

int main()
{
    float alas,tinggi,tp,volume,luas;

    cout<<"Masukkan alas ";
    cin>>alas;

    cout<<"Masukkan tinggi ";
    cin>>tinggi;

     cout<<"Masukkan tinggi prisma ";
    cin>>tp;

    volume = (alas * tinggi * 0.5) * tp;
    luas = (2 * 0.5 * alas * tinggi) + (3 * alas * tinggi);

    cout<<"Volume Prisma = "<<volume<<endl;
    cout<<"Permukaan Prisma = "<<luas<<endl;

    return 0;
}