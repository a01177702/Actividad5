#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
    int producto = multiply(2, 3);
    EXPECT_EQ(producto, 6);
}

TEST(MulTest, HandlesZeroInput)
{
    int producto = multiply(0, 5);
    EXPECT_EQ(producto, 0);
}

TEST(MulTest, HandlesNegativeInput)
{
    int producto = multiply(-4, -2);
    EXPECT_EQ(producto, 8);
}