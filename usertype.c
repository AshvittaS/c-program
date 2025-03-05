#include<stdio.h>
typedef int i;
typedef char s;
typedef struct h
{
    s name[100];
    i am;
}to;
void main()
{
    to a={"HAR",90};
    printf("%s%d", a.name, a.am);
    to t;
    printf("Enter name:");
    fgets(t.name,100,stdin);
    printf("Enter amount:");
    scanf("%d",&t.am);
    printf("%s%d",t.name,t.am);
}