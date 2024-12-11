#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("the first 10 natural numbers are\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("the sum of first 10 natural numbers is %d",sum);
    return 0;
}