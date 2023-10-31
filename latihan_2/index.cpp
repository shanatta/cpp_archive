//Aplikasi Kasir

#include <iostream>
using namespace std;
int main() {
	//Inisialisasi atau deklarasi variabel
    string nama_penjual, nama_pembeli;
    char jenis, tambah;
    int jumlah;
    double harga, 
    a=10000,
    b=2000,
    sub_a,
    sub_b,
    total= 0;
    
	cout<<"PROGRAM C++ KASIR"<<endl;
	cout<<"---------------------------"<<endl;

    cout << "Nama penjual= Devi" << endl;
    cout << "Nama pembeli= ";
    cin >> nama_pembeli;

    cout << "\nDaftar Menu" << endl;
    cout << "a. Nasi Goreng (10.000)" << endl
    << "b. Es Teh (2.000)" << endl;

    cout << "\nDaftar Pesanan " << endl;
    cout << "Jenis= ";
    cin >> jenis;

    if (jenis == 'a') {
        cout << "jumlah= ";
    } else if (jenis == 'b') {
        cout << "jumlah= ";
    }
        cin >> jumlah;

        cout << "Sub total= " << a * jumlah << endl;

        cout << "\nDaftar Pesanan " << endl;
    cout << "Jenis= ";
    cin >> jenis;

    if (jenis == 'b') {
        cout << "jumlah= ";
    } else if (jenis == 'a') {
        cout << "jumlah= ";
    }
        cin >> jumlah;

        cout << "Sub total= " << b * jumlah << endl;
       
        cout << "Total semua= "    << endl;

}