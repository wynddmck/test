#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int Fac1(int x)
//{
//	int result = 1;
//	int i = 0;
//	for (i = 1; i <= x; i++)
//	{
//		result = result * i;
//	}
//	return result;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入你想要计算阶乘的数字：");
//	scanf("%d", &num);
//	ret = Fac1(num);
//	printf("%d", ret);
//	return 0;
//}




int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}


int main()
{
	int num = 0;
	int ret = 0;
	printf("请输入你想要计算阶乘的数字：");
	scanf("%d", &num);
	ret = Fac2(num);
	printf("%d", ret);
	return 0;
}