#include "mytime.h"
#include <gtest/gtest.h>
TEST(MyTime,DefConstructor)
{
   MyTime t;
   EXPECT_EQ(0,t.getmim());
   EXPECT_EQ(0,t.gethr());

}
TEST(time,abc)
{
    MyTime a1(10,5);
    MyTime a2(15,2);
    MyTime a3;
    a3=a1+a2;
    std::string ExpectedOut="25:7\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
TEST(time1,bas_hojja)
{
    MyTime a1(10,5);
    MyTime a2(5,2);
    MyTime a3;
    a3=a1-a2;
    std::string ExpectedOut="5:7\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
TEST(time3,bas_hojja)
{
    MyTime a1(10,5);
  //  MyTime a2(15,2);
    MyTime a3;
    a3=a1++;
    std::string ExpectedOut="10:5\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}

