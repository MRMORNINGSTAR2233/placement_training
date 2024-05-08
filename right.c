#include <stdio.h>

void printRightAngleTriangle(int n)
{
    int i, j;

    // Print middle part
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;

    // Take input from user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print right-angled triangle
    printRightAngleTriangle(n);

    return 0;
}