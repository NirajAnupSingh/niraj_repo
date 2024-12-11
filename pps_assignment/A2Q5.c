#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("The ASCII value of %c is %d",ch,ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("\nThe character is a vowel");
    }
    else
    {
        printf("\nThe character is a consonant");
    }
    return 0;
}