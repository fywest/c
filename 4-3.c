#include<stdio.h>

int main()
{
    float fa,fb;
    double da,db;
    
    fa=123456.789e5;
    fb=fa+20;
    da = 123456.789e5;
    db=da+20;
    printf("fb=%f\n",fb);
    printf("db=%f\n",db);

    
    char c='c';
    printf("%c \t %d\n",c,(int)c);
    printf("char: %ld\n",sizeof(char));
    printf("short: %ld\n",sizeof(short));
    printf("int: %ld\n",sizeof(int));
    printf("float: %ld\n",sizeof(float));
    printf("double: %ld\n",sizeof(double));
    printf("long: %ld\n",sizeof(long));
    return 0;
}
