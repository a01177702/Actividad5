#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
    int producto = mul(3, 4);
    EXPECT_EQ(producto, 12);
}

