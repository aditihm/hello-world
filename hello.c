#include<stdio.h>
char na[15];
void name()
{
    printf("Whats your name?\n");
    scanf("%s",&na);
    printf("Nice to meet you %s\n",na);
}
    
void main()
{
    printf("hello world!");
    //coding is fun
    name();
}
