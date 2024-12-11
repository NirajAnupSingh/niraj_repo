#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("The ASCII value of %c is %d",ch,ch);
    if ((ch>=65 && ch<=90)||(ch>='a' && ch<='z'))
    {
        printf("\nThe character is an alphabet");
    }
    else if (ch>=48 && ch<=57)
    {
        printf("\nThe character is a digit");
        if (ch%2==0)
        {
            printf("\nThe digit is even");
        }
        else
        {
            printf("\nThe digit is odd");
        }
    }
    else
    {
            printf("\nThe character is a special symbol");
    }
    return 0;
}