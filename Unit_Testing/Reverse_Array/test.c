#include "unity.h"
#include "array.h"

int a[] = {2, 3, 4, 5, 6, 7};
int n = 6;

void setUp(void) {
    // Code to run before each test (can be empty)
}

void tearDown(void) {
    // Code to run after each test (can be empty)
}

void reverse_test(void) {
    int expected[] = {7, 6, 5, 4, 3, 2};
    TEST_ASSERT_EQUAL_INT16_ARRAY(expected, reverse(a, n), n);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(reverse_test);
    return UNITY_END();
}
