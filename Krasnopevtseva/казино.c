#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h> 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int x,kol=0,y,y1,y2,z1,z2;
	char c;
	do
	{
		printf("������� ����� �� 1 �� 100\n");
		scanf_s("%d", &x);
	} while ((x < 1) || (x > 100));
	int mb = rand() % 100;
	printf("����� ��� ����� %d ?\n", mb);
	printf("������?");
	
	do
	{
		printf("������� <, >, ��� =\n");
		scanf_s("%c", &c);
	} while ((c != '>') && (c != '=') && (c != '<'));
	if (mb > x)
	{
		y = mb;
		y1 = 1;
	}
	else
	{
		y1 = mb;
		y = 100;

	}
	while (c != '=')
	{
		if (c == '>')
		{
			mb = y1 + rand() % (y-y1+1);
			printf("����� ��� ����� %d ?\n", mb);
			printf("������?\n");
			do
			{
				printf("������� <, >, ��� =\n");
				scanf_s("%c", &c);
			} while ((c != '>') && (c != '=') && (c != '<'));
			if ((mb > y1) && (c=='>'))
			{
				y1 = mb;
			}
			if ((mb < y) && (c == '<'))
			{
				y = mb;
			}
		}

		if (c == '<')
		{
			mb =y1 + rand() % (y-y1+1);
			printf("����� ��� ����� %d ?\n", mb);
			printf("������?\n");
			do
			{
				printf("������� <, >, ��� =\n");
				scanf_s("%c", &c);
			} while ((c != '>') && (c != '=') && (c != '<'));
			if ((mb < y) && (c=='<'))
			{
				y = mb;
			}
			if ((mb > y1) && (c=='>'))
			{
				y1 = mb;
			}
		}
		kol++;
	}
	if (c == '=')
	{
		printf("���, ������ �� %d �������!!\n",kol);
		
	}
	return 0;
	}

