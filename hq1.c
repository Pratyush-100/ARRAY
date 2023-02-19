
// // Given an unsorted dynamic array arr and two numbers x and y, find the minimum distance between x and y in arr.
// //The array might also contain duplicates. You may assume that both x and y are different and present in arr.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, l, u, c = 0, d = -1, z = 0, smallest = 0;
    ;
    int *arr;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("ENTER %d ELEMENTS IN THE ARRAY\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *arrr = (int *)malloc(n * sizeof(int));
    printf("ENTER THE LOWER AND UPPER LIMIT NUMBERS BETWEEN WHICH YOU WANT TO FIND THE DISTANCE OF\n");
    scanf("%d%d", &l, &u);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == l)
        {
            c = 0;
            do
            {
                c++;
                i++;
            } while (arr[i] != u);
            arrr[z++] = c;
        }
    }
    smallest = arrr[0];
    for (i = 0; i < z; i++)
    {
        if (arrr[i] < smallest)
        {
            smallest = arrr[i];
        }
    }
    printf("THE SMALEST DISTANCE BETWEEN %d AND %d IS %d\n", l, u, smallest);
    return 0;
}