#include<stdio.h>
#include "add.h"
//�ٺ�������ʽ����
//���Ϊ54331�����ڲ��printf��ӡ543��������printf��ӡ3��543��һ����λ�������Դ�ӡ3����������printf��ӡ1��3��һ��һλ�����֣����Դ�ӡ1��
//int main()
//{
//	printf("%d", printf("%d", printf("%d",543)));
//	return 0;
//}

//�ں����������������壬��������
//��add.h���ͷ�ļ���������˺�����������add.c����ļ���������˺��������д����530.c��������˺�������
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("%d",Add(x,y));
//}

//�ۺ����ݹ�
//����һ���������͵����ݣ���ӡ�����ݵ�ÿһ�����֣����磺����123����ӡ��1 2 3
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int num = 12345;
//	print(num);
//	return 0;
//}


//���Լ�����ַ������ȵļ��㺯����Ҳ����ģ��strlen�����Ĺ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "wangyani is a good worker";
//	int len = my_strlen(arr);
//	printf("len=%d",len);
//	return 0;
//}


//��ͬ�ϣ�������������ʱ����������������е�count��
//���ú����ĵݹ����ʵ��
int my_strlen(char* str)
{

	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "wangyani is a good worker";
	int len = my_strlen(arr);
	printf("len=%d",len);
	return 0;
}