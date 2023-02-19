// WAP to find the largest number and counts the occurrence of the largest number in a dynamic array of n integers using a single loop.
#include <stdio.h>
int main()
{
    int n, i, greatest = 0, d = 0;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER %d ELEMENTS IN THE ARRAY\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > greatest)
        {
            greatest = arr[i];
            d = 0;
        }
        if (arr[i] == greatest)
        {
            d++;
        }
    }
    printf("THE GREATEST NUMBER IN THE ARRAY IS %d AND IT HAS OCCURED %d TIMES.", greatest, d);
    return 0;
}