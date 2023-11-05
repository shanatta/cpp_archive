#include <iostream>

using namespace std;

int main() {

    cout << "================Break================" << endl;
    for (int i = 0; i <=10; i++) { //-pakai while juga bisa
        if(i == 5) {
            break;
        }
        cout << i << endl;
    }
    cout << "over" << endl;

    cout << "===============Continue===============" << endl;
    for (int i = 0; i <=10; i++) { //-pakai while akan keluar 0-4 saja, i++ nya taruh atas
        if(i == 5) {
            continue; //-no. 5 diloncat/skip
        }
        cout << i << endl;
    }
    cout << "over" << endl;

    return 0;
} 
