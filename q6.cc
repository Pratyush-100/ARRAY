#include <stdio.h>
int main()
{
    int a[5]={2,5,3,9,7},leftn,rightn;
    for(int i=0;i<5;i++)
    {
        leftn=a[i];
        for(int j=i;j<5;j++)
        {
            if(leftn<a[j])
            {
                rightn=a[j];
                break;
            }
            else
            { 
                rightn=-1;
            }
        }
        printf("%d %d\n",leftn,rightn);
    }
return 0;
}