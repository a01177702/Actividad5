#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
    int producto = mul(2, 3);
    EXPECT_EQ(producto, 6);
}

TEST(MulTest, HandlesZeroInput)
{
    int producto = mul(0, 5);
    EXPECT_EQ(producto, 0);
}

TEST(MulTest, HandlesNegativeInput)
{
    int producto = mul(-4, -2);
    EXPECT_EQ(producto, 8);
}