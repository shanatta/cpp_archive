#include <iostream>
using namespace std;

int main() {
    int a;  
    a = 1;
    cout << "Nilai= " << a << endl;

    int b;
    cout << "=============Input Nilai=============" << endl;
    cout << "Masukan nilai= ";
    cin >> b;
    cout << "Nilai yang dimasukan= " << b << endl;
    
    cin.get(); //-agar program tidak closing kalo pake cmd

  return 0;
} 
