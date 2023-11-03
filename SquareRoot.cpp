// Find Square Root of Number
#include <iostream>
#include <math.h>
using namespace std;

float square(double n);
int main()
{
    double n;
    cout<<"Enter a Number : ";
    cin>>n;
    cout<<"Square is "<< square(n) << endl;

    return 0;
}

float square(double n)
{
    return sqrt(n);
}