#include <stdio.h>
#include "function.h"
int main(){
	int mass[100];
	int size=0, flag=-1, mode=0;
	char c;
	do{
		if (flag==-1){
			scanf("%d%c",&mode,&c);
			flag=0;
		}
	        else scanf("%d%c",&mass[size++],&c);
	}while (c!='\n');
	switch (mode){
	case 0:
		printf("%d\n",index_first_zero(mass));
		break;
	case 1:
		printf("%d\n",index_last_zero(mass,size));
		break;
	case 2:
		printf("%d\n",sum_between(index_first_zero(mass),index_last_zero(mass,size),mass));
		break;
	case 3:
                printf("%d\n",sum_before_and_after(index_first_zero(mass),index_last_zero(mass,size),mass,size));
                break;
	default:
		puts("data in not correct\n");
	}
	return 0;
}

