#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include"structs.h"
#include "Functions.h"
#include <conio.h>


void vvod_tovar(Tovar* tv)
{
	setlocale(LC_ALL, "RUS");
	printf("������� ������������ ������\n");
	scanf_s("%s", tv->name, 30);
	printf("������� ����� ������\n");
	scanf_s("%f", &tv->volume);
	printf("������� ����� ������\n");
	scanf_s("%f", &tv->mass);

}
void vvod_factory(Factory* fc)
{
	printf("������� �������� \n");
	scanf_s("%s", fc->name, 30);
	printf("������� ������� ����� \n");
	scanf_s("%s", fc->phone_number,30);
	printf("������� email \n");
	scanf_s("%s", fc->email, 30);
	printf("������� ����� \n");
	scanf_s("%s", fc->adres.gorod, 30);
	printf("������� ����� \n");
	scanf_s("%s", fc->adres.ulica, 30);
	printf("������� ��� \n");
	scanf_s("%d", &fc->adres.dom);

}

void vvod_postavka(Postavka* ps, Factory* fc, Tovar* tv, int kol_fac, int kol_tov)
{
	int c = 0;
	for (int i = 0; i < kol_fac; i++)
	{
		printf("%d) %s", i + 1, fc[i].name);
	}
	printf("�������� ��������");
	scanf_s("%d", &c);
	ps->id_factory = fc[c].id;

	for (int i = 0; i < kol_tov; i++)
	{
		printf("%d) %s", i + 1, tv[i].name);
	}
	printf("�������� �����");
	scanf_s("%d", &c);
	ps->id_tovar = tv[c].id;
	printf("������� ���������� ������");
	scanf_s("%d", &ps->kol);
	printf("������� ���� 1 ������");
	scanf_s("%f", &ps->price);
	printf("������� ���� ��������");
	printf("����: \n");
	scanf_s("%d", &ps->data.day);
	printf("�����: \n");
	scanf_s("%d", &ps->data.month);
	printf("���: \n");
	scanf_s("%d", &ps->data.year);

}

int menu()
{
	int i = 0;
	setlocale(LC_ALL, "RUS");
	system("cls");
	printf("������� :\n");
	printf("1-���� \n");
	printf("2-����������\n");
	printf("3-����� \n");
	printf("4-���������\n");
	printf("5-��������\n");
	printf("6-����� \n");
	printf("7-�������� \n");
	printf("8-����� \n");
	scanf_s("%d", &i);
	return i;
}
void menu_vvod()
{
	int i = 0;
	while (1)
	{
		system("cls");
		printf("������� :\n");
		printf("1-���� ���������� \n");
		printf("2-���� ������\n");
		printf("3-���� ��������\n");
		printf("4-����� \n");
		scanf_s("%d", &i);//��� ����� ����� ������ � ����������� ���� 
		switch (i)
		{
		case 1:
			vvod_factory(&fc[kol_fac]);
			kol_fac++;
			break;
		case 2:
			vvod_tovar(&tv[kol_tov]);
			kol_tov++;
			break;
		case 3:
			vvod_postavka(&ps[kol_pos], fc, tv, kol_fac, kol_tov);
			kol_pos++;
			break;
		case 4:return;
		default:printf("��� ������ ��������");
		}
	}
}
