#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char arr4[] = "welcome to world!\0";
	char arr3[] = "!!!!!!!!!!!!!!!!\0";
	int left = 0;
	int right = strlen(arr4) - 1;
	while (left <= right)
	{
		arr3[left] = arr4[left];
		arr3[right] = arr4[right];
		system("cls");
		printf("%s\n", arr3);
		Sleep(1000);
		left++;
		right--;
	}
		return 0;
}