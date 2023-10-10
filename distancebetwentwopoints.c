#include<stdio.h>
#include<math.h>
void main ()
{
    float x1,x2,y1,y2,p,q,sq;
    printf("enter the value of x1,x2,y1,y2:- ");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    p =(x2-x1)*(x2-x1);
    q =(y2-y1)*(y2-y1);
    sq =(sqrt(p+q));
    printf("distance between two points is :%2f",sq);
    
}