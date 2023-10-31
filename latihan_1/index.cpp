#include <iostream>
using namespace std; //-jika tidak pakai, depan cout dikasih std::cout

//-untuk membuat software yg berhubungan dengan hardware
//-Bjarne Stroustrup 1985 (penemu)
//-C yang lebih kompleks
//-compiled language

/* Multi
Line
Comment
*/

int main()
{
    int nis = 23391;
    string nama= "Natalia";
    float nuh = 60;
    float ntgs = 60;
    float nuas = 60;
    float nr= (nuh + ntgs + (2 * nuas)) / 4;

    cout << "Nama: " << nama;
    cout << "\nNIS: " << nis;
    cout << nr;

    if (nr >= 90) {
        cout << "\nNilai Rapot: " << nr << "(A)";
    }else if (nr >= 80) {
        cout << "\nNilai Rapot: " << nr << "(B)";
    }else if (nr >= 70) {
        cout << "\nNilai Rapot: " << nr << "(C)";
    }else if (nr >= 60) {
        cout << "\nNilai Rapot: " << nr << "(D)";
    }else {
        cout << "\nNilai Rapot: " << nr << "(D)";
    }

    return 0;
} 
