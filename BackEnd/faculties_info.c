#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include"head.h"

int count_faculties()
{
    FILE *fp_faculties=NULL;
    struct faculties f1; 
    int count=0;
    fp_faculties=fopen("faculties.csv", "r");
    if(fp_faculties!=NULL)

    while ( fscanf(fp_faculties,"%s", &f1.name) !=EOF)
    {
          count++;  
    }
    
    fclose(fp_faculties);
    return count-1;


}
void read_faculties()
{

    int index=0, cnt=0;
	FILE* fp_faculties = fopen("faculties.csv", "r");

	if (!fp_faculties)
		printf("Can't open fp_faculties file\n");

	else {
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,1024, fp_faculties)) 
        {
            cnt++;
			column = 0;
			row++;
            column++;
            
			
			if (row == 1)
				continue;


			char* value = strtok(buffer, ", ");
				
			while (value) 
            {
                
                if(column==1)
                {
                    
                    strcpy(faculties_arr[index].name, value);
                }
                if(column==2)                    
                {
                  
                    strcpy(faculties_arr[index].modulename, value);
                }
                if( column==3)
                {
                   
                    strcpy(faculties_arr[index].type,  value);
                }
               	//printf("\t[%s ] ", value);
				value = strtok(NULL, ", ");
				column++;
			}
            index++;
		}

        cnt=index;

		fclose(fp_faculties);
	}

  
     return ;  
}
void print_faculties()
{
    int index;
    int c= count_faculties();
    for(index=0; index<c; index++  )
    {
            printf("\t [%s] [%s] [%s \n", faculties_arr[index].name, faculties_arr[index].modulename , faculties_arr[index].type);
    }
}