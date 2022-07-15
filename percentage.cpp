#include <iostream>

using namespace std;

int main() {
    int percentage, number;
    cout << "Masukkan persentase: ";
    cin >> percentage;
    cout << "Masukkan angka: ";
    cin >> number;

    cout << percentage << " persen dari " << number << " adalah " << number * percentage /100 << endl;
    return 0;
}