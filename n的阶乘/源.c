#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	int result = 1;
	int num = 0;
	scanf("%d", &num);
	for (n = 1; n <=num; n++)
			result *= n;
			printf("%d", result);
	return 0;
}