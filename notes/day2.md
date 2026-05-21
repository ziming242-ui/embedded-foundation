# Day 2 - struct, typedef, enum

## 1. struct
- 结构体用于把多个不同类型的数据组合成一个整体
- 适合描述传感器、设备、配置、协议数据等对象

## 2. typedef
- typedef 用于给类型起别名
- 可以让代码更简洁
- 常见写法：`typedef struct {...} Xxx_t;`

## 3. enum
- 枚举用于表示有限个状态或类别
- 比直接使用数字更清晰、更易维护

## 4. 成员访问
- `.` 用于结构体变量
- `->` 用于结构体指针
- `p->id` 等价于 `(*p).id`

## 5. sensor_struct_demo 理解
- 用 `SensorStatus_t` 表示传感器状态
- 用 `Sensor_t` 表示单个传感器对象
- 用 `sensors[3]` 数组管理多个传感器
- 用 `get_status_string()` 把状态转换成可读字符串

## 6. 今日结论
- 结构体适合管理复杂对象
- typedef 让类型名更规范
- enum 适合表示状态
- 结构体 + 枚举 + 数组是嵌入式代码中的高频组合