#include <stdio.h>



int main(void)
{
    int a = 5;
    int b = 5;
    a = 10;


    if(a == b)
        printf("equals\n");
    else
        printf("not equal\n");

    
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &a);


    return (0);
}