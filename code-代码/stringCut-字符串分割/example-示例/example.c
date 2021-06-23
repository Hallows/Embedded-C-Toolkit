#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void split(char *src,const char *separator,char **dest,int *num);
void main(void)
{
    int i;
    int num = 0;
    char *apbyRtn[5] = {0};
    char divid[]=" ";
	char g_UartDataRec[]="This is 1";
	int temp;
    printf("In Uart interrupt\n");
    split(g_UartDataRec, divid, apbyRtn, &num);
	for (i = 0; i < num; i++)
	{
		printf("apbyRtn[%d] = %s\n\n", i, apbyRtn[i]);
	}
	if(strcmp(apbyRtn[0],"This")==0)
	{
		temp=atoi(apbyRtn[2]);
		printf("%d",temp);
	}
	
    return;
}

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