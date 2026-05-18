#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};// 定义一个包含 5 个整数的数组，并初始化前 5 个元素

    printf("arr[0] = %d\n", arr[0]);      // 输出数组元素的值
    printf("arr[1] = %d\n", arr[1]);      // 输出数组元素的值
    printf("arr[2] = %d\n", arr[2]);      // 输出数组元素的值

    printf("&arr[0] = %p\n", (void*)&arr[0]); // 输出数组元素的地址
    printf("&arr[1] = %p\n", (void*)&arr[1]); // 输出数组元素的地址
    printf("&arr[2] = %p\n", (void*)&arr[2]); // 输出数组元素的地址
    printf("sizeof(int) = %zu\n", sizeof(int)); // 输出单个整数的大小（以字节为单位）
    return 0;
}