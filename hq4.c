// Write a program to replace every element in the dynamic array with the next greatest element present in the same array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, temp;
    int *arr;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("ENTER %d ELEMENTS IN THE ARRAY\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                arr[i] = arr[j];
                break;
            }
        }
    }
    printf("THE NEW ARRAY IS\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}