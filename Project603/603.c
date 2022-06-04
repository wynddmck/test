#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("******1.������    0.�˳���Ϸ******\n");
	printf("**********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//��ʼ����������
	PrintBoard(board, ROW, COL);//��ӡ����

	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		PrintBoard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);//�ж��Ƿ�Ӯ��
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		printf("��������\n");
		PrintBoard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);//�ж��Ƿ�Ӯ��
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
	menu();
	int input = 0;
	do
	{
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n����Ϸ\n");
			game();
			break;
		case 0:
			printf("\n�˳���Ϸ\n");
			break;
		default:
			printf("\n�����������������룺\n\n");
			break;//////////////�Լ�д��ʱ��©����
	    }
		
	}while (input);
}


int main()
{
	test();
	return 0;
}