// WAP to sort rows of a dynamic matrix having m rows and n columns in ascending and columns in descending order.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, i, j, s, k;
    printf("ENTER THE NUMBER OF ROWS AND COLUMNS OF THE MATRIX\n");
    scanf("%d%d", &m, &n);
    int *arr[m];

    for (i = 0; i < m; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    for (i = 0; i < m; i++)
    {
        printf("ENTER %d ELEMENTS IN ROW %d\n", n, (i + 1));
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (arr[i][j] > arr[i][k])
                {
                    s = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = s;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = j + 1; k < m; k++)
            {
                if (arr[j][i] < arr[k][i])
                {
                    s = arr[k][i];
                    arr[k][i] = arr[j][i];
                    arr[j][i] = s;
                }
            }
        }
    }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}