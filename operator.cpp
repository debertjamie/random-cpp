#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if(a < b) {
        cout << "a < b" << endl;
    } else if(a > b) {
        cout << "a > b" << endl;
    } else {
        cout << "a = b" << endl;
    }
    return 0;
}