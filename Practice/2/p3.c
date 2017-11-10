#include <stdio.h>
#include <stdlib.h>
#define 	UP		1
#define		DOWN	0

void fun(int begin,int end);

int step = 1;

/***********************************************************************************
功能：利用递归，步进为第三个数，从第一个数打印到第二个数
作者：Side
时间：2017/10/5
***********************************************************************************/
int main(int argc, char *argv[])
{
	int begin = 0,end = 0;

	begin = atoi(argv[1]);
	end	= atoi(argv[2]);
	step = atoi(argv[3]);
	fun(begin,end);
	printf("\n");

	return 0;
}
/***********************************************************************************
功能：利用递归，步进为第三个数，从第一个数打印到第二个数
作者：Side
时间：2017/10/5
***********************************************************************************/
void fun(int begin,int end)
{
	static int flag = -1;
	if (flag == -1)			//判断是从小到大还是从大到小
		if (begin > end)
			flag = DOWN;
		else
			flag = UP;
	if (flag)
		if (begin > end) return;//如果递归到相等则返回
	if (!flag)
		if (begin < end) return;//如果递归到相等则返回
	printf("%d\t",begin);
	fun((flag ? (begin += step) : (begin -= step)),end);
}