#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include"structs.h"
#include "Functions.h"
#include <conio.h>
void vivod_fac()
{
	printf("========================================================================================================================");
	printf("   �  |    ��������   |   �������   |        Email       |     �����     |     �����     | ��� |  \n");
	printf("      |               |   �����     |                    |               |               |     |  \n");
	printf("========================================================================================================================");
	for (int i = 1; i <= kol_fac; i++)
	{
		printf("%6d|%15s|%13s|%20s|%15s|%15s|%5d|\n", i, fc->name, fc->phone_number, fc->email, fc->adres.gorod, fc->adres.ulica, fc->adres.dom);
		printf("------------------------------------------------------------------------------------------------------------------------");
	}

}
void vivod_tov()

{
	setlocale(LC_ALL, "RUS");
	printf("===============================================                                                                         ");
	printf("   �  |    ��������   |   �����   |    ���    |\n");
	printf("      |               |     �3    |     ��    |\n");
	printf("===============================================                                                                          ");
	for (int i = 1; i <= kol_tov; i++)
	{
		printf("%6d|%15s|%11.2f|%11.2f|\n", i, tv->name, tv->volume, tv->mass);
		printf("-----------------------------------------------                                   ");
	}
}
void vivod_pos()

{
	printf("========================================================================================================================");
	printf("   �  |    �����   |   ��������     |    �����     |     ��������    |    ����������    |   ����   |   ����  \n");
	printf("      |  ��������� |   ���������    |    ������    |       ������    |                  |          |         \n");
	printf("========================================================================================================================");
	for (int i = 1; i <= kol_pos; i++)
	{
		poisk_factory();
		poisk_tovar();
		printf("%6d|%12d|%16s|%15d|%17s|%18d|%10f|%2d.%2d.%2d\n", i, ps->id_factory, fc->name, ps->id_tovar, tv->name, ps->kol, ps->price, ps->data.day, ps->data.month, ps->data.year);
		printf("-----------------------------------------------                                   ");
	}
}
void menu_vivod()
{
	int i = 0;
	while (1)
	{
		system("cls");
		printf("������� :\n");
		printf("1-����� ���������� \n");
		printf("2-����� �������\n");
		printf("3-����� �������� \n");
		printf("4-����� \n");
		scanf_s("%d", &i);
		switch (i)
		{
		case 1:
			vivod_fac();
			break;
		case 2:
			vivod_tov();
			break;
		case 3:
			vivod_pos();
			break;
		case 4:
			return;
			break;
		default: printf("�������� ����");
		}
		fflush(stdin);
		_getch();
	}
}