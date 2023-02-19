// WAP to swap all the elements in the 1st column with all the corresponding elements in the last column, and2nd column with the second last column and 3rd with 3rd last etc.of a 2 - D dynamic array.Display the matrix
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int c = *b;
    *b = *a;
    *a = c;
}
int main()
{
    int c, r, start = 0, end = 0;
    printf("ENTER THE NUMBER OF ROWS\n");
    scanf("%d", &r);
    printf("ENTER THE NUMBER OF COLUMNS\n");
    scanf("%d", &c);
    int **arr = (int **)malloc(r * sizeof(int));
    for (int i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }
    printf("ENTER THE ELEMENTS OF %d X %d ARRAY\n", r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    end = c - 1;
    while (start < end)
    {
        for (int i = 0; i < r; i++)
        {
            swap(&arr[i][start], &arr[i][end]);
        }
        start++;
        end--;
    }
    printf("PRINTING THE 2D ARRAY\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}