#include <iostream>
#include <string>
#include <conio.h>

enum Days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

Days convert(const std::string& str) {
    if (str == "Monday") return Monday;
    else if (str == "Tuesday") return Tuesday;
    else if (str == "Wednesday") return Wednesday;
    else if (str == "Thursday") return Thursday;
    else if (str == "Friday") return Friday;
    else if (str == "Saturday") return Saturday;
    else if (str == "Sunday") return Sunday;

}

int main(){
    std::string str;
    std::cout << "\n Enter any day in words (like Sunday, Monday) : ";
    std::cin >> str;

    Days day = convert(str);

    switch (day) {
    case Monday: std::cout << "This is Monday" << std::endl; break;
    case Tuesday: std::cout << "This is Tuesday" << std::endl; break;
    case Wednesday: std::cout << "This is Wednesday" << std::endl; break;
    case Thursday: std::cout << "This is Thursday" << std::endl; break;
    case Friday: std::cout << "This is Friday" << std::endl; break;
    case Saturday: std::cout << "This is Saturday" << std::endl; break;
    case Sunday: std::cout << "This is Sunday" << std::endl; break;
    default: std::cout << "\n\n Inavlid Input";
    }

    _getch();
    return 0;
}