#include<stdio.h>
int main()
{ 
  int n1=0, n2=1, n3, i, number;
  printf("enter the fibonacci number");
  scanf("%d", &number);
  printf("fibonacci series from %d to %d:", n1, number);
  for(i=0;i<number;i++)
  {
    n3=n1+n2;
    printf("%d\n", n3);
    n1=n2;
    n2=n3;
  }
  return 0;
}