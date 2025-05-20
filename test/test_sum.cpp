#include <gtest/gtest.h>
#include "sum.h"

TEST(SumTest, HandlesPositiveInput)
{
int suma = sum(1, 5);

EXPECT_EQ(suma, 6);
}

TEST(SumTest, HandlesZeroInput)
{
int suma = sum(0, 0);

EXPECT_EQ(suma, 0);
}

TEST(SumTest, HandlesNegativeInput)
{
int suma = sum(-6, -3);

EXPECT_EQ(suma, -9);
}