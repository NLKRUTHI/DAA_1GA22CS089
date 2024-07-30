#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void merge(int A[size],int l,int m,int r)
{
    int i,j,k,B[size];
    i=l;
    j=m+1;
    k=l;
    while(i<=m&&j<=r){
        count++;
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];

    }
    while(i<=m)
        B[k++]=A[i++];
    while(j<=r)
        B[k++]=A[j++];
    for(i=l;i<=r;i++)
        A[i]=B[i];
}
void mergesort(int A[size],int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergesort(A,l,m);
        mergesort(A,m+1,r);
        merge(A,l,m,r);
    }
}
int main()
{
    int A[size],n,i;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    printf("enter elements are sorted:\n");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    mergesort(A,0,n-1);
    printf("the elements sorted are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",A[i]);
    printf("count=%d\t",count);
    return 0;
}
