#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�����ú���ʵ�������ַ���������
//void reverseArr(char* str)
//{
//	int len = 0;
//	len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	reverseArr(arr);
//	printf("%s", arr);
//	return 0;
//}


//�ڼ���������2+22+222+2222+22222������ʽ��
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0;i < n;i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//�۴�ӡ100000���ڵ�������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		int tmp = i;
//		int n = 1;
//		while (tmp/10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//            sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//�ܴ�ӡ����
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &line);
//	for (i = 0;i < line;i++)
//	{
//		for (j = 0;j < line-1-i;j++)
//		{
//			printf(" ");
//		}
//		for (j=0;j<2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0;i < line - 1;i++)
//	{
//		for (j = 0;j <= i ;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * (line - i - 1) - 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�ݺ���ˮ���⣨�ⷨһ��
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty / 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d", total);
//	return 0;
//}


//�޺���ˮ���⣨�ⷨ����
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money <= 0)
//	{
//		printf("total=0");
//	}
//	else
//		total = 2 * money - 1;
//	printf("total=%d",total);
//	return 0;
//}


//�߽������е���������ż��ǰ��
//void SortFun(int* arr,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int tmp = 0;
//	while (left<right)
//	{
//		while (left<right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,4,5,6,7,8,9};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	SortFun(arr,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//��̶��е�������Ǵ�ӡ
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j <= i;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//���ж�˭������
//����Ϊ���ɷ��Ĺ��ʣ�
//A˵��������
//B˵����C
//C˵����D
//D˵��C�ں�˵
//��֪�ĸ���������������˵���滰��һ��˵�˼ٻ�
//�����������Щ��Ϣ�ж��ĸ���������

//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd';killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("killer=%c", killer);
//	}
//	return 0;
//}


//����λ�˶�Ա�μ���ʮ��̨��ˮ����������������Ԥ����������
//A˵��B�ڶ����ҵ���
//B˵���ҵڶ���E����
//C˵���ҵ�һ��D�ڶ�
//D˵��C����ҵ���
// E˵���ҵ��ģ�A��һ
//���������󣬷���ÿ���˶�ֻ˵����һ��
//�����������Щ��Ϣȷ������������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b==2) + (a==3) == 1)&&
//							((b==2) + (e==4) == 1)&&
//							((c==1) + (d==2) == 1)&&
//							((c==5) + (d==3) == 1)&&
//							((e==4) + (a==1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//11.���ַ�������2��
//void leftMove(char* arr, int k)
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr);
//	for (i = 0;i < k;i++)
//	{
//		char tmp = *arr;
//		for (j = 0;j <len-1 ;j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	leftMove(arr, 2);
//	printf("%s", arr);
//	return 0;
//}


//12.������ת�����ַ�������ת2��
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		tmp=*left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr+k-1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//	printf("%s", arr);
//	return 0;
//}


//13.���ַ�������2��
//void rightMove(char* arr, int k)
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr);
//	for (i = 0;i < k;i++)
//	{
//		char tmp = *(arr + len - 1);
//		for (j = len-1;j >= 0 ;j--)
//		{
//			*(arr + j) = *(arr + j - 1);
//		}
//		*arr  = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//	rightMove(arr, k);
//	printf("%s", arr);
//	return 0;
//}


//14.������ת�����ַ�������ת2��
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		tmp=*left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr+len-k-1);
//	reverse(arr + len - k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//	printf("%s", arr);
//	return 0;
//}


//15.������ת���ж������ַ����Ƿ����ͨ����ת�õ�
//#include<assert.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		tmp=*left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcdefa";
//	int k = 0;
//	int len = strlen(arr1);
//	assert(k <= len);
//	for (k = 0;k <= len;k++)
//	{
//		char arr1[] = "abcdef";
//		reverse(arr1, arr1 + len - k - 1);
//		reverse(arr1 + len - k, arr1 + len - 1);
//		reverse(arr1, arr1 + len - 1);
//		if (strcmp(arr1, arr2) == 0)
//		{
//			printf("arr1����%d֮����arr2", k);
//			break;
//		}
//	}
//	if (k > len)
//	{
//		printf("�������ַ�������ͨ����ת�õ�\n");
//	}
//	return 0;
//}


//16.������ת���ж������ַ����Ƿ����ͨ����ת�õ�����װ���жϺ�����
//#include<assert.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int is_right_move(char arr1[],char arr2[])
//{
//	int len = strlen(arr1);
//	int k = 0;
//	for (k = 0;k <= len;k++)
//	{
//		char arr1[] = "abcdef";
//		reverse(arr1, arr1 + len - k - 1);
//		reverse(arr1 + len - k, arr1 + len - 1);
//		reverse(arr1, arr1 + len - 1);
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//			break;
//		}
//	}
//	if (k > len)
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int k = 0;
//	int ret = 0;
//	int len = strlen(arr1);
//	assert(k <= len);
//	ret=is_right_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}



//17.ʹ�ÿ⺯���ж������ַ����Ƿ����ͨ����ת�õ�
//#include<string.h>
//int is_left_move(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len2);
//	char* result = strstr(arr1, arr2);
//	if (result == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("N0\n");
//	return 0;
//}


//18.�����Ͼ����в���ָ������(�������Ͻǣ�һ���������ģ�һ��������С�ģ��������½ǣ�һ��������С�ģ�һ���������ģ��������뱻�������ֽ��бȽϣ�
//int foundNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = 2;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,3,4},{2,5,7},{4,8,10} };
//	int k = 3;
//	int x = 3;
//	int y = 3;
//	int ret = foundNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d %d", x, y);
//	}
//	else
//		printf("�Ҳ���");
//	return 0;
//}


int main()
{

	return 0;
}