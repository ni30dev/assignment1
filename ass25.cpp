#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    int r, i;

public:
    void setData(int a, int b)
    {
        r = a;
        i = b;
    }
    void showData()
    {
        cout << r << "+" << i << "i";
    }
};

// ####################################################################

class Time
{
private:
    int h, m, s;

public:
    void setTime(int x, int y, int z)
    {
        h = x;
        m = y;
        s = z;
    }

    void showTime()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
};

// ####################################################################

class Factorial
{
public:
    int fact(int);
};

int Factorial::fact(int x)
{

    if (x == 1)
    {
        return 1;
    }
    return x * fact(x - 1);
}

// ####################################################################
class Area
{
public:
    float circleArea(float dia)
    {
        return 3.14 * dia;
    }

    float rectangleArea(float a, float b)
    {
        return a * b;
    }
};

// ####################################################################

class Square
{
    static int count;

public:
    void sqr(int x)
    {
        count++;
        cout << "Square of " << x << ": " << x * x << endl;
    }
    void counting()
    {
        cout << "Function executed total " << count << " times" << endl;
    }
};

int Square::count;

// ####################################################################

class Largest
{
public:
    int getLargest(int x, int y, int z)
    {
        if (x > y && x > z)
        {
            return x;
        }
        else if (y > z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
};

// ####################################################################

class Reverse
{
public:
    int getReverse(int num, int length)
    {
        int res = 0;
        for (int i = 0; i < length; i++)
        {
            int digit = num % 10; // 394 % 100 = 4
            num = num / 10;       // 394/10 = 39
            res = res * 10 + digit;
        }
        return res;
    }
};

// -------------------------------------------------------------------------------------

int main()
{
    // Q1:
    Complex c1, c2;
    c1.setData(5, 8);
    c1.showData();

    cout << "\n-----------------------------------" << endl;

    // Q2:
    Time t1, t2;
    t1.setTime(10, 11, 30);
    t2.setTime(11, 21, 40);
    t1.showTime();
    t2.showTime();

    cout << "\n-----------------------------------" << endl;

    // Q3:
    Factorial f1;
    cout << f1.fact(5);

    cout << "\n-----------------------------------" << endl;

    // Q4: Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.
    Largest l1;
    cout << "Largest: " << l1.getLargest(1, 2, 3);
    cout << "Largest: " << l1.getLargest(2, 1, 3);
    cout << "Largest: " << l1.getLargest(3, 1, 2);
    cout << "Largest: " << l1.getLargest(3, 2, 1);
    cout << "\n-----------------------------------" << endl;

    cout << "\n-----------------------------------" << endl;
    // Q5: Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.
    Reverse r1;
    cout << "Reverse: " << r1.getReverse(73194,5) << endl;

    // Q6: Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.
    Square s1;
    s1.sqr(5);
    s1.sqr(4);
    s1.sqr(6);
    s1.counting();

    cout << "\n-----------------------------------" << endl;

    /*
            Q7 SAME AS Q4
            Q8 & Q9 COVERED IN Q10
    */

    // Q10: Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.
    Area a1, a2;
    cout << a1.circleArea(10) << endl;
    cout << a1.rectangleArea(13, 5) << endl;
    cout << a2.rectangleArea(25, 10) << endl;

    cout << "\n-----------------------------------" << endl;

    cout << endl;
    return 0;
}
