#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float tb,bb,mtr,bmi;
    char ulang;

    do {
    cout<<"Masukkan Berat Badan kamu (kg): ";
    cin>>bb;
    cout<<endl;

    cout<<"Masukkan Tinggi Badan kamu (m): ";
    cin>>tb;

    mtr=tb/100;

    bmi=(bb/(mtr*mtr));

    cout<<endl;
    cout<<"BMI: "<<bmi<<" ";

    if (bmi<18.5){
        cout<<"(Kurus)"<<endl;
    }else if (bmi<=24.9){
        cout<<"(Normal)"<<endl;
    }else if (bmi<29.9){
        cout<<"(Overweight)"<<endl;
    }else {
        cout<<"(Obesitas)"<<endl;
    }

    cout<<endl<<"Apakah ingin mengulangi program (Y/T) ";
    ulang=getch();
    cout<<endl;
    }

    while((ulang =='y')||(ulang =='Y'));

    cout<<endl; return 0;
}