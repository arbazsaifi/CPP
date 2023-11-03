#include <iostream>
using namespace std;

int main() {
    int savings;

    cout<<"Enter Your Savings : ";
    cin>>savings;

    if(savings <1000) {
        cout<<"Go With Friends \n";
    if (savings <=500) {
        cout<<"Go with Chai with Friends \n";
    }
    else {
        cout<<"Go on Party with Friends\n ";
    }

    }
    else if(savings <= 2000) {
        cout <<"Go With Neha C \n" ;
        if(savings <= 1500) {
            cout<<"Go with Neha on Cafe \n";
        }
        else {
            cout<<"Go with Neha on Trip \n";
        }
    }
    else 
    {
        cout << "Go With Rashmi R \n" ;
        if(savings <=2500) {
            cout<<"Go with Rashmi on Trip";
        }
        else {
            cout<<"Go with Rashmi on Shoping\n";
        }
    }

    return 0;
}