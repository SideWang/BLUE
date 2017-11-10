#include <stdio.h>\

long fun(long n,long m)
{
	if (n < m)
		return 0;
	if (n == m)
		return 1;
	if (m == 0)
		return 1;

	return fun(n-1,m-1) + fun(n-1,m);
}

int main(int argc, char const *argv[])
{
	printf("%ld\n",fun(10,3));

	return 0;
}