#include <iostream>
/* Preprocessing bagian atas compile.p
# 1 "compile.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "compile.cpp"
*/

using namespace std;

int tambah(int a, int b);

int main()
{
    cout << tambah(2,3);

    return 0;
#include "kurung.h" //-preprocessing derektif

//-objdump -d compile.o (d= disassemble/bahasa mesin)
//-banyak obj, di linking, jadi .exe (compile.cpp + tambah.cpp= di compile jadi compile.o + tambah.o linking jadi output.exe) 
