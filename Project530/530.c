#include<stdio.h>
#include "add.h"
//①函数的链式调用
//结果为54331，最内层的printf打印543，次外层的printf打印3（543是一个三位数，所以打印3），最外层的printf打印1（3是一个一位的数字，所以打印1）
//int main()
//{
//	printf("%d", printf("%d", printf("%d",543)));
//	return 0;
//}

//②函数声明，函数定义，函数调用
//在add.h这个头文件里面进行了函数声明，在add.c这个文件里面进行了函数体的书写，在530.c里面进行了函数调用
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("%d",Add(x,y));
//}

//③函数递归
//输入一个整形类型的数据，打印出数据的每一个数字，例如：输入123，打印出1 2 3
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


//④自己设计字符串长度的计算函数，也就是模拟strlen函数的功能
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


//⑤同上，但不能设置临时变量（即上面代码中的count）
//利用函数的递归进行实现
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