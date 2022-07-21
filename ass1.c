#include <stdio.h>

void lengthOfString()
{
    int i = printf("hello");
    printf("%d", i);
}

void nameInQuote(char str[])
{
    printf("\"%s\"", str);
}

void formatDate()
{
    // “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
    int d, m, y;
    printf("Enter Date in DD/MM/YYYY");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("Day - %d,Month - %d, Year - %d", d, m, y);
}

void formatTime()
{
    int h, m;
    printf("Enter time e.g.. HH:MM");
    scanf("%d:%d", &h, &m);
    printf("Time is %d Hour %d Minutes", h, m);
}

void main()
{
    printf("\n\n######### Solution 1 #########\n");
    printf("Hello Students");

    printf("\n\n######### Solution 2 #########\n");
    printf("Hello\nStudents");

    printf("\n\n######### Solution 3 #########\n");
    printf("“MySirG”");

    printf("\n\n######### Solution 4 #########\n");
    float radius, area;
    printf("Enter radius of circle..");
    scanf("%f", &radius);
    area = radius * radius * 3.14;
    printf("“Area of circle is %f having the radius %f.", area, radius);

    printf("\n\n######### Solution 5 #########\n");
    lengthOfString();
    printf("\n\n");

    printf("\n\n######### Solution 6 #########\n");

    nameInQuote("harsh");

    printf("\n\n######### Solution 7 #########\n");
    printf("%%d");

    printf("\n\n######### Solution 8 #########\n");
    printf("\\n");

    printf("\n\n######### Solution 9 #########\n");
    printf("\\\\");

    printf("\n\n######### Solution 10 #########\n");
    formatDate();

    printf("\n\n######### Solution 11 #########\n");
    formatTime();


    // Q12: what will be the output

    // int main()
    // {
    //     int x = printf(“ineuron”);
    //     printf(“% d”, x);
    //     return 0;
    // }
    printf("Length of string");

    printf("\n\n");
}
