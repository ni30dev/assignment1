#include <stdio.h>

void lenOfStr(char str[])
{
    int i = 0;
    while (str[i])
    {
        i++;
    };
    printf("Length %d", i);
}

void nameInQuote(char str[])
{
    printf("\"%s\"", str);
}

void formatDate(char str[])
{
    // “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
    printf("Enter Date in DD/MM/YYYY");
    scanf("%s",&str);
    int DD,MM,YYYY;
    DD = str[0];
    MM = str[2];
    YYYY = str[4];
    printf("Day - %d,Month - %d, Year - %d",DD,MM,YYYY);
}

void main()
{
    // printf("\n\n######### Solution 1 #########\n");d'
    // printf("Hello Students");

    // printf("\n\n######### Solution 2 #########\n");
    // printf("Hello\nStudents");

    // printf("\n\n######### Solution 3 #########\n");
    // printf("“MySirG”");

    // printf("\n\n######### Solution 4 #########\n");
    // float radius, area;
    // printf("Enter radius of circle..");
    // scanf("%f", &radius);
    // area = radius * radius * 3.14;
    // printf("“Area of circle is %f having the radius %f.", area, radius);

    // printf("\n\n######### Solution 5 #########\n");
    printf("\n\n");

    lenOfStr("nitish");
    printf("\n\n######### Solution 6 #########\n");

    nameInQuote("harsh");

    printf("\n\n######### Solution 7 #########\n");
    printf("%%d");

    printf("\n\n######### Solution 8 #########\n");
    printf("\\n");

    printf("\n\n######### Solution 9 #########\n");
    printf("\\\\");

    // formatDate("08/01/1994");   Nahi hua 
    // formatTime() nahi hua

    // Q.12 -  Error, aaega

    printf("\n\n");
}
