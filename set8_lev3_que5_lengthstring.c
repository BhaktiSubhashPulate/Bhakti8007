#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "Welcome to the programming";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}