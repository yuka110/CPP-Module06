
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter& s){
    operator=(s);
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& s){
    if (this != &s)
        *this = s;
    return (*this);
}

void    ScalarConverter::convert(std::string input)
{
    int i = 0;
    for (i < input.size(); i++){
        if ((isdigit(c) == false|| std::strchr("-+.f", c) == nullptr))
            break ;
    }
    if (i == input.size() - 1)
        //char
    if (input == "nanf" || input.find('f') != std::string::npos)
        //float
    else if (input == "nan" || input.find('.') != std::string::npos)
        //double
    else
        //int
    
// need to convert to 4 types from here

}

int main(std::string s){
    ScalarConverter casting;
    casting.convert(s);
    return (0);
}