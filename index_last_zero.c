#include "function.h"
int index_last_zero(int mass[],int size)
{
	for (int i=size-1;;i--)
	{
		if (mass[i]==0)
			return i;
	}
}
