#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ͳ��һ�������ڶ����Ʊ�ʾ��ʱ�򣬰�����1�ĸ���������1��
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	printf("����������Ҫ��������֣�");
//	scanf("%d",&a);
//	for (i = 0;i < 32;i++)
//	{
//		if (a & 1 == 1)
//			count++;
//		a=a >> i;//�����i����1�����Ҳ��һ���ģ�ԭ��̫���
//	}
//	printf("count=%d",count);
//	return 0;
//}



//��ͳ��һ�������ڶ����Ʊ�ʾ��ʱ�򣬰�����1�ĸ���������2��
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



//��ͳ��һ�������ڶ����Ʊ�ʾ��ʱ�򣬰�����1�ĸ���������3��
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



//�ܴ�ӡһ�������ڶ����Ʊ�ʾ�µ�����λ��ż��λ
//int main()
//{
//	int i = 0;
//	int a = 0;
//	scanf("%d", &a);
//	printf("��ӡ����λ��\n");
//	for (i = 30;i >= 0;i -= 2)
//		printf("%d ", (a >> i) & 1);
//	printf("\n��ӡż��λ��\n");
//	for (i = 31;i >= 1;i -= 2)
//		printf("%d ", (a >> i) & 1);
//	return 0;
//}



//�ݲ�������ʱ����������2�����������ݣ�����1��
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



//�޲�������ʱ����������2�����������ݣ�����2��
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



//����ָ��ȥ������������
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



//����ָ��ȥ�����������������
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



//���ú����ж�100-200֮�������
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
//	printf("\n����%d������", count);
//	return 0;
//}



//���ж�100-200֮�������
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



//11.�ú����ж�����
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
//	printf("\n��������%d��", count);
//	return 0;
//}



//12.�ú���ʵ��n*n�ĳ˷���
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
//	printf("����������Ҫ�ĳ˷���������");
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}



//13.�õݹ�ȥ��ӡ��һ�����ֵ�ÿһλ
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



//14.�ǵݹ�Ǻ���ʵ�ֽ׳˼���
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int ret = 1;
//	printf("����������Ҫ����׳˵����֣�");
//	scanf("%d", &num);
//	for (i = 1;i <= num;i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d", ret);
//	return 0;
//}



//15.�����ǵݹ�ʵ�ֽ׳˼���
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
//	printf("����������Ҫ����׳˵����֣�");
//	scanf("%d", &num);	
//	printf("����ǣ�%d",Fac(num));
//	return 0;
//}



//16.�����ݹ�ʵ�ֽ׳˼���
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
//	printf("����������Ҫ����׳˵����֣�");
//	scanf("%d", &num);	
//	printf("����ǣ�%d",Fac(num));
//	return 0;
//}



//17.strlen�ķǵݹ�ʵ��
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



//18.strlen�ĵݹ�ʵ��
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
//	count = MyStr(arr);//����ȥ������Ԫ�صĵ�ַ
//	printf("str=%d", count);
//	return 0;
//}



//19.�ǵݹ�ʵ���ַ�������
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



//20.�����ǵݹ�ʵ���ַ�������
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



//21.�����ݹ�ʵ���ַ�������
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
//	//printf("%s", arr);//���������������ӡ����������
//	return 0;
//}




//22.�����ݹ鷵��һ���Ǹ�����������֮��
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
//	printf("����������Ҫ��������֣�");
//	scanf("%d", &num);
//	printf("%d",DigitSum(num));
//	return 0;
//}



//23.�����ݹ�ʵ��n��k�η�����
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
	printf("��������Ҫ�����n��k��");
	scanf("%d%d", &n, &k);
	printf("n��k�η����Ϊ��%d", NUMPower(n, k));
	return 0;
}



