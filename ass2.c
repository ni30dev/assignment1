#include <stdio.h>

void skipLastDigit(int num)
{
    int res = num / 10;
    printf("skipping last digit of %d would become: %d", num, res);
}

void unitDigit(int num)
{
    int res = num % 10;
    printf("unit digit for %d is : %d", num, res);
}

void swapNum(int x, int y)
{
    printf("x: %d , y: %d\n", x, y);
    int temp = x;
    x = y;
    y = temp;

    printf("x: %d , y: %d", x, y);
}

void swapNum2(int x, int y) // x:5, y:8
{
    printf("x: %d , y: %d\n", x, y);

    x = x + y; // 5+8 = 13
    y = x - y; // 13-8 =5
    x = x - y; // 13-5 =8

    printf("x: %d , y: %d", x, y);
}

void sumOf3Num(int num) // 346
{
    int div=num, mod, sum = 0;

    while (div >=1)
    {
        mod = div % 10; // 6
        printf("%d\t",mod);

        div = div / 10; // 34
        printf("%d\t",div);

        sum += mod;
        printf("%d\t",sum);
        
        printf("\n");
    }
    printf("Sum of digits of %d is %d", num, sum);
}

void printASCI(char c)
{
    printf("ASCI code for %c is %d", c, c);
}

void LSB_1(int num)
{
    int count = 1, check = 1;

    while (check)
    {
        int i = num & 1;
        if (i == 0)
        {
            num = num >> 1;
            count++;
            check = 1;
        }
        else
        {
            check = 0;
        }
    }

    printf("LSB for first 1 is %d ", count);
}

void oddEvenBitwise(int num)
{
    printf("Number %d is ", num);
    printf(num & 1 == 1 ? "Odd" : "Even");
}

void sizeOfDataType()
{
    printf("size of int is %d bytes.\n", sizeof(int));
    printf("size of float is %d bytes.\n", sizeof(float));
    printf("size of char is %d bytes.\n", sizeof(char));
    printf("size of double is %d bytes.\n", sizeof(double));
}

void zeroatLast(int num) // num = 2341
{
    int x = num % 10;
    int res = num - x;
    printf("%d --> %d", num, res);
}

void appendNo(int num, int append) // num = 234
{
    int res = num * 10 + append;
    printf("%d --> %d", num, res);
}

void inr2usd(float inr)
{
    float usd = inr / 76.23;
    printf("%.2f INR = %.2f$", inr, usd);
}

void rotate(int num) // num = 345 --> 543
{
    int div=num, mod=num, rotatedNum=0;

    mod = mod%10; // 345%10 --> 5
    rotatedNum += 100*mod; // 0+ 100*5  --> 500
    div = div/10; // 345/10 --> 34

    mod = div%10; // 34%10 --> 4
    rotatedNum += 10*mod; // 500+10*4 --> 540
    div = div/10;

    mod = div%10;
    rotatedNum += 1*mod;

    printf("%d after rotating will be %d", num, rotatedNum);

}

void main()
{
    printf("##### Q1 #####\n");
    unitDigit(238);

    printf("\n\n##### Q2 #####\n");
    skipLastDigit(2384);

    printf("\n\n##### Q3 #####\n");
    swapNum(4, 5);

    printf("\n\n##### Q4 #####\n");
    swapNum2(4, 5);

    printf("\n\n##### Q5 #####\n");
    sumOf3Num(346);

    printf("\n\n##### Q6 #####\n");
    printASCI('A');

    printf("\n\n##### Q7 #####\n");
    // Write a program to find the position of first 1 in LSB.
    LSB_1(71456);

    printf("\n\n##### Q8 #####\n");
    oddEvenBitwise(101);

    printf("\n\n##### Q9 #####\n");
    sizeOfDataType();

    printf("\n\n##### Q10 #####\n");
    zeroatLast(2362);

    printf("\n\n##### Q11 #####\n");
    appendNo(2362, 6);

    printf("\n\n##### Q12 #####\n");
    inr2usd(1000);

    printf("\n\n##### Q13 #####\n");
    rotate(345);

    printf("\n\n");
}