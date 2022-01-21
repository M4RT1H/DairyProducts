#pragma once
struct Data 
{
	int day;
	int month;
	int year;
};
struct Adress
{
	char gorod[30];
	char ulica[30];
	int dom;
};
struct Tovar
{
	int id;
	char name[30];
	float volume;
	float mass;
};
struct Factory
{
	int id;
	char name[30];
	char phone_number[30];
	char email[30];
	Adress adres;
};
struct Postavka
{
	int id;
	int id_factory;
	int id_tovar;
	int kol;
	float price;
	Data data;
};
extern struct Factory* fc; //перенести в другой файл globals.h
extern struct Tovar *tv;
extern struct Postavka *ps;
extern int kol_tov ;
extern int kol_pos ;
extern int kol_fac ;