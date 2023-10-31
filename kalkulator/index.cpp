//Kalkulator

#include <iostream>
using namespace std;

int main() {
    float a, b, hasil;
    char c;

    //kalkulator tambah
    cout << "==============Kalkulator==============";
    cout << "Masukan angka pertama: ";
    cin >> a;
    cout << "Pilih operator: ";
    cin >> c;
    cout << "Masukan angka kedua: ";
    cin >> b;

    cout << a << c << b << "= ";

    if (c == '+') {
        cout << a + b << endl;
    } else if (c == '-') {
        cout << a - b << endl;
    } else if (c == '*') {
        cout << a * b << endl;
    } else if (c == '/') {
        cout << a / b << endl;
    } else {
        cout << "Operator salah" << endl;
    }

    cout << "Selesai";

    return 0;
} 
