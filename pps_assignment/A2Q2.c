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
        if((a==b)&&(a==c))
        {
            printf("the given triangle is equilateral triangle");
        }
        else if((a!=b)&&(a!=c)&&(b!=c))
        {
        printf("the given triangle is scalene triangle");
        }
        else
        {
            printf("the given triangle is isosceles triangle");
        }
    }
    else
    {
        printf("the angles cannot form a valid triangle.");
    }
    return 0;
}