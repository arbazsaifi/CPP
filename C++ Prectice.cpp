#include <iostream>
#include <iomanip>
using namespace std;

// int c = 45; 
// int a = 40; ///These c and a are Global Variables./// they can Accessed through ::c and ::a/

// int main() {

//     int a, b, c;
//     float d = 3.89;
//     double e = 3.89;

//     cout << "Enter Number A : ";
//     cin >> a;

//     cout << "Enter Number B : ";
//     cin >> b;

//     c = a + b;

//     cout << "The Sum is : " << c << endl;
//     cout << "Global Veriable = " << ::c << endl;

//     cout << endl;

//     cout << "Size = " << d << endl;
//     cout << "Size = " << e << endl;


// ************* Reference Variable *****************

//     int x = 3;
//     int & y = x;

//     cout << x << endl;
//     cout << y << endl;

// ********************** Typecasting ****************

//     float x = 3.667;

//     cout << x << endl ;
//     cout << (int) << endl ;


// ******************** Changing Value of Variable ****************************
//     int a = 3;
    
//     cout << "Value of A was = " << a << endl;

//         a = 5 ;

//     cout << "Value of A is = " << a << endl;

//     cout << "Value of Global A = " << ::a << endl;


// ******************** Constant Variable ****************************

//     const int a = 5;

//     a = 45       //you will get an error because a is constant (const).

//     cout << "Value of A = " << a << endl;


// ******************** Manipulators ****************************

//     int a = 5, b = 3 , c = 220;

//     cout << "The Value without setw is : " << a << endl;
//     cout << "The Value without setw is : " << b << endl;
//     cout << "The Value without setw is : " << c << endl;
    
//     cout << "The Value with setw is : " << setw(8) << a << endl;        // with header file <iomanip>
//     cout << "The Value with setw is : " << setw(8) << b << endl;        // contain space of 4 digit to manipulate Numbers 
//     cout << "The Value with setw is : " << setw(8) << c << endl;
    
// ******************** Operator Precedence ****************************
// ******************** Nasted If Else ****************************

//     int age;

//     cout << "Tell me Your Age : ";
//     cin >> age;

//     if (( age < 18 ) && ( age > 0)) {

//         cout << "You Can Not Come to My Party" << endl;
//     }
//     else if( age == 18 ) {
//         cout << "You can Come with Pass" << endl;
//     }
//     else {
//         cout << "you can Come to My Party without Pass" << endl;
//     }

// ******************** Switch Case ****************************

// int month;
// cout << "Enter Month : ";
// cin >> month;

// switch (month) {
//     case 1: 
//         cout << "January" << endl;
//     break;

//     case 2:
//         cout << "February" << endl;
//     break;

//     case 3:
//         cout << "March" << endl;
//     break;

//     case 4: 
//         cout << "April" << endl;
//     break;

//     case 5:
//         cout << "May" << endl;
//     break;

//     case 6: 
//         cout << "June" << endl;
//     break;

//     case 7: 
//         cout << "July" << endl;
//     break;

//     case 8:
//         cout << "August" << endl;
//     break;

//     case 9: 
//         cout << "September" << endl;
//     break;

//     case 10:
//         cout << "October" << endl;
//     break;

//     case 11:
//         cout << "November" << endl;
//     break;

//     case 12:
//         cout << "December" << endl;
//     break;

//     default :
//         cout << "Wrong Input" << endl;
// }

// ************ For Loop *********************

// int tab,num,a;

// cout << "Enter Number : ";
// cin >> num;

// for (a = 1; a <= 10 ; a++ ) {
//     tab = num * a;

//     cout << num << "X" << a << "=" << tab << endl;
// }

// ************ While Loop *********************
// int a = 1;

// while ( a <= 10 ) {
//     cout << "Hello " << a << endl;
//     a++;
// }


// ************ do While Loop *********************

// int a = 1;

// do {
//     cout << "Hello " << a << endl;
//     a++;
// }
// while (a <= 10);

// ************ Break Statement *********************

// for ( int i = 0; i <= 6; i++) {

//      if(i == 4) {
//         break;
//       }

//     cout << "Hello " << i << endl;
    
// }

// ************ Continue Statement *********************

// for ( int i = 0; i <=10; i++) {

//     if ( i == 3) {
//         continue;
//     }
//     cout << "Hello " << i << endl;
    
// }

// ************ Pointers *********************
// **Pointer is a Variable which holdes Address of Another Variable


// int a = 45; 
// int* b = &a;   // int* is Pointer Data Type

