#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first side of triangle:");
    scanf("%d",&a);
    printf("enter second side of triangle:");
    scanf("%d",&b);
    printf("enter third side of triangle:");
    scanf("%d",&c);
    if(180==a+b+c)
    {
        printf("The angles can form a valid triangle.")
    }
    else
    {
        printf("The angles cannot form a valid triangle.");
    }
}