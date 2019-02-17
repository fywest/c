#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    int input=0;

    if(argc!=2)
    {
        return 1;
    }

    input=atoi(argv[1]);
    printf("C %d: H %3.1f",input,1.8*input+32.0);

    return 0;
}
