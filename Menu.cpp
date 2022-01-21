#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include"structs.h"
#include "Functions.h"
#include <conio.h>


void vvod_tovar(Tovar* tv)
{
	setlocale(LC_ALL, "RUS");
	printf("Введите наименование товара\n");
	scanf_s("%s", tv->name, 30);
	printf("Введите объем товара\n");
	scanf_s("%f", &tv->volume);
	printf("Введите массу товара\n");
	scanf_s("%f", &tv->mass);

}
void vvod_factory(Factory* fc)
{
	printf("Введите название \n");
	scanf_s("%s", fc->name, 30);
	printf("Введите рабочий номер \n");
	scanf_s("%s", fc->phone_number,30);
	printf("Введите email \n");
	scanf_s("%s", fc->email, 30);
	printf("Введите город \n");
	scanf_s("%s", fc->adres.gorod, 30);
	printf("Введите улицу \n");
	scanf_s("%s", fc->adres.ulica, 30);
	printf("Введите дом \n");
	scanf_s("%d", &fc->adres.dom);

}

void vvod_postavka(Postavka* ps, Factory* fc, Tovar* tv, int kol_fac, int kol_tov)
{
	int c = 0;
	for (int i = 0; i < kol_fac; i++)
	{
		printf("%d) %s", i + 1, fc[i].name);
	}
	printf("Выберите комбинат");
	scanf_s("%d", &c);
	ps->id_factory = fc[c].id;

	for (int i = 0; i < kol_tov; i++)
	{
		printf("%d) %s", i + 1, tv[i].name);
	}
	printf("Выберите товар");
	scanf_s("%d", &c);
	ps->id_tovar = tv[c].id;
	printf("Введите количество товара");
	scanf_s("%d", &ps->kol);
	printf("Введите цену 1 товара");
	scanf_s("%f", &ps->price);
	printf("Введите дату поставки");
	printf("День: \n");
	scanf_s("%d", &ps->data.day);
	printf("Месяц: \n");
	scanf_s("%d", &ps->data.month);
	printf("Год: \n");
	scanf_s("%d", &ps->data.year);

}

int menu()
{
	int i = 0;
	setlocale(LC_ALL, "RUS");
	system("cls");
	printf("Введите :\n");
	printf("1-Ввод \n");
	printf("2-Сортировка\n");
	printf("3-Поиск \n");
	printf("4-Изменение\n");
	printf("5-Удаление\n");
	printf("6-Вывод \n");
	printf("7-Очистить \n");
	printf("8-Выход \n");
	scanf_s("%d", &i);
	return i;
}
void menu_vvod()
{
	int i = 0;
	while (1)
	{
		system("cls");
		printf("Введите :\n");
		printf("1-Ввод комбинатов \n");
		printf("2-Ввод товара\n");
		printf("3-Ввод поставок\n");
		printf("4-Выход \n");
		scanf_s("%d", &i);//при вводе строк уходит в бесконечный цикл 
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
		default:printf("Нет такого варианта");
		}
	}
}
