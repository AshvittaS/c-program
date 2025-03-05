#include<stdio.h>
void disk(int n,char s,char i,char d)
{
    if(n==1)
    {
        printf("The disk 1 is moved from %c to %c\n",s,d);
        return ;
    }
    disk(n-1,s,d,i);
    printf("The disk %d is moved from %c to %c\n",n,s,d);
    disk(n-1,i,s,d);
}
void main()
{
    int n=0;
    printf("Enter number of disk:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Enter a number greater than 0");
        return;
    }
    disk(n,'A','B','C');
}