#include<iostream>

using namespace std;

int main() {
    //increment (++) dan decrement (--)
    //-pre incrrement & post increment

    int a = 5;
    int b = 5;

    /*post increment
    cout << a << endl;
    a++; //-post increment a= a+
    cout << a << endl << endl;

    //pre increment
    cout << b << endl;
    ++b;
    cout << b << endl << endl;
    */

    //post increment 
    cout << "============Post Increment============" << endl;
    cout << a << endl;
    cout << a++ << endl;//-diprint dulu baru ditambahkan
    cout << a << endl;

    //pre increment
    cout << "============Pre Increment============" << endl;
    cout << b << endl;
    cout << ++b << endl;//-ditambahkan langsung 
    cout << b << endl;

    /*
    //post decrement 
    cout << "============Post Decrement============" << endl;
    cout << a << endl;
    cout << a-- << endl;//-diprint dulu baru dikurangkan
    cout << a << endl;

    //pre decrement
    cout << "============Pre Decrement============" << endl;
    cout << b << endl;
    cout << --b << endl;//-dikurangkan langsung 
    cout << b << endl;
    */

    return 0;
} 
