#include<stdio.h>
#include<math.h>

int main()
{
    int fac(int n);
    int i;
    int sum=0;
    int mul=1;
    for(i=1;i<=10;i++)
    {
        sum+=i;
        mul*=i;
    }
    printf("sum: %d \tmul: %d\n",sum,mul);

    printf("fac: %d",fac(10));
    return 0;
}

int fac(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }

    return n*fac(n-1);
}

