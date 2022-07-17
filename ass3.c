
#include <stdio.h>

void checkPositveNegative(int num)
{
    if (num < 0)
    {
        printf("Negative ");
    }
    else
    {
        printf("Positive ");
    }
}

void divisible5(int num)
{
    // num%5==0 ? (printf("ok")):(printf("no"));
    printf(num % 5 == 0 ? "Divisible" : "Not Devisible");
}

void oddEven(int num)
{
    printf(num % 2 == 0 ? "Even Number" : "Odd Number");
}

void oddEven2(int num)
{
    // convert to binary
    // if right most is 1 then odd if not even
}

void check3digit(float num)
{
    if (num / 3 <= 333 && num / 3 >= 33.3)
    {
        printf("Given no. is 3 digit no.");
    }
    else
    {
        printf("Not 3 digit");
    }
}

void biggestNum(int num1, int num2)
{
    float res;
    res = num1 / num2;
    if (num1 % num2 == 0)
    {
        printf("Both no. are same, %d", num1);
    }
    else if (res > 1)
    {
        printf("%d is bigger,", num1);
    }
    else
    {
        printf("%d is bigger,", num2);
    }
}

void leapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a Leap Year.", year);
    }
    else if (year % 400 == 0)
    {
        printf("%d is a century Leap Year.", year);
    }
    else
    {
        printf("%d is a Common Year.", year);
    }
}

void graeatestAmong3(int num1, int num2, int num3)
{
    int greatest = num1;
    if (num2 > num1 && num2 > num3)
    {
        greatest = num2;
    }
    else if (num3 > num2 && num3 > num1)
    {
        greatest = num3;
    }

    printf("Greatest among %d %d %d is %d", num1, num2, num3, greatest);
}

void profitLoss()
{
    float cp, sp, pl;
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &cp, &sp);
    if (cp - sp)
    {
        if (cp < sp)
        {
            pl = (sp - cp) * 100 / cp;
            printf("Profit has been made of %.2f %%", pl);
        }
        else
        {
            pl = (cp - sp) * 100 / cp;
            printf("There is loss of %.2f %%", pl);
        }
    }
    else
    {
        printf("Bhai kya kar raha hai..");
    }
}

void passFail(int marks)
{
    printf((marks > 33 && marks <= 100) ? "You are Pass" : "You are Fail");
}

void checkCase(int c)
{
    if (c >= 65 && c <= 90)
    {
        printf("UPPERCASE");
    }
    if (c >= 97 && c <= 122)
    {
        printf("lowercase");
    }
}

void divBy3_5(int num)
{
    printf(num % 3 == 0 && num % 5 == 0 ? "True" : "False");
}

divBy7or3(int num)
{
    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("%d is devisible by 7 and 3 both.", num);
    }
    else if (num % 7 == 0)
    {
        printf("%d is devisible by 7", num);
    }
    else if (num % 3 == 0)
    {
        printf("%d is devisible by 3", num);
    }
    else
    {
        printf("Not devisible by either 3 or 7");
    }
}

void positiveNegativeZero(int num)
{
    if (num)
    {
        printf(num > 0 ? "Positive Number" : "negative Number");
    }
    else
    {
        printf("Zero Number");
    }
}

void checkChar(char character)
{
    if (character > 47 && character < 58)
    {
        printf("You entered a Number");
    }
    else if (character > 64 && character < 91)
    {
        printf("You entered a Uppercase");
    }
    else if (character > 96 && character < 123)
    {
        printf("You entered a Lowercase");
    }
    else
    {
        printf("You entered a special character");
    }
}

void daysInMonth(int month)
{
    if (month == 2)
    {
        printf("28 or 29 Days");
    }
    else if (month < 8)
    {
        if (month % 2 == 1)
        {
            printf("31 Days");
        }
        else
        {
            printf("30 Days");
        }
    }
    else if (month > 7)
    {
        printf(month % 2 == 0 ? "31 Days" : "30 Days");
    }
}

int main()
{
    printf("\n##### Q1 #####\n");
    // Write a program to check whether a given number is positive or non-positive.
    checkPositveNegative(5);

    printf("\n\n##### Q2 #####\n");
    // Write a program to check whether a given number is divisible by 5 or not
    divisible5(651);

    printf("\n\n##### Q3 #####\n");
    // Write a program to check whether a given number is an even number or an odd number.
    oddEven(651);

    printf("\n\n##### Q4 #####\n");
    // Write a program to check whether a given number is an even number or an odd number without % operator.
    oddEven2(651);

    printf("\n\n##### Q5 #####\n");
    // Write a program to check whether a given number is an even number or an odd number without % operator.
    check3digit(999);

    printf("\n\n##### Q6 #####\n");
    // Write a program to print greater between two numbers. Print one number of both are the same.
    biggestNum(61, 8);

    printf("\n\n##### Q7 #####\n");
    // Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots     biggestNum(61,8);
    printf("will do later");

    printf("\n\n##### Q8 #####\n");
    // Write a program to check whether a given year is a leap year or not .
    leapYear(1700);

    printf("\n\n##### Q9 #####\n");
    // Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times. leapYear(1700);
    graeatestAmong3(19, 8, 19);

    printf("\n\n##### Q10 #####\n");
    // Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
    // profitLoss();

    printf("\n\n##### Q11 #####\n");
    // Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
    passFail(159);

    printf("\n\n##### Q12 #####\n");
    // Write a program to check whether a given alphabet is in uppercase or lowercase.
    checkCase('r');

    printf("\n\n##### Q13 #####\n");
    // Write a program to check whether a given number is divisible by 3 and divisible by 2.
    divBy3_5(18);

    printf("\n\n##### Q14 #####\n");
    // Write a program to check whether a given number is divisible by 7 or divisible by 3.
    divBy7or3(14);

    printf("\n\n##### Q15 #####\n");
    // Write a program to check whether a given number is positive, negative or zero.
    positiveNegativeZero(1);

    printf("\n\n##### Q16 #####\n");
    // Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
    checkChar('@');

    printf("\n\n##### Q17 #####\n");
    //    Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
    //  samajh nahi aaya

    printf("\n\n##### Q18 #####\n");
    // Write a program which takes the month number as an input and display number of days in that month
    daysInMonth(2);

    printf("\n\n");
    return 0;
}