// WAP to find out the kth smallest and kth largest element stored in a dynamic array of n integers, where k < n.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, K;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("ENTER %d ELEMENTS IN THE ARRAY\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE VALUE OF K\n");
    scanf("%d", &K);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int e1 = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = e1;
            }
        }
    }
    int *new_arr = (int *)calloc(1e4, sizeof(int));
    int i = 0, k = 0, j = 0;
    while (i < n)
    {
        new_arr[k++] = arr[i];
        while (j < n && arr[j] == arr[i])
        {
            j++;
        }
        i = j;
        j = i;
    }
    int size = k;
    if (size < K)
    {
        printf("ENTER A VLAID VALUE OF K\n");
        return 0;
    }
    printf("THE %dTH SMALLEST ELEMENT IN THE ARRAY IS %d\n", K, new_arr[K - 1]);
    printf("THE %dTH LARGEST ELEMENT IN THE ARRAY IS %d\n", K, new_arr[size - K]);
    return 0;
}