#include <stdio.h>

void mySirG5()
{
    for (int i = 0; i < 5; i++)
    {
        printf("MySirG\n");
    }
}

void first10Natural()
{
    for (int i = 1; i < 11; i++)
    {
        printf("%d\t", i);
    }
}

void first10NaturalRev()
{
    for (int i = 10; i > 0; i--)
    {
        printf("%d\t", i);
    }
}

void _10oddNum()
{
    int count = 0, i = 1;
    while (count < 10)
    {
        printf("%d\t", i);
        i += 2;
        count++;
    }
}

void _10oddNumRev()
{
    int count = 0, i = 10;
    while (count < 10)
    {
        printf("%d\t", i * 2 - 1);
        i--;
        count++;
    }
}

void _10evenNaturalNum()
{
    int count = 0, i = 2;
    while (count < 10)
    {
        printf("%d\t", i);
        i += 2;
        count++;
    }
}

void _10evenNaturalNumRev()
{
    int count =10, i=2;
    while(count>0){
        printf("%d\t",count*2 );
        count --;
    }
}

void squareOf10()
{
    for(int i =1; i<11; i++)
    {
        printf("%d\t",i*i);
    }
}

void cubeOf10(){
      for(int i =1; i<11; i++)
    {
        printf("%d\t",i*i*i);
    }

}

void tableOf5()
{
    for(int i=1;i<11;i++)
    {
        printf("5 x %d = %d\n",i,5*i);
    }
}

int main()
{

    printf("\n##### Q1 #####\n");
    // Write a program to print MySirG 5 times on the screen
    mySirG5();

    printf("\n\n##### Q2 #####\n");
    // Write a program to print the first 10 natural numbers.
    first10Natural();

    printf("\n\n##### Q3 #####\n");
    // Write a program to print the first 10 natural numbers in reverse order
    first10NaturalRev();

    printf("\n\n##### Q4 #####\n");
    // Write a program to print the first 10 odd natural numbers
    _10oddNum();

    printf("\n\n##### Q5 #####\n");
    // Write a program to print the first 10 odd natural numbers in reverse order.
    _10oddNumRev();

    printf("\n\n##### Q6 #####\n");
    // Write a program to print the first 10 even natural numbers
    _10evenNaturalNum();

    printf("\n\n##### Q7 #####\n");
    // Write a program to print the first 10 even natural numbers in reverse order
    _10evenNaturalNumRev();

    printf("\n\n##### Q8 #####\n");
    // Write a program to print squares of the first 10 natural numbers
    squareOf10();

    printf("\n\n##### Q9 #####\n");
    // Write a program to print cubes of the first 10 natural numbers
    cubeOf10();
    squareOf10();

    printf("\n\n##### Q9 #####\n");
    // Write a program to print cubes of the first 10 natural numbers
    cubeOf10();

    printf("\n\n##### Q10 #####\n");
    // Write a program to print a table of 5.
    tableOf5();


    printf("\n\n");
    return 0;
}