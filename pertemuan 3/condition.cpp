#include <iostream>
using namespace std;

int main(){
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    // // if statement
    // if (nilai < 65){
    //     cout << "tidak lulus" << endl;
    // }

    // // if-else statement
    // if (nilai < 65){
    //     cout << "tidak lulus" << endl;
    // }
    // else{
    //     cout << "lulus" << endl;
    // }

    // // if-else-if statement
    // if (nilai < 65){
    //     cout << "tidak lulus" << endl;
    // }
    // else if (nilai = 65){
    //     cout << "nilai pas" << endl;
    // }
    // else{
    //     cout << "lulus" << endl;
    // }

    // // switch
    // switch (nilai){
    //     case 1:
    //     cout << "senin" << endl; break;
    //     case 2:
    //     cout << "selase" << endl; break;
    //     case 3:
    //     cout << "rabu" << endl; break;
    //     case 4:
    //     cout << "kamis" << endl; break;
    //     case 5:
    //     cout << "jum'at" << endl; break;
    //     case 6:
    //     cout << "sabtu" << endl; break;
    //     case 7:
    //     cout << "minggu" << endl; break;
    //     default: 
    //     cout << "tidak valid" << endl;
    // }

    // // switch case for range
    // A -> 90 ... 100
    // B+ -> 85 ... 89
    // B -> 80 ... 84
    // C+ -> 75 ... 79
    // C -> 70 ... 74
    // D -> 65 ... 69
    // E -> 0 ... 64

    // switch (nilai){
    //     case  90 ... 100:
    //     cout << "A" << endl;
    //     break;
    //     case  85 ... 89:
    //     cout << "A" << endl;
    //     break;
    //     case  80 ... 84:
    //     cout << "A" << endl;
    //     break;
    //     case  75 ... 79:
    //     cout << "A" << endl;
    //     break;
    //     case  70 ... 74:
    //     cout << "A" << endl;
    //     break;
    //     case  65 ... 69:
    //     cout << "A" << endl;
    //     break;
    //     case  0 ... 64:
    //     cout << "A" << endl;
    //     break;
    // }

    // ternary operator
    string tipe = (nilai > 0) ? "Positif" : "Negatif";
    cout << tipe << endl;
}