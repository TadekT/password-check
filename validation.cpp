#include "validation.hpp"

std::string getErrorMessage(ErrorCode code)
{
    switch (code)
    {
    case ErrorCode::Ok:
        return "Ok";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password Needs At Least Nine Characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password Need At Least One Number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password Needs At Least One Special Character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password Needs At Least One Uppercase Letter";
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords Do Not Match";
    default:
        return "Unknow Error";
    }
}

bool doPasswordMatch(std::string const &first, std::string const &secoud)
{
    if (first.compare(secoud) == 0)
    {
        getErrorMessage(ErrorCode::Ok);
        return true;
    }
    else
    {
        getErrorMessage(ErrorCode::PasswordsDoNotMatch);
        return false;
    }
 }
