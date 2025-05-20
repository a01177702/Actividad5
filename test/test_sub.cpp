#include <gtest/gtest.h>
#include "sub.h"

TEST(SubTest, HandlesPositiveInput)
{
int resta = sub(5, 1);

EXPECT_EQ(resta, 4);
}

TEST(SubTest, HandlesZeroInput)
{
int resta = sub(0, 0);

EXPECT_EQ(resta, 0);
}

TEST(SubTest, HandlesNegativeInput)
{
int resta = sub(-6, -3);

EXPECT_EQ(resta, -3);
}