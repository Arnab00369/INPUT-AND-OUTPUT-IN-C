#include <stdio.h>
int main()
{
    char st[100];
    printf("Enter a String ::\n");
    gets(st);
    printf("The String is ::\n");
    int a=printf(st);
    printf("\nLength of String is = %d",a);
    return 0;
}
