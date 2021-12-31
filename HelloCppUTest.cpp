//https://qiita.com/sarakane/items/6e3a775577e8a134bb51

#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTest/TestHarness.h>

TEST_GROUP(TestGroup1){};
TEST(TestGroup1, Test1)
{
    STRCMP_EQUAL("hello", "world");
}

TEST(TestGroup1, Test2)
{
    LONGS_EQUAL(1, 2);
}

int main(int argv, char** argc)
{
  return CommandLineTestRunner::RunAllTests(argv, argc);
}