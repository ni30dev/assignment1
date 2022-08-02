#include <stdio.h>

int sumOfNnatural(int num)
{
    if (num)
    {
        return num + sumOfNnatural(num - 1);
    }
}

int sumOfOddNnatural(int num)
{
    if (num)
    {
        return num + 2 + sumOfOddNnatural(num - 1);
    }
}

int sumOfEvenNnatural(int num)
{
    if (num)
    {
        return num * 2 + sumOfEvenNnatural(num - 1);
    }
}

int sumSquareNatural(int num)
{
    if (num)
    {
        return num * num + sumSquareNatural(num - 1);
    }
}

int sum_of_digits(int num)
{
    int mod, div;
    if (num > 0)
    {
        div = num / 10;
        mod = num % 10;
        return mod + sum_of_digits(div);
    }
}

int factorial(int num)
{
    if (num >= 1)
    {
        return num * factorial(num - 1);
    }
}

int hcf(int num1, int num2) // 60,90
{

    for (int i = 2; i < num1; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {

            return hcf(num1 / i, num2 / i);
        }
        return i = i * i;
    }
}

int fibonacci(int num) // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int count = 0;
int counDigit(int num) // 2435
{
    if (num > 1)
    {
        num = num / 10;
        count++;
        counDigit(num);
        return count;
    }
}

int power(int num, int pow)
{
    if(pow ==0){
        return 1;
    } if(pow ==1){
        return num;
    }
    return num*power(num, pow-1);
}

int main()
{
    printf("\n##### Q1 #####\n");
    printf("Write a recursive function to calculate sum of first N natural numbers.\n");
    printf("Sum is %d", sumOfNnatural(10));

    printf("\n\n##### Q2 #####\n");
    printf("Write a recursive function to calculate sum of first N odd natural numbers.\n");
    printf("Sum is %d", sumOfOddNnatural(5));

    printf("\n\n##### Q3 #####\n");
    printf("Write a recursive function to calculate sum of first N odd natural numbers.\n");
    printf("Sum is %d", sumOfEvenNnatural(5));

    printf("\n\n##### Q4 #####\n");
    printf("Write a recursive function to calculate sum of squares of first n natural numbers\n");
    printf("Sum is %d", sumSquareNatural(5));

    printf("\n\n##### Q5 #####\n");
    printf("Write a recursive function to calculate sum of digits of a given number\n");
    printf("Sum is %d", sum_of_digits(31205));

    printf("\n\n##### Q6 #####\n");
    printf("Write a recursive function to calculate factorial of a given number\n");
    printf("Factorial is %d", factorial(5));

    printf("\n\n##### Q7 #####\n");
    printf("Write a recursive function to calculate HCF of two numbers.\n");
    printf("Hcf is %d", hcf(60, 90));

    printf("\n\n##### Q8 #####\n");
    printf("Write a recursive function to print first N terms of Fibonacci series.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", fibonacci(i));
    }

    printf("\n\n##### Q9 #####\n");
    printf("Write a program in C to count the digits of a given number using recursion.\n");
    printf("%d", counDigit(211514));

    printf("\n\n##### Q10 #####\n");
    printf("Write a program in C to calculate the power of any number using recursion..\n");
    printf("%d", power(5,6));

    printf("\n---------------x--------------x-------------\n");
    return 0;
}