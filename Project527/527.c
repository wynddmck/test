#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
//��ģ���˺ŵ�½����һ��д�����ֵ������У��ٶ����������������Ӧ�����ַ��������Ƕ���������÷������Ǻ���Ϥ������ֻ������int���ͣ�����ѭ����ʵ�֣����ǻ�û��˼·
//int main()
//{
//	int password = 12345;
//	int userpassword=0;
//	printf("���������룺");
//	scanf("%d", &userpassword);
//	if (userpassword == password)
//	{
//		printf("�ɹ���¼\n");
//	}
//	else 
//	{
//		printf("�������������룺");
//		scanf("%d", &userpassword);
//		if (userpassword == password)
//		{
//			printf("�ɹ���¼\n");
//		}
//		else
//		{
//			printf("�������������룺");
//			scanf("%d", &userpassword);
//			if (userpassword == password)
//			{
//				printf("�ɹ���¼\n");
//			}
//			else
//			{
//				printf("��������˺Ŷ���");
//			}
//		}
//	}
//	
//	return 0;
//}

//�ڿ�����ʦ�Ľ���֮�󣬵ڶ���д��ѧ�����ַ����ıȽϺ�����strcmp����һ���ַ������ڶ����ַ�����
//int main()
//{
//	char password[20] = "wyn123456";
//	char userpassword[20] = { 0 };
//	int i = 0;
//	for (i = 0;i <3;i++)
//	{
//		printf("���������룺>");
//		scanf("%s", userpassword);
//		if (strcmp(userpassword , password) == 0)
//		{
//			printf("\n��½�ɹ�");
//			break;
//		}
//		else
//			printf("\n�������\n\n");
//
//	}
//	if (i == 3)
//		printf("������������˳�����");
//
//	return 0;
//}

//�۶���ַ��������ƶ������м���
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


//������������������Ҿ����ĳ������
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
//			printf("�ҵ��ˣ��±���%d", num);
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
//        printf("�Ҳ���");
//	}
//		
//	return 0;
//}

//�ݽ��������ְ��մӴ�С��˳���ӡ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int num = 0;
//	printf("��������Ҫ�Ƚϵ��������֣�");
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
//	printf("�Ӵ�С��˳��Ϊ��%d, %d, %d", a, b, c);
//	
//	return 0;
//}

//�޴�ӡ1-100֮������3�ı���
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


//������շת����������������ֵ����Լ��
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	int i = 0;
//	printf("������Ҫ������������֣�");
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
//	printf("��С��Լ��Ϊ��%d",num2);
//	return 0;
//}


//�����100-200֮�������
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

//�����100 - 200֮����������Ż�֮��ģ�
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


//���ӡ1000-2000֮�������
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