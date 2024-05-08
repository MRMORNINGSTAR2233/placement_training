#include <stdio.h>

void printHollowSquare(int n)
{
    int i, j;

    // Print top border
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");

    // Print middle part
    for (i = 1; i < n - 1; i++)
    {
        printf("*");
        for (j = 1; j < n - 1; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    // Print bottom border
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int n;

    // Take input from user
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    // Print hollow square
    printHollowSquare(n);

    return 0;
}