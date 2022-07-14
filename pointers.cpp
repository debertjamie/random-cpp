#include <iostream>

using namespace std;

void address() {
    string city = "Bandung";
    cout << &city << endl; // address of city
}

void pointer() {
    string city = "Bekasi";
    string *city_ptr = &city;
    cout << *city_ptr << endl; // value of city  
}

void pointertopointer() {
    string city = "Jakarta";
    string *city_ptr = &city;
    string **city_ptr_ptr = &city_ptr;
    cout << **city_ptr_ptr << endl; // value of city
}

int main() {
    address();
    pointer();
    pointertopointer();
    return 0;
}