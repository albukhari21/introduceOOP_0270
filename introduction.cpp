#include <iostream>
using namespace std;

class mahasiswa{
public:
int nim;
string nama;
float nilai;

void print_data(){
    cout << "NIM = " << nim << endl;
    cout << "Nama = " << nama << endl;
    cout << "Nilai = " << nim << endl;
    }

};
  

int main(){
    mahasiswa mhs;
    mhs.nim = 2024;
    mhs.nama = "Al bukhari";
    mhs.nilai = 100;

    mhs.print_data();
  
}