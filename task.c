#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int*)b-*(int*)a);
}
void sort(int num[],int size){
    qsort(num,size,sizeof(int),compare);
}
void main()
{
    int n=0;
    printf("Enter the number of marks:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter mark %d:",(i+1));
        scanf("%d",&a[i]);
        getchar();
    }
    sort(a,n);
    printf("The ranks of the students is\n");
    for(int i=0;i<n;i++){
        printf("The mark %d is rank %d\n",a[i],i+1);
    }
}