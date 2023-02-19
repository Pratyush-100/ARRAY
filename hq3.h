// WAP to arrange the elements of a dynamic array such that all even numbers are followed by all odd numbers.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, temp, s = 0;
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
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] % 2 != 0 && arr[j] % 2 == 0)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                break;
            }
        }
    }
    printf("THE ARRAY OF EVEN ELEMENTS FOLLOWED BY ODD ELEMENTS IS\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
