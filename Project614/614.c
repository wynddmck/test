#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//①函数实现字符串逆序打印
//void Reve(char arr[],int sz)
//{
//	int i = 0;
//	char tmp = '0';
//	for (i = 0;i <sz/2;i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[sz - 1-i];
//		arr[sz - 1-i] = tmp;
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[] = "wang ya ni";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reve(arr,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



//②字符串逆序打印（用指针访问）
//void Reve(char* parr,int sz)
//{
//	int i = 0;
//	char tmp = '0';
//	for (i=0;i <sz/2;i++)
//	{
//		tmp = *(parr+i);
//		*(parr+i) = parr[sz - 1-i];
//		parr[sz - 1-i] = tmp;
//		
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[] = "wang ya ni";
//	char* parr = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reve(parr,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



//③字符串逆序打印（用指针访问）(scanf()遇到空格就不继续往下读取了，而gets()可以避免这个缺陷）
//#include<string.h>
//void Reve(char* parr, int str)
//{
//	int i = 0;
//	char tmp = '0';
//	for (i = 0;i < str / 2;i++)
//	{
//		tmp = *(parr + i);
//		*(parr + i) = parr[str - 1 - i];
//		parr[str - 1 - i] = tmp;
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[200] = {0};
//	//scanf("%s", arr);
//	gets(arr);
//	char* parr = arr;
//	int str = strlen(arr);
//	Reve(parr, str);
//	for (i = 0;i < str;i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



//④计算a+aa+aaa+aaaa+aaaaa的和，其中a是一个数字(方法太低级)
//#include<math.h>
//int Sum(int a)
//{
//	int sum = a;
//	sum = 5 * a + 4 * a * pow(10, 1) + 3 * a * pow(10, 2) + 2 * a * pow(10, 3) + 1 * a * pow(10, 4);
//	return sum;
//}
//int main()
//{
//	int Sn = 0;
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",Sum(a));
//	return 0;
//}



