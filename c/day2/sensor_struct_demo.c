#include <stdio.h>

typedef enum                        //状态
{
    SENSOR_OK,
    SENSOR_WARNING,
    SENSOR_ERROR
} SensorStatus_t;                  //定义一个枚举类型 SensorStatus_t，表示传感器的状态，可以是 OK、WARNING 或 ERROR。 状态的是有限的所以用enum来定义。

typedef struct                      //对象
{
    int id;
    float temperature;
    float voltage;
    SensorStatus_t status;
} Sensor_t;                       //定义一个结构体类型 Sensor_t，表示传感器的基本信息。

const char* get_status_string(SensorStatus_t status)
{
    switch (status)                 //根据传入的状态值，返回对应的字符串表示。
    {
        case SENSOR_OK:
            return "OK";
        case SENSOR_WARNING:
            return "WARNING";
        case SENSOR_ERROR:
            return "ERROR";
        default:
            return "UNKNOWN";
    }
}

int main(void)
{
    Sensor_t sensors[3] =
    {
        {1, 25.6f, 3.3f, SENSOR_OK},
        {2, 48.2f, 3.1f, SENSOR_WARNING},
        {3, 80.5f, 2.8f, SENSOR_ERROR}
    };//多个变量统一管理

    for (int i = 0; i < 3; i++)
    {
        printf("Sensor %d\n", sensors[i].id);
        printf("  Temperature: %.2f\n", sensors[i].temperature);
        printf("  Voltage: %.2f\n", sensors[i].voltage);
        printf("  Status: %s\n", get_status_string(sensors[i].status));
    }

    return 0;
}
//用 enum 表示状态，用 struct 表示对象，用数组管理多个对象，用函数把状态转成可读字符串。