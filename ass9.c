#include <stdio.h>

void printMonth(int);
void calc();
void uniqueGreet(int);
void convert(int);
void isLeap(int);
float bill(int);
int posNeg(int);
int main()
{
    printf("\n##### Q1 #####\n");
    printf("Write a program which takes the month number as an input and display number of days in that month.\n");
    printMonth(3);

    printf("\n\n##### Q2 #####\n");
    /*
    Write a menu driven program with the following options:
        a. Addition
        b. Subtraction
        c. Multiplication
        d. Division
        e. Exit
    */
    // calc();

    printf("\n\n##### Q3 #####\n");
    printf("Write a program which takes the day number of a week and displays a unique greeting message for the day.\n");
    // uniqueGreet(3);

    printf("\n\n##### Q5 #####\n");
    /*
    Convert the following if-else-if construct into switch case:
         if(var == 1)
         System.out.println("good");
         else if(var == 2)
         System.out.println("better");
         else if(var == 3)
         System.out.println("best");
         else
         System.out.println("invalid");
    */
    // convert(91);

    printf("\n\n##### Q7 #####\n");
    /*
    Program to take the value from the user as input electricity unit charges
    and calculate total electricity bill according to the given condition . Using
    the switch statement.
        For the first 50 units Rs. 0.50/unit
        For the next 100 units Rs. 0.75/unit
        For the next 100 units Rs. 1.20/unit
        For units above 250 Rs. 1.50/unit
    */

    printf("Bill : %f", bill(100));

    printf("\n\n##### Q8 #####\n");
    printf("Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.\n");
    posNeg(4);
    printf("\n\n");
    return 0;
}

void printMonth(int monthNum)
{
    printf("Month is ");
    switch (monthNum)
    {
    case 1:
        printf("Jan");
        break;
    case 3:
        printf("Mar");
        break;
    case 4:
        printf("Apr");
        break;
    case 5:
        printf("May");
        break;
    default:
        printf("Invalid");
        break;
    }
}

void calc()
{
    float a, b, s;
    char d;

    printf("choose an operation btwn + - * /  : ");
    scanf("%c", &d);
    printf("enter two numbers ");
    scanf("%f%f", &a, &b);
    switch (d)
    {
    case '+':
        s = a + b;
        break;
    case '-':
        s = a - b;
        break;
    case '*':
        s = a * b;
        break;
    case '/':
        s = a / b;
        break;
    default:
        printf("enter a valid operation !");
        break;
    }

    printf("%.1f %c %.1f = %.1f", a, d, b, s);
}

void uniqueGreet(int day)
{
    switch (day)
    {
    case 1:
        printf("Oye it's Monday !");
        break;
    case 2:
        printf("Jai Bajrang Bali !");
        break;
    case 3:
        printf("waoo Wednesday !");
        break;
    case 4:
        printf("Narayan Naraayn !");
        break;
    case 5:
        printf("Fun Friday !");
        break;
    case 6:
        printf(" Saturday happiness!");
        break;
    case 7:
        printf("Sunday Enjoy.. !");
        break;
    default:
        break;
    }
}

void convert(int x)
{
    switch (x)
    {
    case 1:
        printf("Good\n");
        break;
    case 2:
        printf("Better\n");
        break;
    case 3:
        printf("Best\n");
        break;
    default:
        printf("Invalid\n");
        break;
    }
}

void isLeap(int year)
{
    int div = year % 4;

    switch (div)
    {
    case 0:
        div = year % 400;
        switch (div)
        {
        case 0:
            printf("Leap Year");
            break;
        default:
            printf("Non Leap Year");
            break;
        }
        break;
    default:
        printf("Non Leap Year");
        break;
    }
}

float bill(int unit) // 320
{
    float sum = 0.0;
    int rest;

    if (unit < 50)
    {
        sum = unit * 0.5;
        return sum * 1.2;
    }
    if (unit <= 150)
    {
        sum = 50 * 0.5 + (unit - 50) * 0.75; // 120 --> 50 , 70
        return sum * 1.2;
    }
    if (unit <= 250)
    {
        sum = 50 * 0.5 + 100 * 0.75 + (unit - 150) * 0.75;
        return sum * 1.2;
    }
    if (unit > 250)
    {
        sum = 50 * 0.5 + 100 * 0.75 + 100 * 1.2 + (unit - 250) * 1.5;
        return sum * 1.2;
    }
}

int posNeg(int num)
{
    int res;
    res = num > 0 ? 1 : -1;
    switch (res)
    {
    case -1:
        printf("%d", num * -1);
        break;
    default:
        printf("%d", num * -1);
        break;
    }
}