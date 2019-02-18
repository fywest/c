#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    
    char a[10];
    int num[10];
    int i;
    int sum=0;
    int average=0;

    for(i=0;i<10;i++)
    {
        //gets(a);
        //printf("%d\tstring : %s \n",i,a);
        //num[i]=atoi(a);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    
    average=sum/10;
    printf("%d",average);
    for(i=0;i<10;i++)
    {
        printf("%d",num[i]);
        if (num[i]>average)
        {
            printf(" more ");
        }
    }
        
    return 0;
}
