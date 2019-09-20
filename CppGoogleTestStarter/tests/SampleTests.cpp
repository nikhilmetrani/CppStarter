#include <CppDllStarter/Sample.h>
#include <gtest/gtest.h>
#include <vector>

TEST(SampleTests, intMultiplyByTwoMethod) {
  CppDllStarter::Sample sample;
  EXPECT_EQ(sample.MultiplyByTwo(2), 4);
}

TEST(SampleTests, templateSquareMethodFloat) {
  CppDllStarter::Sample sample;
  EXPECT_EQ(sample.Square(2.5f), 6.25);
}

