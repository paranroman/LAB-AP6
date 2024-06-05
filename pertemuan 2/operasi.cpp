#include <iostream>
using namespace std;

int main()
{
    int a,b;

    // assignment operator
    a=5;
    b=7;

    // arithmetic operator
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = a / b;
    int mod = a % b;

    cout <<"a + b = "<<tambah<<endl;
    cout <<"a - b = "<<kurang<<endl;
    cout <<"a * b = "<<kali<<endl;
    cout <<"a / b = "<<bagi<<endl;
    cout <<"a % b = "<<mod<<endl;

    // relational operator
    cout << (a==b)<<endl;
    cout << (a<b)<<endl;
    cout << (a>b)<<endl;
    cout << (a<=b)<<endl;
    cout << (a==b)<<endl;
    cout << (a!=b)<<endl;

    // logical operator
    cout << (true && true) <<endl;
    cout << (true && false) <<endl;
    cout << (false && true) <<endl;
    cout << (false && false) <<endl;

    cout << (true || true) <<endl;
    cout << (true || false) <<endl;
    cout << (false || true) <<endl;
    cout << (false || false) <<endl;

    cout << !true <<endl;
    cout << !false <<endl;

    // bitwise operator
    cout << (4 & 7) << endl; 
    cout << (4 | 7) << endl; 
    cout << (4 ^ 7) << endl; 
    cout << (~7) << endl; 
    cout << (4 << 7) << endl; 
    cout << (4 >> 7) << endl;

    // pre increament & decreament
    cout << a++ << endl;
    cout << a-- << endl;

    // post increament & decreament
    cout << ++a << endl;
    cout << --a << endl;

    // // shorthand
    // a += 5;
    // a -= 5;
    // a *= 5;
    // a /= 5;

    // b += 5;
    // b -= 5;
    // b *= 5;
    // b /= 5;

}