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