#include <stdio.h>
int main()
{
    goto r;
    printf("g");
    r:
    printf("H");
    return 0;
}