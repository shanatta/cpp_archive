#include <iostream>

using namespace std;

int main() {

    int a = 5;

    cout << "==============While Loop==============" << endl;
    while(a <= 10) { //-syarat
        cout << "Yey " << a << endl; //-aksi
        a += 1; //-5+1= 6, 6+1= 7, 7+1= 8, dll, lalu stop
    }

    cout << "Selesai" << endl;

    return 0;
} 
