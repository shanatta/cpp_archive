//Operator Logika

#include <iostream>
using namespace std;

int main() {
    //-operator logika: not, and, or
    int a = 3;
    int b =2;
    bool hasil;

    cout << "===============Kondisi===============" << endl;
    cout << "Nilai a= " << a << endl;
    cout << "Nilai b= " << b << endl;

    cout << "=================NOT=================" << endl;
    hasil = !(a == 3); //-a nilai bukan 3= false(0)
    cout << "!a= 3 " << "(" << hasil << ")" << endl;

    //AND && (kedua nilai harus benar untuk menghasilkan true)
    cout << "=================AND=================" << endl;
    hasil = (a == 3) and (b == 2); //-true and true
    cout << "a= 3 " << "&& " << "b= 2 " << "(" << hasil << ")" << endl;

    hasil = (a == 1) and (b == 2); //-false and true
    cout << "a= 1 " << "&& " << "b= 2 " << "(" << hasil << ")" << endl;

    hasil = (a == 3) && (b == 1); //-tanda && //-true and false
    cout << "a= 3 " << "&& " << "b= 1 " << "(" << hasil << ")" << endl; 

    hasil = (a == 1) && (b == 1); //-false and false
    cout << "a= 1 " << "&& " << "b= 1 " << "(" << hasil << ")" << endl; 

    //OR || (salah 1 true, akan menghasilkan true)
    cout << "=================OR=================" << endl;
    hasil = (a == 3) or (b == 2); //-true and true
    cout << "a= 3 " << "|| " << "b= 2 " << "(" << hasil << ")" << endl; 

    hasil = (a == 1) or (b == 2); //-false and true
    cout << "a= 1 " << "|| " << "b= 2 " << "(" << hasil << ")" << endl; 

    hasil = (a == 3) || (b == 1); //-tanda || //-true and false
    cout << "a= 3 " << "|| " << "b= 1 " << "(" << hasil << ")" << endl;  

    hasil = (a == 1) || (b == 1); //-false and false
    cout << "a= 1 " << "|| " << "b= 1 " << "(" << hasil << ")" << endl; 

    return 0;
} 
