#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告
#include <stdio.h>
int main()
{
	int c;
	while (c=getchar()!=EOF)
	{
		printf("%d\n", c);
	}
	printf("%d -at eof\n", c);
	return 0;
}