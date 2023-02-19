// You are given an array of 0s and 1s in random order.Segregate 0s on left side and 1s on right side of the array.Traverse array only once.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, temp, s = 0;
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
        if (arr[i] == 0)
            s++;
    }
    for (i = 0; i < s; i++)
    {
        arr[i] = 0;
    }
    for (i = s; i < n; i++)
    {
        arr[i] = 1;
    }
    printf("THE ARRAY OF EVEN ELEMENTS FOLLOWED BY ODD ELEMENTS IS\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}