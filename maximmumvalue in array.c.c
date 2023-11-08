#include<stdio.h>
void main()
{
    int n; 
    printf("no of elements in array : ");
    scanf("%d",&n);
      int a[n];
    printf(" enter the array values :\n ");
    for(int i=0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("given array is ");
    for(int i=0 ; i<n ; i++)
    {
    printf("%d ", a[i]);
    }
    int max=a[0];
    for(int i=1; i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("\n5maximum value is : %d", max);
}