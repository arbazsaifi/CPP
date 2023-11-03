#include <iostream>
using namespace std;

class A {
    int a, b;

    public :
        A(int x, int y) {
            a = x;
            b = y;
        }

        void show() {
            cout << "A = " << a << ", " << "B = " << b << endl;
        }

        void operator -() {
            a = -a;
            b = -b;
        }

};

int main() {

    A mm(-10, 20);
    mm.show();

    -mm;
    mm.show();

    return 0;

}