// cout << a << endl;  // Simple Print Value of a
// cout << &a << endl; // &a = Ampercent of a = Address of a
// cout << b << endl;  // b = pointer holdes address of a
// cout << *b << endl;  // *b = Value of Pointer 


// ************ Pointer to Pointer *********************

// int a = 56;
// int* b = &a;
// int** c = &b;

// cout <<  b << endl;
// cout << * b << endl;
// cout << * c << endl;
// cout << ** c << endl;

// ************ Arrays *********************

// int marks[100] = {67, 82, 88, 98};

// cout << marks[0] << endl;
// cout << marks[1] << endl;
// cout << marks[2] << endl;
// cout << marks[3] << endl;

// ************ Array with Loop ("for Loop" with Single Iterator) *********************

// int mathMarks[] = {55, 62, 82, 88, 89, 92};

//     cout << "The Mathematics Marks are :" << endl;

//     for (int i = 0; i < 6; i++) {
        
//         cout << "Marks is " << mathMarks[i] << endl;
//     }


// ************ Array with Loop ("for Loop" with Double Iterator) *********************

// int mathMarks[] = {55, 62, 82, 88, 89, 92};

//     cout << "The Mathematics Marks are :" << endl;

//     for (int i = 0, j = 1 ; i < 6, j < 7; i++, j++) {
        
//         cout << "Marks "<< j << " is " << mathMarks[i] << endl;
//     }

// ************ Array with Loop ("while Loop with Single Iterator") *********************

// int marks[] = {82, 83, 89, 91, 98};

// cout << "The Mathematics Marks : " << endl;

// int i = 0;

// while ( i < 5) {

//     cout << "Marks is " << marks[i] << endl;
//     i++;
// }

// ************ Array with Loop ("while Loop with Double Iterator") *********************

// int marks[] = {82, 83, 89, 91, 98};

// cout << "The Mathematics Marks : " << endl;

// int i = 0, j = 1;

// while (i<5, j<=5) {

//     cout << "Marks " << j << " is " << marks[i] << endl;
//     i++;
//     j++;
// }

// ************ Array with Loop ("do-while Loop with Single Iterator") *********************

// int marks[] = {82, 83, 89, 91, 98};

// cout << "The Mathematics Marks : " << endl;

// int i = 0;

// do {
//     cout << "Marks is " << marks[i] << endl;
//     i++;
// }
// while (i<5);

// ************ Array with Loop ("do-while Loop with Double Iterator") *********************

// int marks[] = {82, 83, 89, 91, 98};

// cout << "The Mathematics Marks : " << endl;

// int i=0;
// int j=1;

// do {
//     cout << "Marks " << j << " is " << marks[i] << endl;
//     i++, j++;
// }
// while(i<5, j<=5);


// ************ Pointers and Arrays (Array using Pointer or Vice Versa) *********************

// int marks[] = {89, 82, 88, 76, 77};

// int* pointer = marks;   //pointer declaration

// cout << "The Mathematics Marks : " << endl;

// for ( int i = 0; i<5; i++) {

//     cout << "Marks is " << *(pointer+1) << endl;
// }

// ************ Struct (Only Output) *********************

// struct employee {
//     int eId;
//     char favChar;
//     float salary;
// };


// int main() {
    
//     struct employee mayank;
//     mayank.eId = 101;
//     mayank.favChar = 'm';
//     mayank.salary = 56000;

//     struct employee shubham;
//     shubham.eId = 102;
//     shubham.favChar = 's';
//     shubham.salary = 78000;

//     struct employee rajesh;
//     rajesh.eId = 103;
//     rajesh.favChar = 'r';
//     rajesh.salary = 152000;

//     cout << "Mayank" << endl;
//     cout << mayank.eId << endl;                     //Print of Mayank Data.
//     cout << mayank.favChar << endl;
//     cout << mayank.salary << endl << endl;

//     cout << "Shubham" << endl;
//     cout << shubham.eId << endl;                    //Print of Shubham Data.
//     cout << shubham.favChar << endl;
//     cout << shubham.salary << endl << endl;

//     cout << "Rajesh" << endl;
//     cout << rajesh.eId << endl;                     //Print of Rajesh Data.
//     cout << rajesh.favChar << endl;
//     cout << rajesh.salary << endl << endl;      

//     return 0;
// }  

// ************ Struct (with Input and Output) ********************* ///// its not  complete /// its complete after string study.

// struct employee {
//     int empName;    //// after string...
//     int empId;
//     int empSalary;
// };

// int main() {

//     struct employee xyz;

//     cout << "Enter Employee Name : ";
//     cin >> xyz.empName;

//     cout << "Enter Employee Id : ";
//     cin >> xyz.empId;

