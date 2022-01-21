#include "Structs.h"
Tovar* poisk_tovar()
{
	Tovar* tv1;
	for (int i = 0; i < kol_tov; i++)
	{
		if (ps->id_tovar == i)
		{
			tv1 = tv;
			return tv1;
		}
	}
}
Factory* poisk_factory()
{
	Factory* fc1;
	for (int i = 0; i < kol_fac; i++)
	{
		if (ps->id_factory == i)
		{
			fc1 = fc;
			return fc1;
		}
	}
}