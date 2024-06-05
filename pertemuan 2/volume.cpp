#include <iostream>
using namespace std;

int main()
{
    float radius,tinggi,volume;
    const float phi = 3.14;

    cout<<"Masukkan jari-jari ";
    cin>>radius;

    cout<<"Masukkan tinggi ";
    cin>>tinggi;

    volume = phi * radius * radius * tinggi;

    cout<<"Volume Tabung = "<<volume<<endl;

    return 0;
}