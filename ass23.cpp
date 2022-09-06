#include <iostream>

using namespace std;

int main()
{
    /*
    // Q1 : "Write a C++ program to print Hello MySirG on the screen."
    cout << "Hello MySirG \n";

    cout << "\n-----------------------\n\n";
    // Q2 Write a C++ program to print Hello on the first line and MySirG on the second lineusing endl.
    cout << "Hello";
    cout << endl;
    cout << "MySirG";

    cout << "\n-----------------------\n\n";
    // Q3 Write a C++ program to calculate the sum of two numbers.
    int a,b;
    cout << "Enter two number";
    cin >> a >>b;
    cout << "Sum of "<<a <<" "<<b <<" : "<<a+b;


    cout << "\n-----------------------\n\n";
    // Q4 Write a C++ program to calculate the area of a circle.
    float d;
    cout << "Enter diameter of circle";
    cin >> d;
    cout << "Area of circle with radius "<<d <<" : "<<3.14*d;

    cout << "\n-----------------------\n\n";
    // Q5 Write a C++ program to calculate the volume of a cuboid.
    float side;
    cout << "Enter side of cuboid";
    cin >> side;
    cout << "Volume of cuboid with side "<<side <<": " <<side*side*side;

    cout << "\n-----------------------\n\n";
    // Q6 Write a C++ program to calculate an average of 3 numbers.
    float a,b,c, avg;
    cout << "Enter 3 numbers";
    cin >> a>>b>>c;
    avg = (a+b+c)/3;
    cout << "Average of given numbers: "<<avg;

    cout << "\n-----------------------\n\n";
    // Q7 Write a C++ program to calculate the square of a number
    int num;
    cout <<"Enter a number";
    cin >> num;
    cout << "Square of "<<num <<": "<<num*num;


    cout << "\n-----------------------\n\n";
    // Q8 Write a C++ program to swap values of two int variables without using third variable.
    int a, b; //3,5
    cout << "Enter two number for swaping";
    cin >> a>>b;
    cout << "a :"<<a <<" b :"<<b<<endl;
    a = a+b;  // a --> 8
    b = a-b; // b = 8-5 = 3
    a= a-b; // 8-3 =5
    cout << "a :"<<a <<" b :"<<b;


    cout << "\n-----------------------\n\n";
    // Q9 Write a C++ program to find the maximum of two numbers.
    int a,b,max;
    cout <<"Enter Two number";
    cin >>a>>b;
    max = a>b?a:b;
    cout <<"Max :" << max;

    */

    cout << "\n-----------------------\n\n";
    // Q10 Write a C++ program to add all the numbers of an array of size 10.
    int arr[10]= {10,2,3,4,5,6,7,8,9,10};
    int sum =0;
    for (int i = 0; i < 10; i++)
    {
        sum+=arr[i];
    }
    cout <<"Sum of given array: " <<sum;

    

    cout << endl;
    return 0;
}