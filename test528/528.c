#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//①统计1-100之间出现9的数字
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//            printf("%d ", i);
//	        count++;
//		}
//	printf("\n总共有%d个", count);
//	return 0;
//}



//②统计1-100之间出现9的次数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n总共有%d个", count);
//	return 0;
//}



//③计算分数的和差(1/1-1/2+1/3-1/4+···-1/100)（奇偶分开去计算）
//int main()
//{
//	int i = 0;
//	float j = 0;
//	float sum1 = 0;
//	float sum2 = 0;
//	for (i = 1;i <= 100;i += 2)
//	{
//        j = 1.0 / i;
//	    sum1 = sum1 + j;
//	}
//	for (i = 2;i <= 100;i += 2)
//	{
//		j = 1.0 / i;
//		sum2 = sum2 - j;
//	}
//	printf("%lf", sum1 + sum2);
//	return 0;
//}



//④计算分数的和差(1/1-1/2+1/3-1/4+···-1/100)（改变符号）
//int main()
//{
//	int i = 0;
//	int sign = 1;
//	double sum = 0;
//	for (i = 1;i <= 100;i++)
//	{
//        sum = sum + sign * (1.0 / i);
//		sign = -sign;
//	}
//	printf("%lf", sum);
//	return 0;
//}



//⑤输出10个数字里面的最大值
//int main()
//{
//	int num[] = { 10,2,5,7,8,91,4,3,0,107};
//	int sz = 0;
//	int max = num[0];
//	int i = 0;
//	sz = sizeof(num) / sizeof(num[0]);
//	printf("一共有%d个数字\n\n", sz);
//	for (i = 0;i < sz ;i++)
//	{
//		printf("%d ", num[i]);
//	}
//	
//	for (i = 0;i < sz;i++)
//	{
//		if (max < num[i])
//		{
//			max = num[i];
//		}
//
//	}
//	printf("\n\n最大值为：%d\n", max);
//	return 0;
//}



//⑥输出乘法口诀表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d * %d = %-2d   ",j,i,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//⑦猜数字游戏（跟着老师的思路，看完老师的代码，听完讲解之后，复制出来的）
//

//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********  1.play  0.exit  *******\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("\n请猜数字>：");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("\n猜大了\n");
//		else if (guess < ret)
//			printf("\n猜小了\n");
//		else
//		{
//			printf("\n恭喜你，猜对了\n\n");
//			break;
//		}
//			
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("\n请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入无效\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}



//⑧设置关机，输入：我是天下第一美，取消关机
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 120");
//again:
//
//	printf("你的电脑将在2分钟之内关机，如果输入：我是天下第一美，可以取消关机\n\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是天下第一美") == 0)
//		system("shutdown -a");
//	else
//		goto again;
//	   
//	return 0;
//}


//⑨用函数实现素数的判断
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	int num = 0;
	for (j = 2;j <= sqrt(n);j++)
	{
		if (n % j == 0)
		{
            num = 0;
		    break;
		}
	}
	if (j > sqrt(n))
		num = 1;
	return num;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100;i <= 200;i++)
		if (is_prime(i) == 1)
		{
			printf("%d\n", i);
			count++;
		}
	printf("\n总共有%d个素数", count);
	return 0;
}