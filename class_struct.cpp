#include <iostream>

using namespace std;

class Kelas {
    public:
        string nama;
        int umur;
};

struct Struktur {
    string nama;
    int umur;
};

int main() {
    Kelas kls;
    Struktur str;
    kls.nama = "Budi";
    kls.umur = 12;
    str.nama = "Andi";
    str.umur = 13;

    cout << "Name: " << kls.nama << ", Age: " << kls.umur << endl;
    cout << "Name: " << str.nama << ", Age: " << str.umur << endl;
    return 0;
}