#include "unity.h"
#include "bsp_test.h"
#include "../src/app.h"

void test_TheFirst(void)
{
    TEST_IGNORE_MESSAGE("Implement Me");
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_TheFirst);
    return UNITY_END();
}