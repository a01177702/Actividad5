#include <gtest/gtest.h>
#include "div.h"

TEST(DivTest, HandlesPositiveInput)
{
int result = divide(9, 3);

EXPECT_EQ(result, 3);
}

TEST(DivTest, HandlesZeroInput)
{
int result = divide(0, 0);

EXPECT_EQ(result, 0);
}

TEST(DivTest, HandlesNesgativeInput)
{
int result = divide(-6, -3);

EXPECT_EQ(result, 2);
}