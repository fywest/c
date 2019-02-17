#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{

    int i=1,sum=0;
    while(i<100)
    {
        sum+=i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
