//if else Statement

#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Masukan pin: ";
    cin >> a;

    //if else statement
    if (a == 29) { 
        cout << "Pin nata " << endl; 
    } else if (a == 28) {
        cout << "Pin azr " << endl;
    } else {
        cout << "Pin salah " << endl;
    }

    cout << "Selesai" << endl;

    return 0;
} 
