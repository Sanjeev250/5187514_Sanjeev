#include "demo2.h"
#include "unity.h"

void setUp(void){}
void tearDown(void){}

void Checkleap(void){
    TEST_ASSERT_TRUE(Leapyear(2000));
    TEST_ASSERT_TRUE_MESSAGE(Leapyear(2004),"this is a leapyear");
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(Checkleap);
    return UNITY_END();
}
