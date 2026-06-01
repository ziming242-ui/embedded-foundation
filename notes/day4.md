日期：
Day 4 UART 调试强化

完成内容：
1. UART_Print() 封装成功
2. KEY2 控制 LED_R，并串口打印 Button Pressed / LED_R ON / LED_R OFF
3. printf 重定向成功，可以打印 count = 123
4. 串口助手发送 1 / 0 / t，STM32 接收后控制 LED_R ON / OFF / TOGGLE

遇到问题：
1. printf 一开始没输出，因为代码被 // 注释
2. HAL_UART_Receive 10ms 版本不稳定，改用 5000ms 阻塞接收完成验收

解决方法：
1. 取消 printf 注释，并勾选 Use MicroLIB
2. 用 RX OK 和 ASCII 打印确认 STM32 是否收到字符
3. 最终使用 5000ms 阻塞式接收作为 Day 4 验收版本

明日任务：
Day 5：RCC 时钟 + HAL_Delay 原理