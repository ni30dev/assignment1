#include <iostream>
#include <cmath>
using namespace std;

void prime(int);
int highInDigit(int, int);
int x_pow_y(int, int);
void swapRef(int *, int *);
void swapAdd(int &, int &);
int sum(int, int, int = 0);

float area(float);
float area(int, int);
float area(float, float);

int largest(int, int);
float largest(float, float);
int sumAdvance(int ,int);
double sumAdvance(double ,double);
int main()
{
    
    // Q1 : Define a function to check whether a given number is a Prime number or not.
    prime(17);
    prime(18);



    // Q2 : Define a function to find the highest value digit in a given number.
    cout << highInDigit(33418,5);

    // Q3 : Define a function to calculate x raised to the power y.
    cout << x_pow_y(2, 6);

    // Q6 : Define a function to swap data of two int variables using call by reference
    int x =5, y=6;
    // swapRef(&x,&y);
    swapAdd(x,y);
    cout <<x<<" "<<y;


    // Q 7: Write a function using the default argument that is able to add 2 or 3 numbers.
    cout << sum(2, 5);

    // Q 8: Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
    float diameter = 10;
    int length = 20;
    int breadth = 15;
    float base = 20;
    float perpendicular = 10;

    cout << "Area of circle with diameter "<< diameter <<" : " <<area(diameter)<<endl;
    cout << "Area of reactangle with length- "<<length <<"breadth- "<<" : "<<breadth  <<area(length, breadth)<<endl;
    cout << "Area of triangle with base- " <<base <<"perpendicular- "<<perpendicular <<" : " <<area(base, perpendicular)<<endl;


// Q9 : Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
    int a1 = 5, a2=7;
    float b1 =5.7, b2 = 2.9;

    cout << "Largest : "<<largest(a1,a2)<<endl;
    cout << "Largest : "<<largest(b1,b2);
   


// Q10 : Write functions using function overloading to add two numbers having different data types
    cout << sumAdvance(4,8)<<endl;
    cout << sumAdvance(3.3, 6.45);
    
    
    cout << endl;
    return 0;
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int sumAdvance(int x, int y)
{
    return x+y;
}

double sumAdvance(double x, double y)
{
    return x+y;
}

int largest(int x, int y)
{
    return x>y? x : y;
}
float largest(float x, float y)
{
    return x>y? x : y;
}

float area(float d)
{
    return 3.14*d;
}

float area(int l, int b){
    return l*b;
}

float area(float b, float p )
{
    return b*p*0.5;
}

int sum(int x, int y, int z)
{
    return x + y + z;
}

void swapAdd(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapRef(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int x_pow_y(int x, int y)
{
    int res = x;
    for (int i = 0; i < y - 1; i++)
    {
        res = res * x; // 10*10
        // cout << res <<endl;
    }
    return res;
}

int highInDigit(int num, int length)
{
    int res = 0;
    for (int i = 1; i <= length; i++)
    {
        int digit = num % 10; // 394 % 100 = 4
        num = num / 10;       // 394/10 = 39
        // cout << digit << endl;
        // cout << num << endl;
        res = digit > res ? digit : res;
    }
    return res;
}

void prime(int num)
{
    bool isPrime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    isPrime ? cout << "Prime\n" : cout << "Regular\n";
}
