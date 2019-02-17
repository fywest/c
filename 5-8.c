#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char c_str[]={'S','Y','L'};
    int i=0;
    for(i=0;i<3;i++)
    {
        putchar(c_str[i]);
    }
    printf("\n");

    for(i=0;i<3;i++)
    {
        putchar(c_str[i]+32);
    }


    return 0;
}
