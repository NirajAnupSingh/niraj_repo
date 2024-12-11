#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("                                      My Calculator\n enter 1 for addition\n enter 2 for subtraction\n enter 3 for multiplication\n enter 4 for division\n");
    scanf("%d",&a);
    printf("enter the first number\n");
    scanf("%d",&b);
    printf("enter the second number\n");
    scanf("%d",&c);
    switch(a)
    {
        case 1:
        d=b+c;
        printf("the sum is %d",d);
        break;
        case 2:
        d=b-c;
        printf("the difference is %d",d);
        break;
        case 3:
        d=b*c;
        printf("the product is %d",d);
        break;
        case 4:
        d=b/c;
        printf("the quotient is %d",d);
        break;
        default:
        printf("invalid input");
    }
    return 0;
}