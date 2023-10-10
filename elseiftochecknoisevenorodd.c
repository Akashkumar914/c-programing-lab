#include<stdio.h>
void main()
{
    int x;
    printf("enter Any number");
    scanf("%d",&x);
    if (x==0){
        printf("zero is neither even nor odd ");
    }
    else if(x%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    }
    
