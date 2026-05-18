#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello";

    printf("str = %s\n", str);
    printf("sizeof(str) = %zu\n", sizeof(str));     //实际上是'h' 'e' 'l' 'l' 'o' '\0'
    printf("strlen(str) = %zu\n", strlen(str)); //实际字数

    return 0;
}