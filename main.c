#include <stdio.h>
#include <stdlib.h>
int w[10],x[10],d;
void sumsubset(int s,int k,int r){
int i;
static int b=1;
x[k]=1;
if(w[k]+s==d){
    printf("\n solution %d=",b++);
    for(i=1;i<=k;i++){
        if(x[i]==1)
            printf("%d\t",w[i]);
    }
    printf("\n");
}
else if(s+w[k]+w[k+1]<=d)
    sumsubset(s+w[k],k+1,r-w[k]);
if(s+r-w[k]>=d&&s+w[k+1]<=d)
{
    x[k]=0;
    sumsubset(s,k+1,r-w[k]);
}
if(b==1){
    printf("no solution");
    exit(0);
}
}
int main()
{
    int i,n,sum=0;
    printf("\n read number of elements");
    scanf("%d",&n);
    printf("\n read elements in increasing order\n");
    for(i=1;i<=n;i++){
        scanf("%d",&w[i]);
        sum=sum+w[i];
    }
    printf("\n read values for d:");
    scanf("%d",&d);
    sumsubset(0,1,sum);
    return 0;
}
