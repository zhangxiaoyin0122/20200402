#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	    int n = 0;
		int arr[100];
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d ", &arr[i]);
		}
		//错误示例
		/*int idx = 0;
		while (n) {
			scanf("%d ", &arr[++idx]);
			n--;
		}*/
		int count = 0;
		int k;
		scanf("%d", &k);
		for (int l = 0; l < n; l++) {
			if (arr[l] == k)
				count++;
		}
		printf("%d", count);
		system("pause");
		return 0;
}
//打印100-200 之间的素数

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i%j == 0)
				break;
			if (j >= i - 1)
				printf("%d", i);
		}
	}
	system("pause");
	return 0;
}

//输出乘法口诀表

#include <stdio.h>

#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, j*i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

// 判断1000年-- - 2000年之间的闰年

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 400 == 0)
		{
			printf("%d\n", year);
		}
		else
			if (year % 4 == 0 && year % 100 != 0)
			{
				printf("%d\n", year);
			}
	}
	system("pause");
	return 0;
}