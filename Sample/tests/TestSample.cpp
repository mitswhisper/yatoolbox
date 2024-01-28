// @file    TestSample.cpp
// @brief   サンプルテストドライバ
// @date    2024.01.28
#include    <CppUTest/TestHarness.h>

extern "C"
{
#include    "Sample.h"
}

TEST_GROUP(BasicTest)
{
    void setup()
    {
    }
    void teardown()
    {
    }
};

TEST(BasicTest, Hello)
{
    const char *pHello = Hello();
    STRCMP_EQUAL("Hello, world!", pHello);
}
