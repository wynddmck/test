#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//①冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int m = 0;
//	int n = 0;
//	int tmp = 0;
//	for (m = 0;m < sz - 1;m++)
//	{
//		int flag = 1;//优化
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


//②三子棋
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
	char board[ROW][COL] = { 0 };//让全部的格子都是空格
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);//电脑下
		DisplayBoard(board, ROW, COL);//打印棋盘)
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("\n请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("\n退出游戏\n");
			break;
		default:
			printf("\n选择错误，请再次选择\n\n");
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