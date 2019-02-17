#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    int count=argc;
    int i=0;
    int sum=0;
    for(i=1;i<count;i++)
    {
        sum+=atoi(argv[i]);
    }
    printf("%d\n",sum);
    return 0;
}
