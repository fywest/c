#include<stdio.h>
#include<math.h>

int main()
{
    void invert(int* a,int count);
    int a[10]={1,3,5,7,9,8,6,4,2,0};
    int *pa;
    for(pa=a;pa<a+10;pa++)
    {
        printf("%d\t",*pa);
    }

    printf("\nafter invert\n");
    invert(a,10);
    for(pa=a;pa<a+10;pa++)
    {
        printf("%d\t",*pa);
    }

    return 0;
}

void invert(int* a,int count)
{
    int *p_start;
    int *p_end;
    int mid;
    int temp;
    p_start=a;
    p_end=a+count-1;
    mid=count/2;
    for(;p_start<a+mid;p_start++,p_end--)
    {
        temp=*p_start;
        *p_start=*p_end;
        *p_end=temp;
    }
    
}
