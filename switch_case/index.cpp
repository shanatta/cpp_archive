//switch case

#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Masukan pin: ";
    cin >> a;

    /*
    switch(a == 29) {
        case true:
        cout << "Pin benar" << endl;
    }

    cout << "Selesai";
    */

    switch(a) {
        case 29:
        cout << "Pin nata" << endl; //-jika case 1 benar, akan jalan semua 
        break; //-agar berhenti

        case 28:
        cout << "Pin azr" << endl;
        break;

        case 12:
        cout << "Bulan kita" << endl;
        break;

        case 5:
        cout << "Tahun kita" << endl;
        break;

        case 0:
        cout << "Apcb" << endl;
        break;

        default:
        cout << "Not found" << endl; 
    }

    cout << "Selesai";

    return 0;
} 
