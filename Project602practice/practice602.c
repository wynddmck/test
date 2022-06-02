#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ð������
//void bubble_sort(int arr[],int sz)
//{
//	int m = 0;
//	int n = 0;
//	int tmp = 0;
//	for (m = 0;m < sz - 1;m++)
//	{
//		int flag = 1;//�Ż�
//		for (n = 0;n < sz - 1 - m;n++)
//		{
//			if (arr[n] > arr[n + 1])
//			{
//				tmp = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = {4,3,0,6,1,9,2,8,7,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//��������
#include "game.h"

void menu()
{
	printf("********************************\n");
	printf("*********1.play   0.exit********\n");
	printf("********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//��ȫ���ĸ��Ӷ��ǿո�
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�����
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);//������
		DisplayBoard(board, ROW, COL);//��ӡ����)
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("\n���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("\n�˳���Ϸ\n");
			break;
		default:
			printf("\nѡ��������ٴ�ѡ��\n\n");
			break;
	    }
	}
	while (input);

}

int main()
{
	test();
	return 0;
}