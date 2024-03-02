#ifndef HEADER_BATCHES
#define HEADER_BATCHES
#define BATCH_SIZE 10
#define FACULTY_SIZE 10

struct batches
{
    char name[10];
    char admission[10];
    char start_date[20];
    char end_date[20];
    int start_time;
    int end_time;
};
struct batches batches_arr[ BATCH_SIZE ];
void read_batches();
int count_batches();
void print_batches();


struct faculties
{
    char name[10];
    char modulename[10];
    char type[20];
    
};
struct faculties faculties_arr[ FACULTY_SIZE ];
void read_faculties();
int count_faculties();
void print_faculties();


#endif