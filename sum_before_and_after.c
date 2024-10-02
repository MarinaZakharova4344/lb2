#include "function.h"
int sum_before_and_after(int left,int right,int mass[],int size)
{
	int sum=0;
	for (int i=0;i<=left;i++){
		sum+=abs(mass[i]);
}
        for (;right<size;right++){      
                sum+=abs(mass[right]);
	}
        return sum;
}
