#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("******1.三子棋    0.退出游戏******\n");
	printf("**********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//初始化棋盘数据
	PrintBoard(board, ROW, COL);//打印棋盘

	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		PrintBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);//判断是否赢了
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		printf("电脑下棋\n");
		PrintBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);//判断是否赢了
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
	menu();
	int input = 0;
	do
	{
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n玩游戏\n");
			game();
			break;
		case 0:
			printf("\n退出游戏\n");
			break;
		default:
			printf("\n输入有误，请重新输入：\n\n");
			break;//////////////自己写的时候漏掉了
	    }
		
	}while (input);
}


int main()
{
	test();
	return 0;
}