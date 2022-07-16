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

void sumOf3Num()
{
    int x, y, z, res;
    printf("Enter 3 numer to be added :\n");
    scanf("%d%d%d", &x, &y, &z);
    res = x + y + z;
    printf("%d+%d+%d = %d", x, y, z, res);
}

void printASCI(char c)
{
    printf("ASCI code for %c is %d",c,c);
}

void oddEvenBitwise(int num)
{
    printf("Nahi hua");
}

void sizeOfDataType () 
{
    printf("size of int is %d bytes.\n",sizeof(int));
    printf("size of float is %d bytes.\n",sizeof(float));
    printf("size of char is %d bytes.\n",sizeof(char));
    printf("size of double is %d bytes.\n",sizeof(double));
}

void zeroatLast (int num) //num = 2341
{
    int x = num%10;
    int res = num - x;
    printf("%d --> %d",num,res);
}

void appendNo (int num, int append) //num = 234
{
    int res = num*10+append;
    printf("%d --> %d", num, res);
}

void inr2usd (float inr)
{
    float usd = inr/76.23;
    printf("%.2f INR = %.2f$",inr, usd );
}

void rotate(int num)  //num = 123 --> 312
{
    printf("Integer ko array me convert ar k loop chalana tha, Nahi ho paaya")
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
    sumOf3Num();

    printf("\n\n##### Q6 #####\n");
    printASCI('A');

    printf("\n\n##### Q7 #####\n");
    printf("Couldn't inderstand");

    printf("\n\n##### Q8 #####\n");
    oddEvenBitwise(10);
    
    printf("\n\n##### Q9 #####\n");
    sizeOfDataType();
    
    printf("\n\n##### Q10 #####\n");
    zeroatLast(2362);
    
    printf("\n\n##### Q11 #####\n");
    appendNo(2362, 6);
    
    printf("\n\n##### Q12 #####\n");
    inr2usd(1000);
    
    printf("\n\n##### Q13 #####\n");
    rotate(12345);
    


    printf("\n\n");
}