#include <iostream>

using namespace std;

int main () {

    //assignment
    int a = 10;

    cout << "Nilai awal a= " << a << endl;
    //assignment operator
    //-variable = variable + operator + ekspresi
    //-a= a-3

    //-variable operator = ekspresi
    //a += 3

    a += 3;
    cout << "ditambah 3= " << a << endl;

    a -= 3;
    cout << "dikurang 3= " << a << endl;

    a *= 3;
    cout << "dikali 3= " << a << endl;

    a /= 3;
    cout << "dibagi 3= " << a << endl;

    a %= 3;
    cout << "dimodulus 3= " << a << endl;
    
    /* Bisa spt ini
    a = a + 3;
    cout << "Operator Assignment" << endl;
    cout << a << endl;
    */

    return 0;
} 
