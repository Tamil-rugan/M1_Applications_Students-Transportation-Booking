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
    TEST_ASSERT_EQUAL_STRING("tanuja",username);
    TEST_ASSERT_EQUAL_STRING("123",userpwd);
    
}
 void bill(int, int);
{
    int prize1=700,prize2=900;
    TEST_ASSERT_EQUAL(700,change_prize(prize1));
    TEST_ASSERT_EQUAL(900,change_prize(prize2));
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(details);
  RUN_TEST( bill);
  return UNITY_END();
}
