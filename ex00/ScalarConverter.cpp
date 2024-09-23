
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
    if (checkchar(input) == true)
        convertChar(input);
    else if (checkfloat(input) == true)
        convertFloat(input);
    else if (checkdouble(input) == true)
        convertDouble(input);
    else if (checkint(input) == true)
        convertInt(input);
    else
        std::cout << "invalid input" << std::endl;


}

bool checkchar(std::string input)
{
    if (input.size() != 3 || input[0] != '\'' || input[2] != '\'')
        return false;
    return true;
}

bool checkint(std::string input)
{
    for (int i = 0; i < input.size(); i++){
        if (isdigit(input[i]) == false && input[i] != '-' && input[i] != '+')
            return false;
    }
    return true;
}

bool checkdouble(std::string input)
{
    if (input == "nan" || input == "+inf"
    || input == "-inf" || input.find('.') != std::string::npos)
        return true;
    return false;
}

bool checkfloat(std::string input)
{
    if (input == "nanf" || input == "+inff"
        || input == "-inff" || input.back() == 'f')
        return true;
    return false;
}

void convertChar(std::string input)
{
    char c = static_cast<char>(input[1]);
    if (isprint(c) == 0)
        std::cout << "char: impossible" << std::endl;
    

}

void convertFloat(std::string input)
{
    try {
        float i = stod(input);
    }
    catch (const std::invalid_argument & e) {
            std::cout << e.what() << std::endl;
    }
    catch (const std::out_of_range & e) {
        std::cout << e.what() << std::endl;
    }


}

void convertDouble(std::string input)
{
    try {
        double i = stod(input);
    }
    catch (const std::invalid_argument & e) {
            std::cout << e.what() << std::endl;
    }
    catch (const std::out_of_range & e) {
        std::cout << e.what() << std::endl;
    }

}

void convertInt(std::string input)
{
    try {
        int i = stoi(input);
    }
    catch (const std::invalid_argument & e) {
            std::cout << e.what() << std::endl;
    }
    catch (const std::out_of_range & e) {
        std::cout << e.what() << std::endl;
    }
    if (isprint(i) == true)
        std::cout << "char: " << (char)i << std::endl;
    else
        std::cout << "char: Non displayable"
    

}
