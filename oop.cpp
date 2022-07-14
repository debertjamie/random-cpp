#include <iostream>

using namespace std;

class Kelas {
    public:
        // Constructor
        Kelas(int h = 0, int w = 0) {
            height = h;
            width = w;
        }
        void setHeight(int h) {
            height = h;
        };
        void setWidth(int w) {
            width = w;
        }
        int getArea() {
            return height * width;
        }
    private:
        int height;
        int width;
};

class Calculate: public Kelas {
    public:
        void nothing() {}
};

int main() {
    Calculate cal;
    cal.setHeight(16);
    cal.setWidth(23);
    cout << "Area: " << cal.getArea() << endl;
    return 0;
}