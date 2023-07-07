#include <gtest/gtest.h>
#include "validation.hpp"

TEST(ABAABA, DUPAUDAP)
{

    EXPECT_TRUE(false);
}
TEST(getErrorMessage, CheckingErrorFunction)
{
    EXPECT_EQ("Ok", getErrorMessage(ErrorCode::Ok));
    EXPECT_EQ("Password Needs At Least Nine Characters",getErrorMessage(ErrorCode::PasswordNeedsAtLeastNineCharacters));
    EXPECT_EQ("Password Need At Least One Number", getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneNumber));
    EXPECT_EQ("Password Needs At Least One Special Character", getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter));
    EXPECT_EQ("Password Needs At Least One Uppercase Letter", getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter));
    EXPECT_EQ("Passwords Do Not Match", getErrorMessage(ErrorCode::PasswordsDoNotMatch));
}