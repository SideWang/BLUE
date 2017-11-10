#include <stdio.h>

long fun (long n)
{
	if (n == 1)
		return 1;

	return n * fun (n-1);
}

int main(int argc, char const *argv[])
{
	printf("%ld\n",fun(5));
	return 0;
}