#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int acak, tebakan;
    srand(time(0));

    cout << "Tebak angka diantara 1 - 10: ";
    cin >> tebakan;

    acak = rand() % 10 + 1;
    if(acak != tebakan) {
        cout << "Tebakan salah!" << endl;
    } else {
        cout << "Tebakan benar!" << endl;
    }
    return 0;
}