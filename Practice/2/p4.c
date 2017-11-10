#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 100	//最大能计算的数字个数

int fun (int *num,int count);
int num[MAXNUM] = {0};
/***********************************************************************************
功能：利用递归，求各个参数之和
说明：函数间穿数组参数采用指针传参
作者：Side
时间：2017/10/5
***********************************************************************************/
int main(int argc, char const *argv[])
{

	int *pnum = &num[0];
	argv++;//地址加一，排除第一个参数（程序名）
	while(*argv != NULL)
		*(pnum++) = atoi(*(argv++));//atoi参数是一个字符串的首字符的地址
	printf("%d\n",fun(num,argc));

	return 0;
}
int fun (int *num,int count)
{
	if (count < 0)
		return 0;
	return *(num + count) + fun(num,--count);
}