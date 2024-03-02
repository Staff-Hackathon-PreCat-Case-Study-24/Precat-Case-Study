#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include"head.h"

int count_modules()
{
    FILE *fp_modules=NULL;
    struct modules m1; 
    int count=0;
    fp_modules=fopen("modules.csv", "r");
    if(fp_modules!=NULL)

    while ( fscanf(fp_modules,"%s", &m1.name) !=EOF)
    {
          count++;  

    }
    
    fclose(fp_modules);
    printf("\n Module Count: %d ",count);
    return count-1;


}
void read_modules()
{

    int index=0, cnt=0;
	FILE* fp_modules = fopen("modules.csv", "r");

	if (!fp_modules)
		printf("Can't open fp_modules file\n");

	else {
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,1024, fp_modules)) 
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
                    
                    strcpy(modules_arr[index].name, value);
                }
                if(column==2)                    
                {
                  
                    modules_arr[index].lecturehours= atoi(value);
                }
                if( column==3)
                {
                   
                    modules_arr[index].labhours= atoi(value);
                }

                if( column==4)
                {
                   
                    modules_arr[index].duration= atoi(value);
                }

                if( column==5)
                {
                   
                    modules_arr[index].days= atoi(value);
                }
               	printf("\t[%s ] ", value);
				value = strtok(NULL, ", ");
				column++;
			}
            index++;
		}

        cnt=index;

		fclose(fp_modules);
	}

  
     return ;  
}
void print_modules()
{
    int index;
    int c= count_modules();
    for(index=0; index<10; index++  )
    {
            printf("\t [%s] [%d] [%d] [%d] [%d] \n", modules_arr[index].name, modules_arr[index].lecturehours , modules_arr[index].labhours, modules_arr[index].duration,modules_arr[index]);
    }
}