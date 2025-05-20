#include <gtest/gtest.h>
#include "div.h"

TEST(DivTest, HandlesPositiveInput)
{
int result = divide(9, 3);

EXPECT_EQ(result, 3);
}

TEST(DivTest, HandlesZeroInput)
{
int result = divide(-6, -3);

EXPECT_EQ(result, 2);
}