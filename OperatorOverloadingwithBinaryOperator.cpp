#include <iostream>
using namespace std;

class A {

    private :
        int a, b;
    public :
        A(int x, int y) {
            a = x;
            b = y;
        }

        void show() {
            cout << "A = " << a << ", " << "B = " << b << endl;
        }

    A operator +(A c) {
        A t;
        t.x = x+c.x;
        t.y = y+c.y;
        
}

};