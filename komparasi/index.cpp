//Komparasi

#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 2;
    bool hasil1, hasil2;

    //komparasi, relation expression
    //komparasi sebanding
    hasil1 = (a == b);
    cout << "=========Komparasi Sebanding=========\n" 
    << "a= " << a 
    << "\nb= " << b
    << "\na == b= " << hasil1 << endl; //-jika a=b maka nilai= 1 (true)

    //komparasi tidak sebanding (! NOT)
    hasil2 = (a != b);
    cout << "======Komparasi Tidak Sebanding======\n" 
    << "a= " << a
    << "\nb= " << b
    << "\na != b= " << hasil2 << endl; //-jika a tidak sama dengan b= 1 (true)

    //kurang dari sama dengan
    hasil1 = (a <= b);
    cout << "=======Kurang Dari Sama Dengan=======\n" 
    << "a= " << a
    << "\nb= " << b
    << "\na <= b= " << hasil1 << endl; //-jika a kurang dari sama dengan b= 1 (true)

    //lebih dari sama dengan
    hasil2 = (a >= b);
    cout << "=======Lebih Dari Sama Dengan=======\n" 
    << "a= " << a
    << "\nb= " << b
    << "\na >= b= " << hasil2 << endl; //-jika a lebih dari sama dengan b= 1 (true)

    return 0;
} 
