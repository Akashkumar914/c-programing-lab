#include<stdio.h>
void main()
{
    int n,temp;
    printf("enter the no of elements  that u want in array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the values in the elements in the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The given array is : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
printf("\n");
 for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    printf("After bubble sort the given array  is  : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}
