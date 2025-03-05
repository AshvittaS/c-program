#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer:");
    //  fflush(stdout);
    scanf("%d", &number);
    printf("You entered: %d\n", number);
    return 0;
}