#include <iostream>

using namespace std;

int main() {
    string nama[3];
    cout << "Enter first name: ";
    cin >> nama[0];
    cout << "Enter second name: ";
    cin >> nama[1];
    cout << "Enter third name: ";
    cin >> nama[2];

    for(int i = 0; i < 3; i++) {
        cout << nama[i] << endl;
    }

    return 0;
}