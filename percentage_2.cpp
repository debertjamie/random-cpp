#include <iostream>

using namespace std;

int main() {
    int hasil, angka;
    cout << "Masukkan hasil: ";
    cin >> hasil;
    cout << "Masukkan angka: ";
    cin >> angka;

    cout << hasil << " merupakan " << hasil * 100 / angka << " persen dari " << angka << endl;
    return 0;
}