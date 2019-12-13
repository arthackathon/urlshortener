#include "3party/googletest/googletest/include/gtest/gtest.h"

TEST(ExampleTestGroupName, TestCase) {
  int two = 2;
  EXPECT_EQ(two + two, 4);

  EXPECT_TRUE(two - two == 0);

  EXPECT_NE(two * two, 2);

  EXPECT_GE(two, 0);
  EXPECT_GE(two, 2);
  EXPECT_GT(two, 1);

  EXPECT_LE(two, 3);
  EXPECT_LE(two, 2);
  EXPECT_LT(two, 5);
}