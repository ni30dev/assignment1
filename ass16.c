#include <stdio.h>

void sumMatrix(int a[3][3], int b[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

void prodMatrix(int a[3][3], int b[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j] * b[i][j]);
        }
        printf("\n");
    }
}

void transpose(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
}

int leftDiagSum(int mat[4][4])
{
    int sum = 0;
    for (int i = 1; i < 4; i++)
    {
        sum += mat[i][4 - i];
        printf("\n");
    }
    return sum;
}

int rightDiagSum(int mat[3][3])
{
    int sum = 0;
    for (int i = 1; i < 3; i++)
    {
        sum += mat[i][i - 1];
        printf("\n");
    }
    return sum;
}

void rowColSum(int mat[3][3])
{
    int rowSum = 0;
    int colSum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
    }

    printf("Rows sum %d\n", rowSum);
    printf("Cols sum %d\n", colSum);
}

void lowerTriangle(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void upperTriangle(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2 - i; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void sparseMatrix(int mat[3][3])
{
    int nonZeros = 0, zeros = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j])
            {
                nonZeros++;
            }
            else
            {
                zeros++;
            }
        }
    }

    zeros > nonZeros ? printf("Sparse Matrix") : printf("Normal Matrix");
}

void most1s(int mat[3][3])
{
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int res = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == 1)
            {
                switch (i)
                {
                case 0:
                    count1++;
                    break;
                case 1:
                    count2++;
                    break;
                case 2:
                    count3++;
                    break;
                default:
                    break;
                }
            }
        }
    }
    res = count1 > count2 ? 1 : count2 > count3 ? 2
                                                : 3;
    printf("1 is max in %d row", res);
}

int main()
{
    int arr4x4[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int arrRandom[3][3] = {{0, 0, 30}, {40, 0, 60}, {0, 80, 0}};
    int arr1s[3][3] = {{1, 2, 3}, {1, 5, 1}, {5, 8, 9}};

    printf("\n##### Q1 #####\n");
    printf("Write a program to calculate the sum of two matrices each of order 3x3.\n");
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    sumMatrix(arr1, arr2);

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q2 #####\n");
    printf("Write a program to calculate the product of two matrices each of order 3x3.\n");
    prodMatrix(arr1, arr2);

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q3 #####\n");
    printf("Write a program in C to find the transpose of a given matrix.\n");
    transpose(arr1);

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q4 #####\n");
    printf("Write a program in C to find the sum of left diagonals of a matrix..\n");
    printf("Left Diagounal Sum %d:", leftDiagSum(arr4x4));

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q5 #####\n");
    printf("Write a program in C to find the sum of right diagonals of a matrix..\n");
    printf("Left Diagounal Sum %d:", rightDiagSum(arr1));

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q6 #####\n");
    printf("Write a program in C to findfind the sum of rows and columns of a Matrix.\n");
    rowColSum(arr1);

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q7 #####\n");
    printf("Write a program in C to print or display the lower triangular of a given matrix..\n");
    lowerTriangle(arr1);

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q8 #####\n");
    printf("Write a program in C to print or display the upper triangular of a given matrix..\n");
    upperTriangle(arr1);

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q9 #####\n");
    printf("Write a program in C to to accept a matrix and determine whether it is a sparse matrix..\n");
    sparseMatrix(arrRandom);

    printf("\n\n---------------x--------------x-------------\n");
    printf("\n\n##### Q9 #####\n");
    printf("Write a program in C to find the row with maximum number of 1s.\n");
    most1s(arr1s);

    printf("\n\n---------------x--------------x-------------\n");
    return 0;
}