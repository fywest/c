#include<stdio.h>
#include<math.h>

int main()
{
    
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int *p,i;

	printf("Input 10 number:\n");
	for(i=0;i<10;i++)
	{
		//scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(a+i));
	}
	printf("\n");
	for(p=a;p<a+10;p++)
	{
		printf("%d\t",*p);
	}
	return 0;
}
