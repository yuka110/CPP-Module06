#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>


#define BOLD_TEXT "\033[1m"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

class ScalarConverter{
private:

public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(ScalarConverter& s);
    ScalarConverter& operator=(const ScalarConverter& s);
    void    convert(std::string input);
};


#endif