#include <stdio.h>

void pattern1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(j <= 5 - i ? " " : "*");
        }
        printf("\n");
    }
}

void pattern3()
{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern4()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(j < i ? " " : "*");
        }
        printf("\n");
    }
}

void pattern5()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 5 - i + 1 && j <= 5 + i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern6()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 5 - i + 1 && j <= 5 + i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern7()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 5 - i + 1 && j <= 5 + i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

void pattern8()
{
    for (int i = 1; i <= 5; i++)
    {
        int l = 1;
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 5 - i + 1 && j <= 5 + i - 1)
            {
                if (j <= i)
                {
                    printf("%d", l);
                    l++;
                }
                else
                {
                    printf("%d", l);
                    l--;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern14()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 || j == i)
            {
                printf("*");
            }
            else if (i == 5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    printf("\n##### Q1 #####\n");
    pattern1();

    printf("\n\n##### Q2 #####\n");
    pattern2();

    printf("\n\n##### Q3 #####\n");
    pattern3();

    printf("\n\n##### Q4 #####\n");
    pattern4();

    printf("\n\n##### Q5 #####\n");
    pattern5();

    printf("\n\n##### Q6 #####\n");
    pattern6();

    printf("\n\n##### Q7 #####\n");
    pattern7();

    printf("\n\n##### Q8 #####\n");
    pattern8();

    printf("\n\n##### Q9, Q10, Q11, Q12, Q13 #####\n");
    printf("Could not make, All are based on same logic\n");

    printf("\n\n##### Q14 #####\n");
    pattern14();

    printf("\n\n");
    return 0;
}