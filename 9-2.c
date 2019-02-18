#include<stdio.h>
#include<math.h>

int main()
{
   void fun(int n);
    int a;
   scanf("%d",&a);
   fun(a);

    return 0;
}

void fun(int n)
{
    int i=0;
    for(i=0;i<=n;i++)
    {
        if((i%7==0)||(i%11==0))
        {
            printf("%d ",i);
        }
    }

}
