//Aritmatika

#include <iostream>
using namespace std;

int main() {
    float a = 6; //-salah 1 harus float
    int b = 4;
    float hasil; //-hasil jadiin float

    //penjumlahan
    hasil = a + b;
    cout << "=============Penjumlahan=============\n" << a << "+" << b << "= " << hasil << endl;

    //pengurangan
    hasil = a - b;
    cout << "=============Pengurangan=============\n" << a << "-" << b << "= " << hasil << endl;

    //perkalian
    hasil = a * b;
    cout << "==============Perkalian==============\n" << a << "*" << b << "= " << hasil << endl;

    //pembagian
    hasil = a / b;
    cout << "==============Pembagian==============\n" << a << "/" << b << "= " << hasil << endl;

    /*
    //sisa bagi (modulus) tidak bisa dengan tipe beda (int float)
    hasil = a % b;
    cout << "===============Modulus===============\n" << a << "%" << b << "= " << hasil << endl;
    */

    //urutan eksekusi
    hasil = (a + b) * a;
    cout << "===============Urutan===============\n" << hasil << endl;

    return 0;
} 
