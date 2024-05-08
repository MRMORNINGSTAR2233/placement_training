#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    cols = rows;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
