#include "unity.h"
#include "declaration.h"

#include "declaration.h"
#define PROJECT_NAME "Movie_Ticket_Booking"

void test_login(void);
void test_change_prize(void);

void setUp()
{
}
void tearDown()
{
}

void test_login(void)
{
    char username[10]="tanuja", userpwd[10]="123";
    //TEST_ASSERT_EQUAL_STRING(0,("tanuja","123"));
    TEST_ASSERT_EQUAL_STRING("tanuja",username);
    TEST_ASSERT_EQUAL_STRING("123",userpwd);
    
}
void test_change_prize(void)
{
    int prize1=700,prize2=900;
    TEST_ASSERT_EQUAL(700,change_prize(prize1));
    TEST_ASSERT_EQUAL(900,change_prize(prize2));
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_login);
  RUN_TEST(test_change_prize);
  return UNITY_END();
}
