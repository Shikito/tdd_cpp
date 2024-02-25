#include <gtest/gtest.h>
#include "Dollar.h"

TEST(MoneyTest, TestMultiplication){
    Dollar five(5);
    five.times(2);
    ASSERT_EQ(10, five.amount);
}