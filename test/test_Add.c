#include "unity.h"
#include "Add.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Add_given_2_and_3_expect_5(){
  int result = add(2,3);
  TEST_ASSERT_EQUAL(5,result);
  
}
