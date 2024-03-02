#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include"head.h"
int count_venue()
{
    FILE *fp_venue=NULL;
    struct venue b1; 
    int count=0;
    fp_venue=fopen("venue.csv", "r");
    if(fp_venue!=NULL)

    while ( fscanf(fp_venue,"%s", &b1.name) !=EOF)
    {
          count++;  
    }
    
    fclose(fp_venue);
    return count-1;


}

void read_venue()
{

    int index=0, cnt=0;
	FILE* fp_venue = fopen("venue.csv", "r");

	if (!fp_venue)
		printf("Can't open fp_venue file\n");

	else {
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,1024, fp_venue)) 
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
                    strcpy(venue_arr[index].name, value);
                }
                if(column==2)                    
                {
                    //printf("\n col=%d \t", column);
                    strcpy(venue_arr[index].location, value);
                }
                if( column==3)
                {
                    //printf("\n col=%d \t", column);
                    venue_arr[index].capacity=  atoi(value);
                }
                
				//printf("\t[%s ] ", value);
				value = strtok(NULL, ", ");
				
                column++;
			}
            index++;


		}

        cnt=index;

		fclose(fp_venue);
	}

   /* for(index=0; index<cnt; index++  )
    {
            printf("\t [%s] [%s] [%s] [%s] %d %d \n", batches_arr[index].name, batches_arr[index].admission , batches_arr[index].start_date,batches_arr[index].end_date, batches_arr[index].start_time, batches_arr[index].end_time);
    }*/
     return ;  
}
void print_venue()
{
    int index;
    int c= count_venue();
    for(index=0; index<c; index++  )
    {
            printf("\t [%s] [%s] [%d] \n", venue_arr[index].name, venue_arr[index].location , venue_arr[index].capacity);
    }
}