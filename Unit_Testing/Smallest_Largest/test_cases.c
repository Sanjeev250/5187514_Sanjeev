#include "unity.h"
#include "demo1.h"

int arr[] = {1, 2, 3, 4, 0};
int size = 5;

void setUp(void) {
    // Code to run before each test (can be empty)
}

void tearDown(void) {
    // Code to run after each test (can be empty)
}


void small(void){
    TEST_ASSERT_EQUAL_INT(0, find(arr, size));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(small);
    return UNITY_END();
}
