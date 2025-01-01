#include "trapping_rainwater.h"

#include <gtest/gtest.h>

TEST(TrappedRainwater, DescriptionTest) {
  EXPECT_EQ(trap_rainwater({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}), 6);
  EXPECT_EQ(trap_rainwater({4, 2, 0, 3, 2, 5}), 9);
}

TEST(TrappedRainwater, NoWaterTest) {
  EXPECT_EQ(trap_rainwater({5}), 0);
  EXPECT_EQ(trap_rainwater({1, 2}), 0);
  EXPECT_EQ(trap_rainwater({1, 2, 3, 4, 5, 6, 7}), 0);
  EXPECT_EQ(trap_rainwater({1, 2, 3, 4, 3, 2, 1}), 0);
}

TEST(TrappedRainwater, BasicTests) {
  EXPECT_EQ(trap_rainwater({1, 0, 1, 0, 1, 0}), 2);
}