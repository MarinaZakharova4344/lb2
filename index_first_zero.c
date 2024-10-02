#include "function.h"
int index_first_zero(int mass[])
{
	for (int i=0;;i++)
	{
		if(mass[i]==0)
			return i;
	}

}
