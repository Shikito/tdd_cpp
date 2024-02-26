#include <gtest/gtest.h>
#include "Dollar.h"
#include "Franc.h"

TEST(MoneyTest, TestMultiplication){
    Dollar five(5);
    ASSERT_EQ(Dollar(10), five.times(2));

    // check five doesn't change.;
    ASSERT_EQ(Dollar(15), five.times(3));
}

TEST(MoneyTest, TestEquality){
    ASSERT_EQ(Dollar(5), Dollar(5));
    ASSERT_NE(Dollar(5), Dollar(6));
}

TEST(MoneyTest, TestFrancMultiplication){
    Franc five(5);
    ASSERT_EQ(Franc(10), five.times(2));

    // check five doesn't change.;
    ASSERT_EQ(Franc(15), five.times(3));
}