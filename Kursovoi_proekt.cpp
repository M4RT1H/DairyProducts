#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "Menu.h"

struct tovar
{
	int nomer_tovara;//kol
	char name[30];
	float stoimost;

};
struct pokypateli
{
	int nomer_pokypateli;
	char name[30];
};
struct Sale
{
	int nomer_Sale;
	struct tovar tv;
	struct pokypateli pk;
};

int main()
{
	int kol = 0;
	while (1)
	{
		switch (menu())
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:
			break;
		case 8:
			;
			break;
		default: printf("Ne vernii vibor \n");
			break;
		}
		fflush(stdin);
		_getch();
	}
}