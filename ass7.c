#include <stdio.h>

void fibo(int num)
{ // 0, 1, 2, 3, 4, 5, 6, 7 , 8 , 9 , 10
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
    int a = 0, b = 0, res = 0;
    for (int i = 0; i <= num; i++)
    {
        if (i == 0)
        {
            a = 0;
        }
        else if (i == 1)
        {
            b = 1;
        }
        else
        {
            res = a + b;
            a = a + b;
            b = res - b;
        }
    }
    printf("\t%dth term of Fibonachi series will be: %d\n", num, a + b);
}

void fibo_print(int num)
{ // 0, 1, 2, 3, 4, 5, 6, 7 , 8 , 9 , 10
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
    int a = 0, b = 0, res = 0;
    for (int i = 0; i <= num; i++)
    {
        if (i == 0)
        {
            a = 0;
        }
        else if (i == 1)
        {
            b = 1;
        }
        else
        {
            res = a + b;
            a = a + b;
            b = res - b;
        }
        printf("\t%d --> %d\n", i, a + b);
    }
}

void hcf(int num1, int num2)
{
    int big = num1 > num2 ? num1 : num2;
    int small = num1 + num2 - big;
    int res = 1;
    for (int i = 2; i < small; i++)
    {
        if (big % i == 0 && small % i == 0)
        {
            res = i;
        }
    }
    printf("\tHCF of %d %d is %d", num1, num2, res);
}

void coPrime(int num1, int num2)
{
    int big = num1 > num2 ? num1 : num2;
    int small = num1 + num2 - big;
    int cp = 1;

    for (int i = 2; i < big; i++)
    {
        if (big % i == 0 && small % i == 0)
        {
            cp = 0;
        }
    }
    printf("%d \& %d is ",num1, num2);
    printf(cp ? "Co-prime" : "Null");
}

void prime_100()
{

    for (int i = 2; i <= 100; i++)
    {
        int check = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            printf("\t%d\n", i);
        }
    }
}

void prime_a_b(int from, int till)
{
    for (int i = from; i <= till; i++)
    {
        int check = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            printf("\t%d\n", i);
        }
    }
}

void prime_next_to(int num) // num = 20
{
    int i = 1, a, check;
    do
    {
        check = 1;
        a = num + i; // 20+1 --> 21
        for (int j = 2; j < a; j++)
        {
            if (a % j == 0)
            {
                check = 0;
                i++;
                break;
            }
        }
    } while (check == 0);

    if (check)
    {
        printf("\tNext prime number after %d is %d\n",num, a);
    }
}

void isArmstrong(int num) // 153
{
    int div = num, mod, sum = 0;
    while (div > 0)
    {
        mod = div % 10;
        div = div / 10;
        sum = sum + (mod * mod * mod);
    }
    printf("%d is an ", num);
    printf(sum == num ? "Armstrong No." : "Null");
}

int main()
{
    printf("\n##### Q1 #####\n");
    printf("Write a program to find the Nth term of the Fibonnaci series.\n");
    fibo(10);

    printf("\n\n##### Q2 #####\n");
    printf("Write a program to print first N terms of Fibonacci series\n");
    fibo_print(10);

    printf("\n\n##### Q3 #####\n");
    printf("Write a program to check whether a given number is there in the Fibonacci series or not.\n");
    printf("\tWill do later, It might need array.. ?");
    // fibo_check();

    printf("\n\n##### Q4 #####\n");
    hcf(24, 90);

    printf("\n\n##### Q5 #####\n");
    // Write a program to check whether two given numbers are co-prime numbers or not
    coPrime(18, 35);

    printf("\n\n##### Q6 #####\n");
    prime_100();

    printf("\n\n##### Q7 #####\n");
    printf("Write a program to print all Prime numbers between two given numbers\n");
    prime_a_b(10, 20);

    printf("\n\n##### Q8 #####\n");
    printf("Write a program to find next Prime number of a given number\n");
    prime_next_to(25);

    printf("\n\n##### Q9 #####\n");
    printf("Write a program to check whether a given number is an Armstrong numberor not\n");
    isArmstrong(371);

    printf("\n\n");
    return 0;
}