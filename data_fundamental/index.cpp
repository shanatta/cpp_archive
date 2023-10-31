#include <iostream>
#include <limits>
using namespace std;

int main() {
    //bil. bulat
    unsigned int z = 2147483648; //jika melebihi batas maka jadi (-)  
    cout << "========Tipe Data unsigned int========" << endl;
    cout << "Nilai= " << z << endl;
    cout << "Size= " << sizeof(z) << " byte" << endl;
    cout << "Nilai max unsigned int= " << numeric_limits<unsigned int>::max() << endl; //unsigned tidak bertanda +-
    cout << "Nilai min unsigned int= " << numeric_limits<unsigned int>::min() << endl;

    int a = 28; //jika melebihi batas maka jadi (-)
    cout << "============Tipe Data int============" << endl;  
    cout << "Nilai= " << a << endl;
    cout << "Size= " << sizeof(a) << " byte" << endl;
    cout << "Nilai max int= " << numeric_limits<int>::max() << endl; 
    cout << "Nilai min int= " << numeric_limits<int>::min() << endl;

    long long b = 6;
    cout << "===========Tipe Data long===========" << endl;
    cout << "Nilai= " << b << endl;
    cout << "Size= " << sizeof(b) << " byte" << endl;
    cout << "Nilai max long= " << numeric_limits<long long>::max() << endl;
    cout << "Nilai min long= " << numeric_limits<long long>::min() << endl;

    short c = 7;
    cout << "===========Tipe Data short===========" << endl;
    cout << "Nilai= " << c << endl;
    cout << "Size= " << sizeof(c) << " byte" << endl;
    cout << "Nilai max short= " << numeric_limits<short>::max() << endl;
    cout << "Nilai min short= " << numeric_limits<short>::min() << endl;

    //bil. desimal
    float d = 1.0;
    cout << "===========Tipe Data float===========" << endl;
    cout << "Nilai= " << d << endl;
    cout << "Size= " << sizeof(d) << " byte" << endl;
    cout << "Nilai max float= " << numeric_limits<float>::max() << endl;
    cout << "Nilai min float= " << numeric_limits<float>::min() << endl;
    
    double e = 2.5;
    cout << "==========Tipe Data double==========" << endl;
    cout << "Nilai= " << e << endl;
    cout << "Size= " << sizeof(e) << " byte" << endl;
    cout << "Nilai max double= " << numeric_limits<double>::max() << endl;
    cout << "Nilai min double= " << numeric_limits<double>::min() << endl;
    
    //character
    char f = 'a';
    cout << "===========Tipe Data char===========" << endl;
    cout << "Nilai= " << f << endl;
    cout << "Size= " << sizeof(f) << " byte" << endl;
    cout << "Nilai max char= " << numeric_limits<char>::max() << endl;
    cout << "Nilai min char= " << numeric_limits<char>::min() << endl;

    //boolean
    bool g = true;
    cout << "=========Tipe Data boolean=========" << endl;
    cout << "Nilai= " << g << endl;
    cout << "Size= " << sizeof(g) << " byte" << endl;
    cout << "Nilai max boolean= " << numeric_limits<bool>::max() << endl;
    cout << "Nilai min boolean= " << numeric_limits<bool>::min() << endl;

  return 0;
} 

//1 byte= 8 bit
//int= 32 bit
//depan ada +-, jadi 31 bit doang
//2^31= 2147483647 (nilai max int)
//nilai min int= -2147483648 
