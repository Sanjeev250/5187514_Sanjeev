#include "unity.h"
#include "demo3.h"
void setUp(void) {
    // Code to run before each test (can be empty)
}

void tearDown(void) {
    // Code to run after each test (can be empty)
}

void reverse_test(void) {
    char *name="sanjeev";
    TEST_ASSERT_EQUAL_STRING("veejnas",reverse(name));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(reverse_test);
    return UNITY_END();
}