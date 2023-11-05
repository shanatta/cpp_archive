#include <iostream> 

using namespace std;

int main() {
    
    int a = 1;
    cout << "==============Do While==============" << endl;
    do {
        cout << "Yey ";//-aksi minim keluar 1x
        cout << a << endl;
        a++;
    }while(a <= 10); //-syarat salah

    cout << "Selesai";

    return 0;
} 
