#include<stdio.h>
#include"head.h"
int main()
{
    read_batches();
   print_batches();


    read_faculties();
   print_faculties();

    read_venue();
   print_venue();

    read_modules();
   print_modules();
     batch_plan();

	return 0;
}
	// gcc batches_info.c faculties_info.c venue_info.c  modules_info.c batch_plan.c main.c 
