#include<stdio.h>

//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while (n < 11)
//	{
//		ret *= n;
//		n++;
//		sum += ret;	
//	}	
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i =1;i < 11;i++)
//	{
//		ret = 1;
//		for (n = 1;n <= i;n++)
//		{
//			ret *= n;
//			printf("%d\n", ret);
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

int main()
{
	int n = 0;
	int sum = 0;
	int ret = 1;
		for (n = 1;n < 11;n++)
		{
			ret *= n;
			sum += ret;
		}
		
	printf("%d", sum);
	return 0;
}