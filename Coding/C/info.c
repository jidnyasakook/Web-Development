#include<stdio.h>
int main()
{
    int y;
    char x[50];
    printf("Enter your name,age:");
    scanf("%s%d", x,&y);
    printf("My name is %s and my age is %d",x,y);
    return  0;
}