
// WAP to find out the second smallest and second largest element stored in a dynamic array
#include <stdio.h>
int main()
{
    int n, i, greatest = 0, smallest = 10e5, sg = 0, ss = 10e5;
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
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < greatest && arr[i] > sg)
        {
            sg = arr[i];
        }
        if (arr[i] > smallest && arr[i] <= ss)
        {
            ss = arr[i];
        }
    }
    printf("THE SECOND SMALLEST ELEMENT IN THE ARRAY IS %d\nTHE SECOND GREATEST ELEMENT IN THE ARRAY IS %d\n", ss, sg);
    return 0;
}