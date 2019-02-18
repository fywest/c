#include<stdio.h>
#include<math.h>

int main()
{
    
    void copy_str(char* a,char* b);
    char a[]="I am a programmer!";
    char b[20];
    
    copy_str(a,b);
    printf("%s\n",a);
    printf("%s\n",b);
    return 0;
}

void copy_str(char* a,char* b)
{
    
    char* pa,*pb;
    for(pa=a,pb=b;*pa!='\0';pa++,pb++)
    {
        *pb=*pa;
    }
    *pb='\0';

}
