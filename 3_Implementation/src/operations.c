#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"header.h"

// Defining Structure
typedef struct mynode {
	char name[20];
	char gen[6];
	int age;
	struct mynode* link;
} Node;

Node* start = NULL;

// Global variables
char source[20], des[20], train[40];
char station[40], cla[40];
int time1, time2, a[55];

// Function for calculation of amount
int cal(int y1, int y2, int h)
{
	int b, c, i, t, r, n;
	printf("\t\tEnter Your Choice......\n");
	printf("\t\t1. Slepper Class....\n");
	printf("\t\t2. A.C Class.......\n");
	scanf("%d", &i);
	switch (i) {
	case 1: {
		strcpy(cla, "Slepper Class");
		b = y2 * h;
		c = b + (b * 0.18);
	} break;
	case 2: {
		printf("\t\tEnter Your Choice....\n");
		printf("\t\t1. 3A Class....\n");
		printf("\t\t2. 2A Class....\n");
		printf("\t\t3. 1st Class A.C.....\n");
		scanf("%d", &n);
		switch (n) {
		case 1: {
			strcpy(cla, "3A Class");
			b = y1 * h;
			c = b + (b * 0.18);
		} break;
		case 2: {
			strcpy(cla, "2A Class");
			b = (y1 + 1000) * h;
			c = b + (b * 0.18);
		} break;
		case 3: {
			strcpy(cla, "1st Class A.C.");
			b = (y1 + 5000) * h;
			c = b + (b * 0.18);
		} break;
		default: {
			printf("\t\tEnter Right Choice......\n");
		}
		}
	} break;
	default: {
		printf("\t\tEnter Right Choice......\n");
	}
	}
	return c;
}

// Function for taking details
// of Students
void details(int k)
{
	int i, a;
	char val[20], gen[6];
	for (i = 1; i <= k; i++) {
		printf("Enter The %dth Students Name: ", i);
		fflush(stdin);
		gets(val);
		printf("Enter The %dth students Gender: ", i);
		fflush(stdin);
		gets(gen);
		printf("Enter The %dth Students Age: ", i);
		fflush(stdin);
		scanf("%d", &a);

		// Calling add_node() function
		add_node(val, gen, a);
	}
}

// Function to add details in node
// for each passengers
void add_node(char lol[20], char der[6], int b)
{
	Node *newptr = NULL, *ptr;
	newptr = (Node*)malloc(sizeof(Node));
	strcpy(newptr->name, lol);
	strcpy(newptr->gen, der);
	newptr->age = b;
	newptr->link = NULL;
	if (start == NULL)
		start = newptr;
	else {
		ptr = start;
		while (ptr->link != NULL)
			ptr = ptr->link;
		ptr->link = newptr;
	}
}

// Function for chosing seats
int seat(int p)
{
	int i;
	printf("\t		 -:SEAT MATRIX:-	 \n");
	printf("\t(U) (M)	 (L) (L) "
		" (U)\n\n");
	printf("\t01(student) 02(student)	 03(student)\t04(student)	 "
		"05(student)\n\n");
	printf("\t06(Student) 07(student)	 08(student)\t09(student)	 "
		"10(student)\n");
	printf("\t11(student) 12(student)	 13(student)\t14(student)	 "
		"15(student)\n\n");
	printf("\t16(student) 17(student)	 18(student)\t19(student)	 "
		"20(student)\n");
	printf("\t21 22	 23\t24	 "
		"25\n\n");
	printf("\t26 27	 28\t29	 "
		"30\n");
	printf("\t31 32	 33\t34	 "
		"35\n\n");
	printf("\t36 37	 38\t39	 "
		"40\n");
	printf("\t41 42	 43\t44	 "
		"45\n\n");
	printf("\t46 47	 48\t49	 "
		"50\n");
	printf("\t51 52	 53\t54	 "
		"55\n\n");
	printf("\t56 57	 58\t59	 "
		"60\n");
	printf("\tEnter Seat Numbers: \n");
	for (i = 0; i < p; i++)
		scanf("%d", &a[i]);
}

// Function for printing receipt
void bill(int y, int j)
{
	int i;
	Node* ptr = start;
	for (i = 1; i <= j; i++) {
		printf("\t\t\%dst Students Name: ", i);
		puts(ptr->name);
		printf("\t\t%dst Students Gender: ", i);
		puts(ptr->gen);
		printf("\t\t%dst students Age: %d\n\n", i,
			ptr->age);
		ptr = ptr->link;
	}
	printf("\t\tSource Place: ");
	puts(source);
	printf("\t\tDestination Place: ");
	puts(des);
	printf("\t\tThe Boarding Station: ");
	puts(station);
	printf("\t\tTrain Is: ");
	puts(train);
	printf("\t\tAllocated Class: ");
	puts(cla);
	printf("\t\tBoarding Time: %d:%d\n", time1, time2);
	printf("\t\tTotal Bill Amount: %d\n", y);
	printf("\t\tAllocated Seats Are: \n");
	for (i = 0; i < j; i++) {
		printf("\t\t%d ", a[i]);
	}
	printf("\n");
	printf("\t\t\t\tThank You......\n");
}
