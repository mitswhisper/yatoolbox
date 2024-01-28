#include "CppUTest/TestHarness.h"
#include "SampleBuildTime.h"

TEST_GROUP(SampleBuildTime)
{
  SampleBuildTime* projectBuildTime;

  void setup()
  {
    projectBuildTime = new SampleBuildTime();
  }
  void teardown()
  {
    delete projectBuildTime;
  }
};

TEST(SampleBuildTime, Create)
{
  CHECK(0 != projectBuildTime->GetDateTime());
}