//     cout << "Enter Empoyee Salary : ";
//     cin >> xyz.empSalary;

//     cout << "ID of " << xyz.empName << " is " << xyz.empId << " and Salary is " << xyz.empSalary << endl;
    
//     return 0;
// }


// ************ Union /// Union use for Print only one Value at a Time *********************

// union car{
//     int bmw;
//     int rollsRoyce;
//     int rangeRover;
// };

// int main() {

//     union car pbx0008;

//     pbx0008.bmw = 8000;
//     pbx0008.rangeRover = 7000;    // its overwritted // its before value is 8000 and now this is 7000

    
//     cout << pbx0008.rangeRover << endl;   
//     cout << pbx0008.bmw << endl;           //if we Print pbx0008.bmw its print 7000 because its over writted on "bmw" value

//     return 0;
// }


// ************ Enum *********************

// enum Meal {breakfast, lunch, dinner};  // breakfast = 0; lunch = 1; dinner = 2;

// Meal m1 = breakfast;
// Meal m2 = lunch;
// Meal m3 = dinner;

// cout << m1 << endl;
// cout << m2 << endl;
// cout << m3 << endl;

// ************ Functions and Function Prototype *********************

// int sum(int a, int b);         // int a and int b is Acceptable as only sum(int, int)


// int main() {

//     int x, y;
    
//     cout << "Enter First Number : ";  
//     cin >> x;
//     cout << "Enter Second Number : " ;
//     cin >> y ; 

//     cout << "The Sum of First and Second Number is : " << sum(x,y) << endl;   // Output


// return 0;
// }


// int sum(int a, int b) {                       //Creating a Function
                                            
//     int c = a + b;                           

//     return c;
// }

//*****************PRECTICE********************
// void swapPointer(int *a , int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 5;
//     int y = 6;

//     cout << "The Value of x is " << x << " and the Value of y is " << y << endl;
    
//     //After Swap
//     swapPointer(&x,&y);
//     cout << "The Value of x is " << x << " and the Value of y is " << y << endl;
     
//     return 0;

// }

// ************ Static (Variable) *********************

// int product(int x, int y) {

//     static int c = 0;     //This Static c is Excecuted only One Time.

//     c = c + 1;            //This time c will be not 0 because satic variable only Once.

//     return x*y+c;    
// }

// int main() {

//     int a = 2;
//     int b = 3;

//     cout << "Product of Two Number is : " << product(a,b) << endl;  
//     cout << "Product of Two Number is : " << product(a,b) << endl;
//     cout << "Product of Two Number is : " << product(a,b) << endl;
//     cout << "Product of Two Number is : " << product(a,b) << endl;
//     cout << "Product of Two Number is : " << product(a,b) << endl;

//     return 0;
// }

// ************ Inline Function ************* inline function, Function ko Call nhi krta, 
// ****************************************** Call ki jagha Sidha pure Function ko paste kr deta hai.
// https://www.youtube.com/watch?v=coCgEWevFOk


// inline void hello(void) {
//     cout << "Hello" << endl;
// }

// int main() {

//     hello();                //function calling but its not calling because of inline function its pasting

//     return 0;
// }
 

// ************ Default Arguments *********************

// float intrst(int currentMoney, float interest = 1.05) {    //here is default Argument is interest = 1.05 
                                                              //default Arguments always be in Right Hand Position.

//     return currentMoney * interest;
// }

// int main () {

//     int money = 100000;

//     cout << "Money Before Interest : " << money << endl;
//     cout << "Money After Interest : " << intrst(money) << endl;

//     return 0;
// }

// ************ Const keyword *********************


// float area(float r, const float p = 3.14) {             //here is const keyword its use for constant value of variable

//     return p * r * r;
// }

// int main() {

//     float r;

//     cout << "Enter Radius of Circle : ";
//     cin >> r;

//     cout << "The Area of Circle is " << area(r) << endl;

// return 0;
// }

// ************ Sum of First n Natural Numbers *********************
// int main() {

//     int num, sum = 0;

//     cout << "Enter Number : ";
//     cin >> num;

//     for (int i = 1; i <= num; i++) {
        
//         sum = sum + i;
//     }

//     cout << "The Sum is " << sum << endl;

//     return 0;
// }

// ************ Sum of First n Natural Numbers (With Function) *********************

// int sum(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum = sum + i;
//     }
//     return sum;
// }

// int main() {

//     int num;

//     cout << "Enter Number : ";
//     cin >> num;

//     cout << "The Sum is " << sum(num) << endl;

//     return 0;
// }

// ************ Sum of First n Natural Numbers Fectorial *********************

int main() {

cout << "Hello World " << endl; 

    return 0;
}