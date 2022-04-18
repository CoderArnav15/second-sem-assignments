#include <stdio.h>

int main()
{
    // 97 -122= a-z ASCII values
    char cha;
    printf("Enter your character\n");
    scanf("%c", &cha);
    if (cha <= 122 && cha >= 97)
    {
        printf("it is lowercase");
    }
    else
    {
        printf("it is not lowercase");
    }
    return 0;
}