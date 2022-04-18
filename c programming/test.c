#include <stdio.h>
int main()
{
    int tot_mins, hrs, mins;
    tot_mins = 546;
    scanf("%d", &tot_mins);
    hrs = (tot_mins / 60);
    mins = (tot_mins % 60);
    printf("%d Hours and %d Minutes", hrs, mins);

    return 0;
}