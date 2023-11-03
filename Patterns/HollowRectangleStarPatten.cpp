#include <iostream>
using namespace std;

int main()
{

    int row,cols;
        cout << "Enter Rows : ";
        cin >> row;
        cout << "Enter Cols : ";
        cin >> cols;

    for(int i=1; i<=row; i++) {
        for(int j=1; j<=cols; j++) {
            if(i==1 || j==1 || i==row || j==cols) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }



    return 0;
}