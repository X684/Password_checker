#include<iostream>
#include<string>
#include<cctype>

int main()
{
   std::string password;

std::cout << "Enter your password: " << std::endl;
std::getline(std::cin, password);

int length = password.length();
bool has_upper = false;
bool has_lower = false;
bool has_digit = false;
bool has_symbol = false;

for (char p : password) {
    if (std::isupper(p)) {
        has_upper = true;
    } else if (std::islower(p)) {
    has_lower = true;
}  else if (std::isdigit(p)) {
    has_digit = true;
}  else if (std::ispunct(p)) {
    has_symbol = true;
}
}
 
std::string strenght = (length>=8 && has_upper && has_lower && has_symbol && has_digit) ? "Your password is strong :D !" : "Your password is weak :/ ";

std::cout << strenght;

    return 0;
}