#include <iostream>
using namespace std;

int main()
{
    float alas,tinggi,tl,volume,luas;

    cout<<"Masukkan alas ";
    cin>>alas;

    cout<<"Masukkan tinggi ";
    cin>>tinggi;

    cout<<"Masukkan tinggi ";
    cin>>tl;

    volume = 1/3.0 * (0.5 * alas * tinggi) * tl;
    luas = 4 * (0.5 * alas * tinggi);

    cout<<"Volume Limas = "<<volume<<endl;
    cout<<"Permukaan Limas = "<<luas<<endl;

    return 0;
}