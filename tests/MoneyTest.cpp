#include <gtest/gtest.h>
#include "Dollar.h"

TEST(MoneyTest, TestMultiplication){
    Dollar five(5);
    Dollar product = five.times(2);
    ASSERT_EQ(10, product.amount);

    // check five doesn't change.
    product = five.times(3);
    ASSERT_EQ(15, product.amount);
}

TEST(MoneyTest, TestEquality){
    Dollar five_1 = Dollar(5);
    Dollar five_2 = Dollar(5);
    ASSERT_TRUE(five_1.equals(five_2));

    Dollar six_1 = Dollar(6);
    ASSERT_FALSE(five_1.equals(six_1));
}