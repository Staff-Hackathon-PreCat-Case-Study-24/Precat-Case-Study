#include<stdio.h>
#include"head.h"
#include<string.h>
char *find_faculty_name(char *modulename);
void batch_plan()
{
    char module_seq[8][10]={"APTI", "C", "DS","C++","OS","DCN","BIGDATA", "AI"};
    printf(" welcome");
    strcpy( schedule.batchname,batches_arr[0].name);
    strcpy( schedule.start_date ,batches_arr[0].start_date);
    strcpy( schedule.end_date ,batches_arr[0].end_date);
    schedule.capacity=batches_arr[0].admission;
    schedule.no_of_lab_faculties= schedule.capacity/40;

    strcpy (schedule.lecture[0].modulename, module_seq[0]);

    strcpy(schedule.lecture[0].faculty_name,find_faculty_name(schedule.lecture[0].modulename));

   printf("\n schedule.batchname=%s",schedule.batchname );
   printf("\n schedule.start_date=%s",schedule.start_date );
   printf("\n schedule.end_date=%s",schedule.end_date );
   printf("\n schedule.capacity=%d",schedule.capacity );
   printf("\n schedule.batchname=%s",schedule.lecture[0].faculty_name );


    

}
char *find_faculty_name(char *modulename)
{
    int index;
    for(index=0; index<10; index++)
    {
        if( strcmp( modulename, faculties_arr[index].modulename)==0)
            return faculties_arr[index].name;
    }
    return NULL;

}
