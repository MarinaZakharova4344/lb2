all: menu.o index_first_zero.o sum_between.o sum_before_and_after.o index_last_zero.o
	gcc menu.o index_first_zero.o sum_between.o sum_before_and_after.o index_last_zero.o -o menu
index_first_zero.o: index_first_zero.c 
	gcc -c index_first_zero.c
index_last_zero.o: index_last_zero.c
	gcc -c index_last_zero.c
sum_between.o: sum_between.c
	gcc -c sum_between.c
index_before_and_after.o: index_befor_and_after.c
	gcc -c index_befor_and_after.c
menu.o: menu.c
	gcc -c menu.c

