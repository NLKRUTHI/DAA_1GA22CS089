#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count;
void bubble_sort(int A[SIZE], int n)
{
    int i , j , temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            count++;
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
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
    bubble_sort(A,n);
    printf("\n enter the elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\n the number of comparison is :%d \n",count);
}
