#include "unity.h"
#include "demo.h"
void setUp(void) {
    // Setup code, if needed
}

void tearDown(void) {
    // Teardown code, if needed
}

void test_add(void) {
    TEST_ASSERT_EQUAL_INT(7, sum(3, 4));
}

void test_subtract(void) {
    TEST_ASSERT_EQUAL_INT(2, diff(5, 3));
}

void test_multiply(void) {
    TEST_ASSERT_EQUAL_INT(15, product(3, 5));
}

void test_divide(void) {
    TEST_ASSERT_EQUAL_INT(2, div(10, 5));
    TEST_ASSERT_EQUAL_INT(0, div(10, 0));  // test division by zero
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);

    return UNITY_END();
}
