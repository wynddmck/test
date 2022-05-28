#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
//①模拟账号登陆，第一遍写，出现的问题有：①对于密码的数据类型应该是字符串，但是对于数组的用法还不是很熟悉，所以只好用了int类型，想用循环来实现，但是还没有思路
//int main()
//{
//	int password = 12345;
//	int userpassword=0;
//	printf("请输入密码：");
//	scanf("%d", &userpassword);
//	if (userpassword == password)
//	{
//		printf("成功登录\n");
//	}
//	else 
//	{
//		printf("请重新输入密码：");
//		scanf("%d", &userpassword);
//		if (userpassword == password)
//		{
//			printf("成功登录\n");
//		}
//		else
//		{
//			printf("请重新输入密码：");
//			scanf("%d", &userpassword);
//			if (userpassword == password)
//			{
//				printf("成功登录\n");
//			}
//			else
//			{
//				printf("密码错误，账号冻结");
//			}
//		}
//	}
//	
//	return 0;
//}

//②看了老师的讲解之后，第二遍写，学到了字符串的比较函数：strcmp（第一个字符串，第二个字符串）
//int main()
//{
//	char password[20] = "wyn123456";
//	char userpassword[20] = { 0 };
//	int i = 0;
//	for (i = 0;i <3;i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", userpassword);
//		if (strcmp(userpassword , password) == 0)
//		{
//			printf("\n登陆成功");
//			break;
//		}
//		else
//			printf("\n密码错误\n\n");
//
//	}
//	if (i == 3)
//		printf("三次密码均错，退出程序");
//
//	return 0;
//}

//③多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "wangyani is a beginner!!!!!!!";
//	char arr2[] = "#############################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//
//	return 0;
//}


//④在有序数组里面查找具体的某个数字
//int main()
//{
//	char arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0])-1;
//	int num = 0;
//	while (left <= right)
//	{
//		num = (left + right) / 2;
//		if (arr1[num] == k)
//		{
//			printf("找到了，下标是%d", num);
//			break;
//		}
//
//		else if (arr1[num] > k)
//			right = num - 1;
//		else
//			left = num + 1;
//	}
//	if (left > right)
//	{
//        printf("找不到");
//	}
//		
//	return 0;
//}

//⑤将三个数字按照从大到小的顺序打印
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int num = 0;
//	printf("请输入你要比较的三个数字：");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		num = a;
//		a = b;
//		b = num;
//	}
//	if (a < c)
//	{
//		num = a;
//		a = c;
//		c = num;
//	}
//	if(b<c)
//	{
//	    num = b;
//		b = c;
//		c = num;
//	}
//	printf("从大到小的顺序为：%d, %d, %d", a, b, c);
//	
//	return 0;
//}

//⑥打印1-100之间所有3的倍数
//int main()
//{
//	int i = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//⑦利用辗转相除法计算两个数字的最大公约数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	int i = 0;
//	printf("输入需要计算的两个数字：");
//	scanf("%d%d",&num1,&num2);
//	if (num1 < num2)
//	{ 
//		tmp = num1;
//	    num1 = num2;
//		num2 = tmp;
//	}
//	
//	for (;num1 % num2 != 0;)
//	{
//		i = num1 % num2;
//		num1 = num2;
//		num2 = i;
//	}
//	printf("最小公约数为：%d",num2);
//	return 0;
//}


//⑧输出100-200之间的素数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		for (j=2;j<=sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}	
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//⑨输出100 - 200之间的素数（优化之后的）
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		for (j=2;j<=sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}	
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//⑩打印1000-2000之间的闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
//	}
//	
//	return 0;
}