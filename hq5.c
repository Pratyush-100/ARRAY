// WAP to replace every dynamic array element by multiplication of previous and next of an n element
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, pre, next;
    int *arr;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    int *arrr = (int *)malloc(n * sizeof(int));
    printf("ENTER %d ELEMENTS IN THE ARRAY\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arrr[i] = arr[i];
    }
    for (i = 1; i < n - 1; i++)
    {
        pre = i - 1;
        next = i + 1;
        arr[i] = arrr[pre] * arr[next];
    }
    printf("THE NEW ARRAY IS\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}