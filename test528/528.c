#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ͳ��1-100֮�����9������
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
//	printf("\n�ܹ���%d��", count);
//	return 0;
//}



//��ͳ��1-100֮�����9�Ĵ���
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
//	printf("\n�ܹ���%d��", count);
//	return 0;
//}



//�ۼ�������ĺͲ�(1/1-1/2+1/3-1/4+������-1/100)����ż�ֿ�ȥ���㣩
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



//�ܼ�������ĺͲ�(1/1-1/2+1/3-1/4+������-1/100)���ı���ţ�
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



//�����10��������������ֵ
//int main()
//{
//	int num[] = { 10,2,5,7,8,91,4,3,0,107};
//	int sz = 0;
//	int max = num[0];
//	int i = 0;
//	sz = sizeof(num) / sizeof(num[0]);
//	printf("һ����%d������\n\n", sz);
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
//	printf("\n\n���ֵΪ��%d\n", max);
//	return 0;
//}



//������˷��ھ���
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



//�߲�������Ϸ��������ʦ��˼·��������ʦ�Ĵ��룬���꽲��֮�󣬸��Ƴ����ģ�
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
//		printf("\n�������>��");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("\n�´���\n");
//		else if (guess < ret)
//			printf("\n��С��\n");
//		else
//		{
//			printf("\n��ϲ�㣬�¶���\n\n");
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
//		printf("\n��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������Ч\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}



//�����ùػ������룺�������µ�һ����ȡ���ػ�
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 120");
//again:
//
//	printf("��ĵ��Խ���2����֮�ڹػ���������룺�������µ�һ��������ȡ���ػ�\n\n");
//	scanf("%s", input);
//	if (strcmp(input, "�������µ�һ��") == 0)
//		system("shutdown -a");
//	else
//		goto again;
//	   
//	return 0;
//}


//���ú���ʵ���������ж�
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
	printf("\n�ܹ���%d������", count);
	return 0;
}