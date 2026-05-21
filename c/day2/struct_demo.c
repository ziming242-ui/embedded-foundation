#include <stdio.h>

struct Sensor //结构体就是：把多个不同类型的数据打包成一个整体。
{
    int id;
    float temperature;
    float voltage;
};


int main(void)
{
    struct Sensor s1;

    s1.id = 1; //通过点运算符来访问结构体成员 id、temperature、voltage
    s1.temperature = 25.6f;
    s1.voltage = 3.3f;

    printf("Sensor id = %d\n", s1.id);
    printf("Temperature = %.2f\n", s1.temperature);
    printf("Voltage = %.2f\n", s1.voltage);

    return 0;
}