#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//①统计一个数字在二进制表示的时候，包含的1的个数（方法1）
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	printf("请输入你想要计算的数字：");
//	scanf("%d",&a);
//	for (i = 0;i < 32;i++)
//	{
//		if (a & 1 == 1)
//			count++;
//		a=a >> i;//这里的i换成1，结果也是一样的，原因不太清楚
//	}
//	printf("count=%d",count);
//	return 0;
//}



//②统计一个数字在二进制表示的时候，包含的1的个数（方法2）
//int main()
//{
//	unsigned int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while(a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	printf("count=%d", count);
//	return 0;
//}



//③统计一个数字在二进制表示的时候，包含的1的个数（方法3）
//int main()
//{
//	unsigned int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("count=%d", count);
//	return 0;
//}



//④打印一个数字在二进制表示下的奇数位与偶数位
//int main()
//{
//	int i = 0;
//	int a = 0;
//	scanf("%d", &a);
//	printf("打印奇数位：\n");
//	for (i = 30;i >= 0;i -= 2)
//		printf("%d ", (a >> i) & 1);
//	printf("\n打印偶数位：\n");
//	for (i = 31;i >= 1;i -= 2)
//		printf("%d ", (a >> i) & 1);
//	return 0;
//}



//⑤不创建临时变量，交换2个变量的数据（方法1）
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}



//⑥不创建临时变量，交换2个变量的数据（方法2）
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}



//⑦用指针去访问数组内容
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}



//⑧用指针去交换两个数组的内容
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 0,2,4,6,8 };
//	int i = 0;
//	int tmp = 0;
//	for (i = 0;i < sizeof(arr1) / sizeof(arr1[0]);i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("arr1: ");
//	for (i = 0;i < sizeof(arr1) / sizeof(arr1[0]);i++)
//		printf("%d ",arr1[i]);
//	printf("\n");
//	printf("arr2: ");
//	for (i = 0;i < sizeof(arr1) / sizeof(arr1[0]);i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}



//⑨用函数判断100-200之间的素数
//#include <math.h>
//int IsPrime(int num)
//{
//	int i = 0;
//	for (i = 2;i <= sqrt(num);i++)
//	{
//		if (num % i == 0)
//		{
//			return 0;
//            break;
//		}
//	}
//    if(i>sqrt(num))
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	for (num = 100;num <= 200;num++)
//	{
//		if (1 == IsPrime(num))
//		{
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("\n共有%d个素数", count);
//	return 0;
//}



//⑩判断100-200之间的素数
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (num = 100;num <= 200;num++)
//	{
//		for (i = 2;i <= sqrt(num);i++)
//		{
//			if (num % i == 0)
//				break;
//		}
//		if(i>sqrt(num))
//		printf("%d ", num);
//	}
//	return 0;
//}



//11.用函数判断闰年
//int IsLeap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (IsLeap(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n共有闰年%d个", count);
//	return 0;
//}



//12.用函数实现n*n的乘法表
//void Print(int num)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= num;i++)
//	{
//		for (j = 1;j <= i;j++)
//			printf("%2d*%2d=%-3d ", i, j, i * j);
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("请输入你想要的乘法表行数：");
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}



//13.用递归去打印出一个数字的每一位
//void Print(int num)
//{
//	if (num != 0)
//	{
//		Print(num / 10);
//		printf("%d ", num % 10);
//	}
//}
//int main()
//{
//	int num = 123;
//	Print(num);
//	return 0;
//}



//14.非递归非函数实现阶乘计算
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int ret = 1;
//	printf("请输入你想要计算阶乘的数字：");
//	scanf("%d", &num);
//	for (i = 1;i <= num;i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d", ret);
//	return 0;
//}



//15.函数非递归实现阶乘计算
//int Fac(int num)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= num;i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入你想要计算阶乘的数字：");
//	scanf("%d", &num);	
//	printf("结果是：%d",Fac(num));
//	return 0;
//}



//16.函数递归实现阶乘计算
//int Fac(int num)
//{
//	int ret = 1;
//	if (num == 0)
//		return 1;
//	if (num != 1)
//		return num*Fac(num - 1);
//	else
//		return ret = ret * num;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入你想要计算阶乘的数字：");
//	scanf("%d", &num);	
//	printf("结果是：%d",Fac(num));
//	return 0;
//}



//17.strlen的非递归实现
//int MyStr(char arr[])
//{
//	int i = 0;
//	int count1 = 0;
//	char* ch = &arr[0];
//    while((*ch) != '\0')
//	{
//		count1++;
//		ch += 1;
//	}
//	return count1;
//}
//int main()
//{
//	char arr[] = "wang ya ni";
//	int count = MyStr(arr);
//	printf("str=%d", count);
//	return 0;
//}



//18.strlen的递归实现
//int MyStr(char arr[])
//{
//	char* ch = &arr[0];
//	if (*ch != '\0')
//	{
//		return 1 + MyStr(ch+1);
//	}
//	else
//	{
//		return 0;
//	}	
//}
//int main()
//{
//	char arr[] = "wang ya ni";
//	int count = 0;
//	count = MyStr(arr);//传过去的是首元素的地址
//	printf("str=%d", count);
//	return 0;
//}



//19.非递归实现字符串逆序
//int main()
//{
//	char arr[] = "wang ya ni";
//	int sz = 0;
//	int i = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	char tmp = '0';
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (i = 0;i < sz;i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



//20.函数非递归实现字符串逆序
//void RevPrint(char* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	char tmp = '0';
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "wang ya ni";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	RevPrint(arr,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



//21.函数递归实现字符串逆序
//void RevPrint(char* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	char tmp = '0';
//	if (left<right)
//	{	
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//		RevPrint(arr + 1, sz - 2);
//	}
//}
//int main()
//{
//	char arr[] = "wang ya ni";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	RevPrint(arr,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%c", arr[i]);
//	}
//	//printf("%s", arr);//这条语句放在这里打印不出来内容
//	return 0;
//}




//22.函数递归返回一个非负整数的数字之和
//int DigitSum(int num)
//{
//	int ret = 0;
//	if (num != 0)
//	{
//		return (num % 10) + DigitSum(num / 10);
//	}
//	else
//		return num % 10;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入你想要计算的数字：");
//	scanf("%d", &num);
//	printf("%d",DigitSum(num));
//	return 0;
//}



//23.函数递归实现n的k次方计算
int NUMPower(int n, int k)
{
	int i = 1;
	if (i <= k)
	{
		return n * NUMPower(n, k - 1);
	}
	else
		return 1;
}
int main()
{
	int n = 0;
	int k = 0;
	printf("请输入想要计算的n与k：");
	scanf("%d%d", &n, &k);
	printf("n的k次方结果为：%d", NUMPower(n, k));
	return 0;
}



