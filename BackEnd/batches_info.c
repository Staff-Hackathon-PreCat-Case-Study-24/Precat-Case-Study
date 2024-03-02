#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include"head.h"

int count_batches()
{
    FILE *fp_batches=NULL;
    struct batches b1; 
    int count=0;
    fp_batches=fopen("batches.csv", "r");
    if(fp_batches!=NULL)

    while ( fscanf(fp_batches,"%s", &b1.name) !=EOF)
    {
          count++;  
    }
    
    fclose(fp_batches);
    return count-1;


}
void read_batches()
{

    int index=0, cnt=0;
	FILE* fp_batches = fopen("batches.csv", "r");

	if (!fp_batches)
		printf("Can't open fp_batches file\n");

	else {
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,1024, fp_batches)) 
        {
            cnt++;
			column = 0;
			row++;
            column++;
            
			
			if (row == 1)
				continue;


			char* value = strtok(buffer, ", ");
				//printf("{%s }\n ", value);

			while (value) 
            {
                //printf(" in while <%s >\n ", value);
                if(column==1)
                {
                    //printf("\n col=%d \t", column);
                    strcpy(batches_arr[index].name, value);
                }
                if(column==2)                    
                {
                    //printf("\n col=%d \t", column);
                    strcpy(batches_arr[index].admission, value);
                }
                if( column==3)
                {
                    //printf("\n col=%d \t", column);
                    strcpy(batches_arr[index].start_date,  value);
                }
                if( column==4)
                {
                    //printf("\n col=%d \t", column);
                    strcpy(batches_arr[index].end_date,  value);
                }
                if( column==5)
                {
                    //printf("\n col=%d \t", column);
                    batches_arr[index].start_time=  atoi(value);
                }

                if (column==6)
                {
                    //printf("\n col=%d \t", column);
                    batches_arr[index].end_time= atoi(value);
                }


				//printf("\t[%s ] ", value);
				value = strtok(NULL, ", ");
				
                column++;
			}
            index++;


		}

        cnt=index;

		fclose(fp_batches);
	}

   /* for(index=0; index<cnt; index++  )
    {
            printf("\t [%s] [%s] [%s] [%s] %d %d \n", batches_arr[index].name, batches_arr[index].admission , batches_arr[index].start_date,batches_arr[index].end_date, batches_arr[index].start_time, batches_arr[index].end_time);
    }*/
     return ;  
}
void print_batches()
{
    int index;
    int c= count_batches();
    for(index=0; index<c; index++  )
    {
            printf("\t [%s] [%s] [%s] [%s] %d %d \n", batches_arr[index].name, batches_arr[index].admission , batches_arr[index].start_date,batches_arr[index].end_date, batches_arr[index].start_time, batches_arr[index].end_time);
    }
}