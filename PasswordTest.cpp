/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, unique_characters)
{
	Password the_password;
	int a = my_password.unique_characters("aB1sOj");
	ASSERT_EQ(1, a);
}

TEST(PasswordTest, unique_characters)
{
	Password the_password;
	int a = my_password.unique_characters("  111a");
	ASSERT_EQ(1, a);
}