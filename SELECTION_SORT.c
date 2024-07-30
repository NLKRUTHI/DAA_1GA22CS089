#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count;
void selection_sort(int A[SIZE], int n)
{
    int i , j , temp;
    for(i=0;i<=n-2;i++)
    {
       min=i;
       for(j=i+1;j<n-1;j++)
       {
           count++;
           if(A[j]<A[min])
               min=j;
       }
       temp = A[i];
       A[i]=A[min];
       A[min]=temp;
    }

}
int main()
{
    int i,n,A[SIZE];
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
     scanf("%d",&A[i]);
    selection_sort(A,n);
    printf("\n enter the elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\n the number of comparison is :%d \n",count);
}
