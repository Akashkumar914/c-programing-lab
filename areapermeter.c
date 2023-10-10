#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the length of rectangle");
    scanf("%d",&a);
    printf("Enter the  breath of thr rectangle");
    scanf("%d",&b);
    int side;
    printf("enter the side of square");
    scanf("%d",&side);
    float r;
    printf(" enter the radius of circle");
    scanf("%f",&r);
    printf("\n the circumference of circle : %f", 2*3.14*r);
    printf("\n the area of the cricle :%f",3.14*r*r);
    printf("\n the area of square :%d", side*side);
    printf("\n the perimeter of the square :%d",4*side);
    printf("\n the perimeter of the rectangle :%d",2*(a+b));
    printf ("\n the area of the rectangle :%d", a*b);
}