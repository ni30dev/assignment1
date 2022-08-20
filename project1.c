#include <stdio.h>
#include <stdlib.h>

void printArr(int *arr)
{
    printf("\n\----------------------\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (*(arr + i * 4 + j) < 10)
            {
                if (*(arr + i * 4 + j) == 0)
                {
                    printf("   |  ");
                }
                else
                {

                    printf("%u  |  ", *(arr + i * 4 + j));
                }
            }
            else
            {
                printf("%u |  ", *(arr + i * 4 + j));
            }
        }

        printf("\n\----------------------\n");
    }
}

int addressOf(int arr[4][4], int target, int *x, int *y)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                *x = i;
                *y = j;
            }
        }
    }
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int compare(int arr[4][4])
{
    int check, count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 3 && j == 3)
            {
                continue;
            }
            else
            {
                if (arr[i][j] != count)
                {
                    check = 0;
                    break;
                }
                else
                {
                    check = 1;
                }
            }
            count++;
        }
    }
    return check;
}

void gameRules(int arr[4][4])
{
    int solvedArr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0};
    printf("\t\t\tRULES OF THE GAME\n");
    printf("1. You can move only one step at a time by I J K M key\n");
    printf("\tMove Up      : by 'I' key\n");
    printf("\tMove Down    : by 'M' key\n");
    printf("\tMove Left    : by 'J' key\n");
    printf("\tMove Right   : by 'K' key\n");
    printf("2. You can move number at empty position only.\n");
    printf("3. For each valid move : your total number of moves will decrease by 1.\n");
    printf("4. Winning Situations  : number in a 4X4 matrix should be in order from 1 to 15.\n");
    printf("\n\t\t Winning Situations \n");
    printArr(solvedArr);
    printf("\n5. You can exit hthe game at any time by premmsing 'E' or 'e' key\n so try to win in minimum no. of moves");
    printf("\n\n\t\t Happy Gaming, Good Luck\n");
    


    // printf("Hey ! You will get a 4x4 matrix with random number filled like below :\n");
    // printArr(arr);
    
}

int* getRandom(){
     int vektor[16];
    int random;
    int uniqueflag;
    int i, j;

    for (i = 0; i < 15; i++)
    {
        do
        {
            /* Assume things are unique... we'll reset this flag if not. */
            uniqueflag = 1;
            random = rand() % 15 + 1;
            /* This loop checks for uniqueness */
            for (j = 0; j < i && uniqueflag == 1; j++)
            {
                if (vektor[j] == random)
                {
                    uniqueflag = 0;
                }
            }
        } while (uniqueflag != 1);
        
        vektor[i] = random;
    }
    vektor[15] = 0;
    return vektor;
}

int main()
{
    int x, y, count = 50;
    char arrow;
    char play, name[100];

    int arr[4][4] = {1, 12, 3, 4, 15, 9, 7, 8, 6, 10, 11, 2, 13, 5, 14, 0};    


    printf("Hello there! This is an Arrange Matrix Game.\nPlease enter your name to play game.\n");
    fgets(name, 100, stdin);
    system("clear");

    gameRules(arr);
    printf("\nNow, Press Any key to start ........");
    scanf("%c", &play);
    
    if (play)
    {

        while (count > 0)
        {
            if (compare(arr))
            {
                printf("\nYeah.. You win.\n");
                return;
            }
            else
            {
                system("clear");
                printf("Hello %sMOVES LEFT - %d\n\n", name, count);

                printArr(arr);
                scanf("%c", &arrow);
                addressOf(arr, 0, &x, &y);

                switch (arrow)
                {
                case 75: // left
                    swap(&(arr[x][y]), &arr[x][y - 1]);
                    // printf("\n%u\n", arr + 16);
                    system("clear");
                    // printArr(arr);
                    --count;

                    break;
                case 77: // up
                    swap(&(arr[x][y]), &arr[x - 1][y]);
                    // printf("\n%u\n", arr + 16);
                    system("clear");
                    // printArr(arr);
                    --count;
                    break;

                case 74: // right
                    swap(&(arr[x][y]), &arr[x][y + 1]);
                    // printf("\n%u\n", arr + 16);
                    system("clear");
                    // printArr(arr);
                    --count;
                    break;

                case 73: // down
                    swap(&(arr[x][y]), &arr[x + 1][y]);
                    // printf("\n%u\n", arr + 16);
                    system("clear");
                    // printArr(arr);
                    --count;
                    break;
                case 69: // down
                    system("clear");
                    count = 0;
                    break;
                case 101: // down
                    system("clear");
                    count = 0;
                    printf("\nYou Exit the game\n");
                    break;

                default:
                    break;
                }
            }
        }
    }
    printf("\nOops! You loose ! \n\n");
    return 0;
}

