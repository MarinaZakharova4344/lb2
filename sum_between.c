#include "function.h"
int sum_between(int left,int right,int mass[])
{
	int sum=0;
	for (;left<=right;left++)
	{
		sum+=abs(mass[left]);
	}
	return sum;
}
