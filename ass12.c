#include <stdio.h>

int nNaturalNo(int num)
{
    if (num > 1)
    {
        nNaturalNo(num - 1);
    }
    printf("\n%d\n", num);
}

int nNaturalNoRev(int num)
{
    printf("\n%d\n", num);
    if (num > 1)
    {
        nNaturalNoRev(num - 1);
    }
}

int nNaturalOddNo(int num)
{
    if (num > 1)
    {
        nNaturalOddNo(num - 1);
    }
    printf("%d\n", 2 * num - 1);
}

int nNaturalOddNoRev(int num)
{
    printf("%d\n", 2 * num - 1);
    if (num > 1)
    {
        nNaturalOddNoRev(num - 1);
    }
}

int nNaturalEvenNo(int num)
{
    if (num > 1)
    {
        nNaturalEvenNo(num - 1);
    }
    printf("%d\n", 2 * num);
}

int nNaturalEvenNoRev(int num)
{
    printf("%d\n", 2 * num);
    if (num > 1)
    {
        nNaturalEvenNoRev(num - 1);
    }
}

int squares_of_first_N_natural_num(int num)
{
    if (num > 1)
    {
        squares_of_first_N_natural_num(num - 1);
    }
    printf("%d\n", num * num);
}

void printBinary(int num) // 13
{
    int div = num, mod;
    if (div == 0)
    {
        return;
    }
    mod = div % 2;
    div = div / 2; // 13/2 = 6
    printBinary(div);
    printf("%d\t", mod);
}

void printOctal(int div) // 158
{
    int mod;
    if (div == 0)
    {
        return;
    }
    mod = div % 8; // 158/8 = 6
    div = div / 8; // 158/2 = 19
    printOctal(div);
    printf("%d\t", mod);
}

void printReverse(int num)
{
    int mod, div;
    if (num > 0)
    {
        div = num / 10;
        mod = num % 10;
        printf("%d", mod);
        printReverse(div);
    }    
}

int main()
{
    printf("\n##### Q1 #####\n");
    printf("Write a recursive function to print first N natural numbers\n");
    nNaturalNo(8);

    printf("\n\n##### Q2 #####\n");
    printf("Write a recursive function to print first N natural numbers in reverse order\n");
    nNaturalNoRev(6);

    printf("\n\n##### Q3 #####\n");
    printf("Write a recursive function to print first N odd natural numbers\n");
    nNaturalOddNo(6);

    printf("\n\n##### Q4 #####\n");
    printf("Write a recursive function to print first N odd natural numbers in reverse order\n");
    nNaturalOddNoRev(6);

    printf("\n\n##### Q5 #####\n");
    printf("Write a recursive function to print first N even natural numbers\n");
    nNaturalEvenNo(6);

    printf("\n\n##### Q6 #####\n");
    printf("Write a recursive function to print first N even natural numbers reverse order\n");
    nNaturalEvenNoRev(6);

    printf("\n\n##### Q7 #####\n");
    printf("Write a recursive function to print squares of first N natural numbers\n");
    squares_of_first_N_natural_num(6);

    printf("\n\n##### Q8 #####\n");
    printf("Write a recursive function to print binary of a given decimal number\n");
    printBinary(15);

    printf("\n\n##### Q9 #####\n");
    printf("Write a recursive function to print octal of a given decimal number\n");
    printOctal(158);

    printf("\n\n##### Q10 #####\n");
    printf("Write a recursive function to print reverse of a given number\n");
    printReverse(15832);

    printf("\n\n");
    return 0;
}