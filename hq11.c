// WAP to arrange the elements of a dynamic array such that all even numbers are followed by all odd numbers using a single loop.
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
    int n, i, idx = 0;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);
    printf("ENTER %d ELEMENTS IN THE ARRAY\n", n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (!(arr[i] & 1))
        {
            swap(&arr[i], &arr[idx++]);
        }
    }
    printf("PRINTING THE ARRAY\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
