# Day 3 Project Log

## 今日目标
继续执行 STM32 第一层学习，同时开始建立毕业项目的模块化思路。

## 今日完成
1. 完成 STM32 GPIO 代码函数封装。
2. 使用 LED_All_Off(), LED_SetMode(), Key_Scan(), Blink_Times() 简化 main.c。
3. 使用数组 led_table[] 控制 LED 模式顺序。
4. 完成 gcc 编译 hello.c，并成功运行输出 Hello Embedded C。

## 毕业项目模块拆解
### 1. 硬件模块
- Raspberry Pi / STM32 / 传感器 / 执行机构
- 电源连接与硬件接口
- 摄像头或其他输入设备

### 2. 软件模块
- C/C++ 控制程序
- Linux 环境配置
- 数据采集与处理
- 调试日志输出

### 3. 算法/控制模块
- 图像识别或传感器数据处理
- 控制逻辑
- 状态机
- 异常处理

### 4. 通信/调试模块
- UART / SPI / I2C / CAN 基础通信
- 日志打印
- 与电脑或上位机通信

### 5. 文档/报告模块
- 项目目标
- 系统架构
- 实验结果
- 问题记录
- 周报和最终报告

## 今日问题
1. Keil / CubeMX 代码需要注意 USER CODE 区域。
2. C 代码封装后 main.c 更清晰。
3. gcc 编译时需要注意终端所在目录。

## 明日任务
1. 开始 Day 4：UART 串口打印。
2. 用串口打印 Hello STM32。
3. 尝试按键时串口打印 Button Pressed。
4. 继续整理毕业项目模块需求。

## 可写进简历的关键词
- STM32 GPIO
- HAL Library
- Function Encapsulation
- Embedded C
- gcc
- Debugging



# Day 3 UDS Basic Notes

## 1. UDS 是什么

UDS 全称是 Unified Diagnostic Services，中文一般叫统一诊断服务。

它常用于汽车电子 ECU 诊断，例如：
- 读取 ECU 信息
- 读取故障码
- 清除故障码
- 进入不同诊断会话
- 写入配置参数
- 固件升级前的诊断控制

简单理解：

汽车诊断仪发送 UDS 命令，ECU 根据命令返回数据或执行操作。

---

## 2. UDS 和 CAN 的关系

CAN 是底层通信方式，负责把数据帧发出去。

UDS 是上层诊断协议，规定这些数据帧代表什么诊断命令。

可以这样理解：

CAN 负责传输。
UDS 负责定义命令含义。

例子：

诊断仪通过 CAN 发送一帧数据：
02 10 03

其中：
- 10 是 UDS 服务号
- 03 是子功能，表示进入扩展诊断会话

---

## 3. 0x10 Diagnostic Session Control

服务名：Diagnostic Session Control  
中文：诊断会话控制

作用：
切换 ECU 当前诊断模式。

常见会话：
- 默认会话
- 扩展会话
- 编程会话

例子：
进入扩展诊断会话：

10 03

用途：
很多高级诊断功能不能在默认会话执行，必须先用 0x10 切换会话。

---

## 4. 0x22 Read Data By Identifier

服务名：Read Data By Identifier  
中文：按数据标识符读取数据

作用：
读取 ECU 内部某个数据。

例子：
- 读取软件版本
- 读取硬件版本
- 读取 VIN
- 读取电压
- 读取传感器值

示例请求：

22 F1 90

含义：
读取 DID = F190 的数据。

---

## 5. 0x2E Write Data By Identifier

服务名：Write Data By Identifier  
中文：按数据标识符写入数据

作用：
向 ECU 写入某个参数。

例子：
- 写入配置
- 写入标定值
- 写入设备编号
- 写入部分可修改参数

示例请求：

2E F1 90 12 34

含义：
向 DID = F190 写入数据 12 34。

---

## 6. 当前阶段只需要记住

CAN 是通信总线。
UDS 是诊断协议。

0x10：切换诊断会话。
0x22：读取数据。
0x2E：写入数据。

第一层阶段只做概念预埋，不深入 AUTOSAR、ISO-TP、CANoe。