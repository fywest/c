#include<stdio.h>
#include<math.h>

int main()
{
    char a[]="I am a programmer!";
    char b[20];
    char* pa,*pb;

    for(pa=a,pb=b;*pa!='\0';pa++,pb++)
    {
        *pb=*pa;
    }
    *pb='\0';
    printf("%s\n",a);
    printf("%s\n",b);
    return 0;
}
