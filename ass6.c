#include <stdio.h>
#include <math.h>


void sum_of_first_N_natural_num(int num)
{
    int i, sum = 0;
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum of %d natural no. is : %d", num, sum);
}

void sum_of_first_N_even_natural_numbers(int num)
{
    int count = 1, sum = 0;
    while (count <= num)
    {
        sum = sum + count * 2;
        count++;
    }
    printf("Sum of %d even natural no. is : %d", num, sum);
}

void sum_of_first_N_odd_natural_numbers(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + (i * 2 - 1);
    }
    printf("Sum of %d even odd no. is : %d", num, sum);
}

void sum_of_squares_of_first_N_natural_numbers(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i * i;
    }
    printf("Sum of  squares of first %d natural numbers . is : %d", num, sum);
}

void sum_of_cube_of_first_N_natural_numbers(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i * i * i;
    }
    printf("Sum of  squares of first %d natural numbers . is : %d", num, sum);
}

void factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d: ", num, fact);
}

void countDigits(int num)
{

    int count = 0, check = 1, div = 10;
    float res;

    while (check)
    {
        res = num / div;
        count++;
        if (res < 1)
        {
            check = 0;
        }
        div = div * 10;
    }
    printf("Given number %d has %d digits.", num, count);
}

void primeNum(int num)
{
    int check = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            check = 0;
        }
    }
    printf(check ? "Prime Number" : "Non-Prime NUmber");
}

void lcmOf2num(int num1, int num2)
{
    int big = num1 > num2 ? num1 : num2;
    int small = num1 + num2 - big;
    int check = 1;
    while (check)
    {
        if (big * check % small == 0)
        {
            printf("LCM of %d %d is %d", num1, num2, big * check);
            check = 0;
            break;
        }
        check++;
    }
}

void reverseNum(int num)
{
    int count = 1, i = 10, digit, div = 1;
    int res = 0;
    while (count)
    {
        if (div)
        {
            digit = num % i; //6789%10 = 9
            digit = res+ digit*pow(10,count);
            count ++;
            div = num / i;  //6789/10 = 678
            printf("%d %d\n", digit,div);
            num = div;
        } else{
            count =0;
            break;
        } ;
    }
    printf("answer is %d", res);
}

int main()
{
    printf("\n##### Q1 #####\n");
    // Write a program to calculate sum of first N natural numbers
    sum_of_first_N_natural_num(10);

    printf("\n\n##### Q2 #####\n");
    // Write a program to calculate sum of first N even natural numbers
    sum_of_first_N_even_natural_numbers(10);

    printf("\n\n##### Q3 #####\n");
    // Write a program to calculate sum of first N odd natural numbers
    sum_of_first_N_odd_natural_numbers(6);

    printf("\n\n##### Q4 #####\n");
    //   Write a program to calculate sum of squares of first N natural numbers
    sum_of_squares_of_first_N_natural_numbers(6);

    printf("\n\n##### Q5 #####\n");
    //   Write a program to calculate cube of squares of first N natural numbers
    sum_of_cube_of_first_N_natural_numbers(4);

    printf("\n\n##### Q6#####\n");
    // Write a program to calculate factorial of a number
    factorial(5);

    printf("\n\n##### Q7#####\n");
    // Write a program to count digits in a given number
    countDigits(1000);

    printf("\n\n##### Q8#####\n");
    // Write a program to check whether a given number is a Prime number or not
    primeNum(50);

    printf("\n\n##### Q9#####\n");
    // Write a program to calculate LCM of two numbers
    lcmOf2num(7, 8);

    printf("\n\n##### Q10#####\n");
    // Write a program to reverse a given number
    // Power ki code nahi chali...
    reverseNum(6789);
    

    printf("\n\n");
    return 0;
}
