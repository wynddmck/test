#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ٺ���ʵ���ַ��������ӡ
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



//���ַ��������ӡ����ָ����ʣ�
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



//���ַ��������ӡ����ָ����ʣ�(scanf()�����ո�Ͳ��������¶�ȡ�ˣ���gets()���Ա������ȱ�ݣ�
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



//�ܼ���a+aa+aaa+aaaa+aaaaa�ĺͣ�����a��һ������(����̫�ͼ�)
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



