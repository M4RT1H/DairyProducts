#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h> 
#include "Menu.h"
#include "Structs.h"
#include "Vivod.h"

Factory* fc = (Factory*)malloc(3 * sizeof(Factory));//cделать через списки... ,динамически крч вот 
Tovar* tv = (Tovar*)malloc(3 * sizeof(Tovar));
Postavka* ps = (Postavka*)malloc(3 * sizeof(Postavka));

int kol_tov = 0;
int kol_pos = 0;
int kol_fac = 0;

void sort()
{
	int n = 0;
	printf("Тип сортировки: \n");
	printf("1.Комбинаты(по номеру)\n");
	printf("2.Комбинаты(по алфавиту)\n");
	printf("3.Товары(по номеру)\n");
	printf("4.Товары(по алфавиту)\n");
	printf("5.Количество\n");
	printf("6.Цена\n");
	printf("7.Дата\n");
	printf("\n");
	printf("0.Выход");
	scanf_s("%d", &n);
	for (int i = 0; i < kol_pos; i++)
	{
		bool k = false;
		switch (n)
		{
		case 1:
			k = fc[kol_pos - 1].id> fc[kol_pos].id ;
			if (k)
			{
				Factory tmp = fc[kol_fac - 1];
				fc[kol_fac - 1] = fc[kol_fac];
				fc[kol_fac] = tmp;
			}
			break;
		case 2:
			k = strcmp(fc[kol_pos - 1].name, fc[kol_pos].name) > 0;
			if (k)
			{
				Factory tmp = fc[kol_fac - 1];
				fc[kol_fac - 1] = fc[kol_fac];
				fc[kol_fac] = tmp;
			}
			break;
		case 3:
			k = tv[kol_pos - 1].id>tv[kol_pos].id;
			if (k)
			{
				Tovar tmp = tv[kol_tov - 1];
				tv[kol_tov - 1] = tv[kol_tov];
				tv[kol_tov] = tmp;
			}
			break;
		case 4:
			k = strcmp(tv[kol_tov - 1].name, tv[kol_tov].name) > 0;
			if (k)
			{
				Tovar tmp = tv[kol_tov - 1];
				tv[kol_tov - 1] = tv[kol_tov];
				tv[kol_tov] = tmp;
			}
			break;
		case 5:
			k = ps[kol_pos - 1].kol>ps[kol_pos].kol;
			if (k)
			{
				Postavka tmp = ps[kol_pos - 1];
				ps[kol_pos - 1] = ps[kol_pos];
				ps[kol_pos] = tmp;
			}
			break;
		case 6:
			k = ps[kol_pos - 1].price > ps[kol_pos].price;
			if (k)
			{
				Postavka tmp = ps[kol_pos - 1];
				ps[kol_pos - 1] = ps[kol_pos];
				ps[kol_pos] = tmp;
			}
			break;
		case 0:
			return;
			break;
		default: printf("Не верный выбор \n");
			break;
		}
		
	}
}




int main()
{
	setlocale(LC_ALL, "RUS");

	while (1)
	{

		switch (menu())
		{
		case 1:
			menu_vvod();
			break;
		case 2:
			sort();
			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			menu_vivod();
			break;
		case 7:
			break;
		case 8:
			exit(0);
			break;
		default: printf("Не верный выбор \n");
			break;
		}
		fflush(stdin);
		_getch();
	}
}