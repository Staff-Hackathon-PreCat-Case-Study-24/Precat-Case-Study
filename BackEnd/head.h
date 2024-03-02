#ifndef HEADER_BATCHES
#define HEADER_BATCHES
#define BATCH_SIZE 10

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

#endif