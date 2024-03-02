#ifndef HEADER_BATCHES
#define HEADER_BATCHES
#define BATCH_SIZE 10
#define FACULTY_SIZE 10
#define VENUE_SIZE 10
#define MODULE_SIZE 10

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

struct venue
{
    char name[10];
    char location[10];
    int capacity;
};

struct venue venue_arr[ VENUE_SIZE ];
void read_venue();
int count_venue();
void print_venue();

struct modules
{
    char name[10];
    int lecturehours;
    int labhours;
    int duration;
    int days;
};
struct modules modules_arr[ MODULE_SIZE ];

void read_modules();
int count_modules();
void print_modules();


struct batch_plan
{
    char batchname[10];
    char start_date[20];
    char end_date[20];
    int  capacity;
    int no_of_lab_faculties;   // capacity/40

    char venue_name[20];

    struct lecture_info 
    {
        char modulename[20];
        char faculty_name[20];
        char module_start_date[20];
        char module_end_date[20];
        int no_of_day;
    }lecture[8];
    
    struct lab_info 
    {
        char modulename[20];
        char faculty_name[20][3];
        char module_start_date[20];
        char module_end_date[20];
        int no_of_day;        
    }lab[3];
};
struct batch_plan schedule;


void batch_plan();
#endif