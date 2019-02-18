#include <stdio.h>

int main()
{

	void swap(int* p1,int* p2);
	int a=100,b=10;
	int *pa,*pb;

	pa=&a;
	pb=&b;

	printf("a=%d, b=%d\n",a,b);
	printf("pa:%p,pb:%p\n",pa,pb);

	printf("after swap:\n");
	
	swap(pa,pb);
	printf("a=%d, b=%d\n",a,b);
	printf("pa:%p,pb:%p\n",pa,pb);
	return 0;
}

void swap(int* p1,int* p2)
{

	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
