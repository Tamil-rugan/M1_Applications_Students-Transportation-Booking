#include "unity.h"
#include "declaration.h"

#include "declaration.h"
#define PROJECT_NAME "Booking"

void details(int);
void bill(int, int);

void setUp()
{
}
void tearDown()
{
}

void details(int);
{
   int i, a;
	char val[20], gen[6];
	for (i = 1; i <= k; i++)
    TEST_ASSERT_EQUAL_STRING("Students Name",i);
    TEST_ASSERT_EQUAL_STRING("Students Age" , i);
   
    
}
 void bill(int, int);
{
    int i;
	Node* ptr = start;
	for (i = 1; i <= j; i++)
    TEST_ASSERT_EQUAL(("\t\t\%dst Students Name: ", i);
    TEST_ASSERT_EQUAL("students Age: ", i);
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(details);
  RUN_TEST(bill);
  return UNITY_END();
}
