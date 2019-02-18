#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    char c[]="I love shiyanlou";
    printf("%s\n",c);

    char d[]={'I',' ','l','o','v','e','\0',' ','s','h','i','y','a','n','l','o','u','\0'};
    printf("%s\n",d);
    printf("length : %ld\n",strlen(d));
    
    printf("compare : %d\n",strcmp("good","good"));
    return 0;
}
