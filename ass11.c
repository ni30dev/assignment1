#include <stdio.h>

int LCM_2num(int num1, int num2)
{
    int big = num1 > num2 ? num1 : num2;
    int small = num1 + num2 - big;
    int i = 2;

    while (1)
    {
        if (big * i % small == 0)
        {
            return big * i;
        }
        else
        {
            i++;
        }
    }
}

int HCF_2num(int num1, int num2)
{
    int big = num1 > num2 ? num1 : num2;
    int small = num1 + num2 - big;
    int res;

    for (int i = 1; i <= small; i++)
    {
        if (small % i == 0 && big % i == 0)
        {
            res = i;
        }
    }
    return res;
}

void isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is non-prime number", num);
            return;
        }
    }
    printf("%d is a Prime number", num);
}

int nextPrime(int num)
{
    int count = num;
    for (int i = 2; i < count; i++)
    {
        if (num % i == 0)
        {
            printf("%d is non-prime number", num);
            return;
        }
    }
    printf("%d is a Prime number", num);
}

void nPrime(int num)
{
    for (int j = 2; j <= num; j++)
    {
        int prime = 1;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d\n", j);
        }
    }
}

void printA_B(int start, int end)
{
    for (int j = start; j <= end; j++)
    {
        int prime = 1;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d\n", j);
        }
    }
}

int fact_div(int num)
{
    int res = 0;
    for (int i = 1; i <= num; i++)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        res = fact / i + res; // 120/5 + 24/4 + 6/3 + 2/2 + 1/1 = 24+6+2+1+1 =
    }
    return res;
}

int square(int num)
{
    return num * num;
}

int main()
{
    printf("\n##### Q1 #####\n");
    printf("Write a function to calculate LCM of two numbers.\n");
    printf("LCM is %d : ", LCM_2num(18, 90));

    printf("\n\n##### Q2 #####\n");
    printf("Write a function to calculate HCF of two numbers.\n");
    printf("HCF is %d : ", HCF_2num(15, 3));

    printf("\n\n##### Q3 #####\n");
    isPrime(19);
    printf("Write a function to check whether a given number is Prime or not.\n");
    printf("\033[1;31m");
    printf("HOW CAN WE MAKE IT RETURN SOMETHING??\n");
    printf("HOW CAN WE MAKE FUNCTION IT RETURN STRING/ TEXT??\n");
    printf("\033[0;37m");

    printf("\n\n##### Q4 #####\n");
    printf("Write a function to find the next prime number of a given number.\n");
    printf("%d", nextPrime(20));

    printf("\n\n##### Q5 #####\n");
    printf("Write a function to print first N prime numbers.\n");
    nPrime(20);

    printf("\n\n##### Q6 #####\n");
    printf("Write a function to print all Prime numbers between two given numbers.\n");
    printA_B(9, 20);

    printf("QUESTION 7 & 8 WILL TRY LATER");

    printf("\n\n##### Q9 #####\n");
    printf("Write a program in C to find the square of any number using the function.\n");
    int num;
    printf("Enter a no. to sqaure : ");
    scanf("%d", &num);
    printf("square of %d is %d", num, square(num));

    printf("\n\n##### Q10 #####\n");
    printf("Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function..\n");
    printf("%d", fact_div(5));
    printf("\n\n");
    return 0;
}