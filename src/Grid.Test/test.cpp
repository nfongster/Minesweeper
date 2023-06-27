#include "pch.h"

TEST(TestTests, FirstTest) 
{
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(TestTests, SecondTest) 
{
	int xArray[3] { 1, 2, 3 };
	int yArray[3] { 1, 2, 3 };
	for (int i = 0; i < 3; i++) 
	{
		EXPECT_EQ(xArray[i], yArray[i]) << "The values at index " << i << " are not equal!";
	}
}