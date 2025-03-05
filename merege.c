#include <stdio.h>
void merge(int a[], int left, int mid, int right)
{
    int n1 = mid-left + 1;
    int n2 = right - mid;
    int l[n1], r[n2];
    for (int i = 0; i < n1; i++)
    {
        l[i] = a[i + left];
    }
    for (int i = 0; i < n2; i++)
    {
        r[i] = a[mid + i + 1];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            a[k] = l[i];
            i++;
        }
        else
        {
            a[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k++] = l[i];
        i++;
    }
    while (j < n2)
    {
        a[k++] = r[j];
        j++;
    }
}
void sort(int a[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        sort(a, left, mid);
        sort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}
void main()
{
    int a[] = {5,-4,6,-5};
    int s = sizeof(a) / sizeof(a[0]);
    sort(a, 0, s-1);
    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
}