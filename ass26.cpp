#include <iostream>
using namespace std;

/*
    Define a class Complex to represent a complex number with instance variables a and
    b to store real and imaginary parts. Also define following member functions
        a. void setData(int,int)
        b. void showData()
        c. Complex add(Complex)
*/

class Complex
{
private:
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void showData()
    {
        cout << real << "+" << imaginary << "i";
    }
    Complex add(Complex C)
    {
        Complex temp;
        temp.real = real + C.real;
        temp.imaginary = imaginary + C.imaginary;
        // cout << temp.real<<"+"<<temp.imaginary<<"i";
        return temp;
    }
};

/*
Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
    a. void setTime(int,int,int)
    b. void showTime()
    c. void normalize()
    d. Time add(Time)
*/
class Time
{
private:
    int h, m, s;

public:
    void setTime(int hour, int minute, int second)
    {
        h = hour;
        m = minute;
        s = second;
    }

    void showTime()
    {
        cout << h << ":" << m << ":" << s;
    }

    Time addTime(Time T)
    {
        Time addedTime;
        addedTime.h = h + T.h;
        addedTime.m = m + T.m;
        addedTime.s = s + T.s;
        return addedTime;
    }
};

// Define a class Cube and calculate Volume of Cube and initialise it using constructor.
class Cube
{
private:
    int side;

public:
    Cube(int s)
    {
        side = s;
    }
    int volume()
    {
        return side * side * side;
    }
};

// Define a class Counter and Write a program to Show Counter using Constructor.
class Counter
{
private:
    static int count;

public:
    Counter(int c)
    {
        count = c;
        count++;
    }
    Counter()
    {
        // count=0;
        count++;
    }
    int getCount() // default behaivour
    {
        return count++;
    }
    int getCount(int c)
    { // custom counter start from given num
        count = c;
        return count++;
    }
};
int Counter::count = 1;

// Define a class Date and write a program to Display Dateand initialise date object using Constructors.
class Date
{
private:
    int day, month, year;

public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    Date()
    {
    }

    void showDate()
    {
        cout << day << "-" << month << "-" << year << endl;
    }
    void showDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
        cout << day << "-" << month << "-" << year << endl;
    }
};

// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
class Student
{
private:
    string name;
    int standard, age;

public:
    Student(string n, int s, int a)
    {
        name = n;
        standard = s;
        age = a;
    }
    void showDetails()
    {
        cout << "Name: " << name << " Standard: " << standard << " Age: " << age << endl;
    }
};

// Define a class Box and write a program to enter length, breadth and height and  initialise
//  objects using constructor also define member functions to calculate volume  of the box.
class Box
{
private:
    int length, breadth, height;

public:
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    void getVolume()
    {
        int vol = length * breadth * height;
        cout << "Volume : " << vol << endl;
    }
};

// Define a class Bank and define member functions to read principal , rate of interest and year. Another  
// member functions to calculate simple interest and display it.Initialise all details using constructor.
class Bank
{
private:
int pricipal;
float year, roi;

public:
Bank(int p, float y, float r)
{
    pricipal = p;
    roi = r;
    year = y;    
}

void get_roi(){
    cout << roi<<endl;
}

void get_principal(){
    cout << pricipal<<endl;
}

void get_year(){
    cout << year<<endl;
}

float interest (){
    float i =( pricipal * roi * year )/ 100;
    return i;
}

};

// Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
class StaticCount
{
    public:
    static int count;

    void increment(){
        // count++;
        cout << count ++;
    }
};

int StaticCount::count=0;

int main()
{
    /*

    // Q1:
    Complex c1, c2, c3;
    c1.setData(3,5);
    c2.setData(2,4);
    c1.showData();
    c3 = c1.add(c2);
    c3.showData();

    // Q2:
    Time t1, t2, t3;
    t1.setTime(11, 25, 40);
    t2.setTime(1, 10, 10);
    t1.showTime();
    cout << endl;
    t3 = t1.addTime(t2);
    t3.showTime();

    // Q3:
    Cube c1(4), c2(5);
    cout << c1.volume() << endl;
    cout << c2.volume();

    // Q4:
    Counter counter1;
    cout << counter1.getCount(5);
    cout << counter1.getCount();
    cout << counter1.getCount();
    cout << endl;

    Counter counter2(10);
    cout << counter2.getCount();
    cout << counter2.getCount();
    cout << counter2.getCount();
    cout << endl;

    Counter c2;
    cout << c2.getCount();
    cout << c2.getCount();
    cout << c2.getCount();
    cout << endl;

    Counter counter3;
    cout << counter3.getCount();
    cout << counter3.getCount();
    cout << counter3.getCount();
    cout << endl;

// Q5:
    Date d1(10, 07, 2017);
    d1.showDate();

    Date d2;
    d2.showDate(8, 11, 1998);

// Q6:
Student s1("Nitish", 8, 14);
s1.showDetails();

// Q7:

Box b1(10, 7, 8), b2(8, 2, 3);
b1.getVolume();
b2.getVolume();

// Q8:
Bank b1(1000,2,2);
b1.get_principal();
b1.get_roi();
b1.get_year();
cout << b1.interest();


*/

// Q10
StaticCount counter1;
counter1.increment();
counter1.increment();
counter1.increment();
counter1.increment();

    cout << endl;
    return 0;
}