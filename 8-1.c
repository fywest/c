#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    int a[10]={1,3,4,2,6,9,0,8,5,7};
    int i=0;
    int j=0;
    int min=0;

    int n=10;
    int p=0;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        //printf("%d\t",a[i]);
        min=a[i];
        for(j=i;j<n;j++)
        {
            
            if(min>a[j])
            {
                a[i]=a[j];
                a[j]=min;
                min=a[i];
            }
        }

    

    for(p=0;p<n;p++)
    {
    
        printf("%d ",a[p]);
    }
    printf("\n");
    }

    printf("\n");
    return 0;
}
