#include <stdio.h>

void rotateArr(int pos, int d)
{
    int arr[5];
    printf("Enter 5 no.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    //                                           input       left 2 shift
    // rotating towards left with 2 position. [6,3,4,9,5] --> [4,9,5,6,3]
    for (int i = pos; i < 5; i++)
    {
        printf("%d", arr[i]);
        if (i == 4)
        {
            for (int i = 0; i < pos; i++)
            {
                printf("%d", arr[i]);
            }
        }
    }
}

int duplicate(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
}

void unique(int arr[]) //{6,6,3,40,4,8,8}
{
    int count = 0;
    int res[7] = {}; // 0,0,0,0,0,0,0

    for (int i = 0; i < 7; i++)
    {
        int found = 0;
        for (int j = 0; j < 7; j++)
        {
        int count = 0;
            if (arr[i] == res[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {             
            res[count++] = arr[i];
        }
    }

    for (int i = 0; res[i]; i++)
    {
        printf("%d ", res[i]);
    }
}

void combineSorted(int arr1[], int arr2[])
{
    int arr[8];
    for (int i = 0; i < 4; i++)
    {
        arr[i] = arr1[i];
        arr[i + 4] = arr2[i];
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    // 2nd approach
    /*
        for (int i = 0; i < 4; i++)
    {

        if (i == 3)
        {
            for (int j = i + 1; j < i * 2; j++)
            {
                arr[j] = arr2[j - 4];
            }
        }
    }
    */
}

int duplicateCount(int arr[]) //{6, 1, 3, 6, 4, 4, 8, 1}
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

void frequency(int arr[])  //{6, 6, 3, 4, 4, 4, 8};
{
    for (int i = 0; i < 7; i++)
    {
        int current =  arr[i];
        int count = 0;

        for (int j = 0; j < 7; j++)
        {
            if(current == arr[j])
            {
                count ++;
            }
        }
        printf("%d - %d times\n", current, count);

    }
    
}

int main()
{
    printf("\n##### Q1 Q2 Q3 Q4 Q6 #####\n");
    printf("ALREADY MADE IN PREVIOUS ASSIGNMENT\n");

    printf("\n##### Q4 #####\n");
    printf("Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )\n");
    // rotateArr(2,1);  // 2nd Arg 1 means towards left, 0 means towards right

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q5 #####\n");
    printf("Write a function to find the first occurrence of adjacent duplicate values in the array Function has to return the value of the element..\n");
    int arr[7] = {6, 61, 3, 4, 4, 8, 8};
    printf("Duplicate occur with value  %d", duplicate(arr));

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q7 #####\n");
    printf("Write a function in C to count a total number of duplicate elements in an array..\n");
    int arr7[8] = {6, 1, 3, 6, 4, 4, 8, 1};
    printf("Total no. of duplicates %d", duplicateCount(arr7));

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q8 #####\n");
    printf("Write a function in C to print all unique elements in an array.\n");
    int arr8[7] = {6, 6, 3, 40, 4, 8, 8};
    unique(arr8);

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q9 #####\n");
    printf("Write a function in C to merge two arrays of the same size sorted in descending order.\n");
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {5, 6, 7, 8};
    combineSorted(arr1, arr2);

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q10 #####\n");
    printf("Write a function in C to count the frequency of each element of an array..\n");
    int arr10[7] = {6, 6, 3, 4, 4, 4, 8};
    frequency(arr10);

    printf("\n\n---------------x--------------x-------------\n");
    return 0;
}
