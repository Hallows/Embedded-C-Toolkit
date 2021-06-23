#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
输入：
src：待分割的字符串
separator：用这个字符串来分割
dest：输出目标数组（尽可能大）
num：分割出来了多少字符串
------------------------------------
Input：
src：the srting that you want to cut
separator: the string that you want to use as the separator
dest: target string array point to save the result(as large as possible)
num:how mane string has been saved
*/
void split(char *src,const char *separator,char **dest,int *num)
{
     char *pNext;
     int count = 0;
     if (src == NULL || strlen(src) == 0) //如果传入的地址为空或长度为0，直接终止
        return;
     if (separator == NULL || strlen(separator) == 0) //如未指定分割的字符串，直接终止
        return;
     pNext = (char *)strtok(src,separator); //必须使用(char *)进行强制类型转换(虽然不写有的编译器中不会出现指针错误)
     while(pNext != NULL)
     {
          *dest++ = pNext;
          ++count;
         pNext = (char *)strtok(NULL,separator);  //必须使用(char *)进行强制类型转换
    }
    *num = count;
}