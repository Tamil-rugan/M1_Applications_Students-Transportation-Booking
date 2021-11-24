#ifndef _MAIN_H
#define _MAIN_H


// Defining Structure
typedef struct mynode {
	char name[20];
	char gen[6];
	int age;
	struct mynode* link;
} Node;

Node* start = NULL;

void details(int);
int seat(int);
int cal(int, int, int);
void bill(int, int);

// Global variables
char source[20], des[20], train[40];
char station[40], cla[40];
int time1, time2, a[55];


#endif
