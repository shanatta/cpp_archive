#include <iostream>

using namespace std;

int main() {

    cout << "==============For Loop==============" << endl;
    /*
    for(//-inisialisasi, loop kondisi, increment) {
        //-statement
    }
    */

   cout << "Loop 1" << endl;
   for(int i = 1; i <= 10; i++) {
    cout << i << endl;
   }

   cout << "\nLoop 2" << endl;
   for(int i = 1; i <= 10; i += 2) {
    cout << i << endl;
   }

   cout << "\nLoop 3" << endl;
   for(int i = 1; i >= -10; i--) {
    cout << i << endl;
   }

   cout << "\nLoop 4" << endl;
   int total = 0;
   for(int i = 1; i <= 10; total += 1, i++) {
    cout << i << "||" << total << endl;
   }

    return 0;
} 
