#include <stdio.h>

void sum()
{
    int nums[10];
    int sum = 0;
    printf("Enter 10 numbers to be added");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum += nums[i];
    }
    printf("%d", sum);
}

float avg()
{
    int nums[10];
    int sum = 0;
    float avg = 0;
    printf("Enter 10 numbers to be added");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum += nums[i];
    }
    return avg = sum / 10.0;
}

void even_odd_avg()
{
    int nums[10];
    int sum = 0;
    float odd_avg = 0;
    float even_avg = 0;
    float count = 0.0;
    printf("Enter 10 numbers to be added");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even_avg += nums[i];
            count++;
        }
        else
        {
            odd_avg += nums[i];
        }
    }
    printf("Even average: %f\n", even_avg / count);
    printf("Odd average: %f", odd_avg / (10.0 - count));
}

int greatest(int nums[])
{
    int greatest = nums[0];
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] > greatest)
        {
            greatest = nums[i];
        }
    }
    return greatest;
}

void smallest()
{
    int nums[5];
    printf("Enter 5 numbers to get the smallest one.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }

    int small = nums[0];
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] < small)
        {
            small = nums[i];
        }
    }
    printf("%d", small);
}

void sortArray()
{
    int nums[5];
    printf("Enter 5 numbers to get the array sorted.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }
    // [4,2,6,3,1]  2 4 3 1 6

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5 - j; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                int temp = nums[i + 1];
                nums[i + 1] = nums[i];
                nums[i] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", nums[i]);
    }
}

void _2ndLargest()
{
    int nums[5] = {21, 91, 5, 1, 6};

    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 5 - j; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                int temp = nums[i + 1];
                nums[i + 1] = nums[i];
                nums[i] = temp;
            }
        }
    }
    printf("2nd largest no. is : %d", nums[3]);
}

void _2ndSmallest()
{
    int nums[5] = {21, 91, 5, 1, 6};

    for (int j = 0; j < 5; j++)
    {
        for (int i = 4; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                int temp = nums[i + 1];
                nums[i + 1] = nums[i];
                nums[i] = temp;
            }
        }
    }
    printf("2nd smallest no. is : %d", nums[3]);
}

void reverse()
{
    int nums[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", nums[i]);
    }
}

//   void reverse()
// {
//     int nums[] = {};
//     int i =0;
//     printf("Enter a no.");

//     do
//     {
//         scanf("%d", &nums[i]);
//         i++;
//     } while (nums[i - 1] != 0);
// }

void copyArr()
{
    printf("Enter no.");
    int nums[5];
    int copied[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
        copied[i]=nums[i];
    }

    for (int i = 0; i <5; i++)
    {
        printf("%d ", copied[i]);
    }
    
}

// --------------------------------------------------
int main()
{
    printf("\n##### Q1 #####\n");
    printf("Write a recursive function to calculate sum of first N natural numbers.\n");
    sum();

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q2 #####\n");
    printf("Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user.\n");
    printf("Average is : %f\n", avg());

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q3 #####\n");
    printf("Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.\n");
    even_odd_avg();

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q4 #####\n");
    printf("Write a program to find the greatest number stored in an array of size 10. Take array values from the user.\n");
    int a[5] = {51, 2, 7, 1, 31};
    printf("Greater is : %d", greatest(a));

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q5 #####\n");
    printf("Write a program to find the smallest number stored in an array of size 10. Take array values from the user.\n");
    smallest();

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q6 #####\n");
    printf("Write a program to sort elements of an array of size 10. Take array values from the user.\n");
    sortArray();

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q7 #####\n");
    printf("Write a program to find second largest in an array.Take array values from the user.\n");
    _2ndLargest();

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q7 #####\n");
    printf("Write a program to find second largest in an array.Take array values from the user.\n");
    _2ndSmallest();

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q8 #####\n");
    printf("Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.\n");
    reverse();

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q9 #####\n");
    printf("Write a program in C to copy the elements of one array into another array.Take array values from the user.\n");
    copyArr();

    printf("\n\n---------------x--------------x-------------\n");
    return 0;
}