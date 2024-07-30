#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count;
int BFSM(char T[20],char P[10])
{
    int n,m,i,j;
    n = strlen(T);
    m = strlen(P);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m && P[j]==T[i+j])
        {


                j=j+1;
                count++;
        }
       count++;
       if(j==m)
         return i;
    }
    return -1;
}
int main()
{
    char T[20], P[10];
    int flag;
    printf("\n read a text:\n");
    scanf("%s",T);
    printf("\n read a pattern:\n");
    scanf("%s",P);
    flag=BFSM(T,P);
    if(flag==-1)
    {


       printf("pattern not found \n");
      printf("\n the number of comparison is:%d \n",count);
    }
    else{


        printf("pattern found %d location \n",flag+1);
        printf("\n the number of comparison is:%d \n",count-1);
    }
    return 0;
}
