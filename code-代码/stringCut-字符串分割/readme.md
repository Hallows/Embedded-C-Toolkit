## 字符串分割函数
用于将一个字符串作为输入来分割另一个字符串
可用于：
嵌入式串口指令的分割
网口信息的分割
其他需要分割字符串的地方

优点：深度加强了C语言先天性的字符串处理不方便的弱点
注意：使用完毕后应释放dest的内存！

建议：
配合strcmp和atoi函数基本可以完成linux风格的串口指令

-----------------------------
## A function to cut string
To cut a string with another key string.
Can be used to:
USART command
Net package
anyother place that you need to cut a string

why this:
1.packaged C origin string cut function
2.easy to use
3.can cut any longer string

Warning:
you should free memory(dest) after use this fuction.

Suggestion:
use with strcmp and atoi function!

