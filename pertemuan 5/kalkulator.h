#include<cmath>

int tambah(int a, int b){   //declare function with formal parameter
    return a+b;
}

int kurang(int a, int b){
    return a-b;
}

int kali(int a, int b){
    return a*b;
}

float bagi(int a, int b){
    return static_cast<float>(a)/static_cast<float>(b);
}

int modulo(int a, int b){
    return a % b;
}

int pangkat(int a, int b){
    return pow(a,b);   //calculate with the code that has been provided in cmath library
}