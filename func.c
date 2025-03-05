#include <stdio.h>
#pragma pack(1)
struct time
{
    unsigned int hours : 5;
    unsigned int minutes : 6;
    unsigned int second : 6;
}t;
int main()
{
    struct time t = {5, 30, 60};
    printf(" the time is %d%d%d%d", t.hours, t.minutes, t.second,sizeof(t));
    return 0;
   
}