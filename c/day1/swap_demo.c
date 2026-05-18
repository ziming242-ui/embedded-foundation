#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;  // 将 a 的值存储在临时变量 temp 中
    *a = *b;    // 将 b 的值赋给 a
    *b = temp;  // 将 temp 的值赋给 b
}

int main(void)
{
    int x = 3;  // 定义两个整数变量 x 和 y，并初始化它们的值
    int y = 7;  

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);   // 调用 swap 函数，传递 x 和 y 的地址，以交换它们的值 想让函数修改外部变量，就传地址，而不是只传值。

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}