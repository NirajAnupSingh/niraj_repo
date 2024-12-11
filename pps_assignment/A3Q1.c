#include<stdio.h>
int main()
{
  int i, sum=0;
  printf("the first 10 natural numbers are \n");
  for (i=1;i<=10;i++)
  {
    sum=sum+i;
    printf("%d"i);
  }
  printf("the sum of 10 natural number is %d is",sum);
  return 0;
}
