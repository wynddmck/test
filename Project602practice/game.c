#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int m = 0;
	int n = 0;
	for (m = 0;m < row;m++)
	{
		for (n = 0;n < col;n++)
		{
			printf(" %c ",board[m][n]);
			if (n < col - 1)
				printf("|");
		}
		printf("\n");
		if (m < row - 1)
		{
			for (n = 0;n < col;n++)
			{
				printf("---");
				if (n < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标:");
		scanf("%d%d", &x, &y);
		if (x>=1 && x <= row && y>=1 && y <= col && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
			printf("输入坐标无效，请重新输入：");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("\n电脑下\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	printf("\n");
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)//行相同
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (j = 0;j < col;j++)//列相同
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[1][j];
	}
	//对角线相同
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[2][2] == board[2][0] && board[2][0] != ' ')
		return board[1][1];
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}