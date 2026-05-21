#include <stdio.h>

typedef struct
{
    int id;
    float temperature;
    float voltage;
} Sensor_t;

int main(void)
{
    Sensor_t s1 = {2, 30.5f, 5.0f};
    Sensor_t *p = &s1;

    printf("Using . operator:\n");
    printf("id = %d\n", s1.id);
    printf("temperature = %.2f\n", s1.temperature);//通过点运算符来访问结构体成员 id、temperature、voltage
    printf("voltage = %.2f\n", s1.voltage);

    printf("\nUsing -> operator:\n");
    printf("id = %d\n", p->id);
    printf("temperature = %.2f\n", p->temperature);//通过箭头运算符来访问结构体成员 id、temperature、voltage    
    printf("voltage = %.2f\n", p->voltage);

    return 0;
}