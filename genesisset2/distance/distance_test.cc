#include <iostream>
#include "distance.h"
#include <gtest/gtest.h>

TEST(Distance,construct1)
{
    Distance a1(23,5);
    Distance a2(76,2);
    Distance a3;
    a3=a1+a2;
    std::string ExpectedOut="99.7\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
   // EXPECT
   TEST(Distance1,construct2)
{
    Distance a1(16,5);
    Distance a2(15,2);
    Distance a3;
    a3=a1-a2;
    std::string ExpectedOut="1.3\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());

}
