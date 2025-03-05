#include<stdio.h>
#pragma  pack(1)
struct num{
    int x;
    int y;
    int z;
};
  struct h{
    char v;
    char g;
    int k;
}i;
void main()
{
    printf("%d",sizeof(i));
    struct num k={4,3,6};
    printf("%d",sizeof(k));
    struct num *ptr;ptr=&k;
   printf("%d %d %d",ptr->x,ptr->y,(*ptr).z);
}