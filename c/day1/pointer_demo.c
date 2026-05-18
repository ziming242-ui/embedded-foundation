#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;

    printf("a = %d\n", a); //a 的值 
    printf("&a = %p\n", (void*)&a); //a 的地址
    printf("p = %p\n", (void*)p); //p 的值（即 a 的地址）
    printf("*p = %d\n", *p);// *p 的值（即 a 的值）

    *p = 20; // 通过指针修改 a 的值

    printf("After *p = 20:\n"); // 修改后的值
    printf("a = %d\n", a); // a 的值
    printf("*p = %d\n", *p); // *p 的值

    return 0;
}