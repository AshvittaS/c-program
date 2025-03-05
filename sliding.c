#include<stdio.h>
int max(int a[],int k,int len){
    int index=0,current=0,max=0;
    for(int i=0;i<k;i++) current+=a[i];
    for(int i=1;i<len-k;i++){
        current = current - a[i - 1] + a[i + k-1];
        if (current > max)
            max = current;
    }
    return max;
}
void main(){
    int a[] = {1, 4, 2, 10, 2, 3, 1, 0, 20}, k = 4;
    printf("%d",max(a,k,10));
}