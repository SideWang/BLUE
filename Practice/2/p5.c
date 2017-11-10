#include <stdio.h>
/*
*TwoString[]必须用const修饰，因为argv采用了const修饰，如果不用const编译器会认为argv
存在被修改的风险，所以编译器会警告
*/
char const *TwoString[2];
int fun(char **p);

int main(int argc, char const *argv[])
{
	TwoString[0] = argv[1];
	TwoString[1] = argv[2];

	printf("%s\n",TwoString[1]);//TwoString[0]存的是字符串的首地址，所以直接传首地址就能打印
	//printf(fun(**TwoString) ? "YES\n" : "NO\n");
	fun(&TwoString);

	return 0;
}

int fun(char **p)
{
	printf("%s\n",*p);
	/*
	if(**(p + 1) != **p)
		return 0;
	if((**p == '\0') || (**(p +1) == '\0'))
		return 1;
	fun(*(*p++));
	*/
	return 0;
}