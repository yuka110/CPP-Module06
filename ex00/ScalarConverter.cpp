
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
    if (checkpseudo(input) == true)
        convertPseudo(input);
    else if (checkchar(input) == true)
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
    for (int i = 0; i < (int)input.size(); i++){
        if (isdigit(input[i]) == false && input[i] != '-' && input[i] != '+')
            return false;
    }
    return true;
}

bool checkdouble(std::string input)
{
    if (input.find('.') != std::string::npos)
        return true;
    return false;
}

bool checkfloat(std::string input)
{
    if (input.back() == 'f')
        return true;
    return false;
}

bool checkpseudo(std::string input)
{
    if (input == "nan" || input == "nanf"
        || input == "+inff" || input == "-inff"
        || input == "+inf" || input == "-inf")
        return true;
    return false;
}

void convertPseudo(std::string input)
{
    std::cout << "char: impossible\nint: impossible\n";
    if (input == "nan" || input == "nanf")
        std::cout << "float: nanf\ndouble: nan\n";
    else{
        std::cout << "float: " << input.substr(0, 4) << "f\n";
        std::cout << "double: " << input.substr(0, 4) << "\n";
    }
}

void convertChar(std::string input)
{
    char c = static_cast<char>(input[1]);
    if (isprint(c) == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'"<< std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void convertFloat(std::string input)
{
    try {
        float f = stof(input);
        if (isprint(static_cast<char>(f)) == 0)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(f) << "'"<< std::endl;
        std::cout << "int: " << static_cast<int>(f) << std::endl;
        std::cout << "float: " << f << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
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
        double d = stod(input);
        if (isprint(static_cast<char>(d)) == 0)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(d) << "'"<< std::endl;
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << static_cast<float>(d) << std::endl;
        std::cout << "double: " << d << std::endl;
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
        if (isprint(static_cast<char>(i)) == 0)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(i) << "'"<< std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;    
    }
    catch (const std::invalid_argument & e) {
            std::cout << e.what() << std::endl;
    }
    catch (const std::out_of_range & e) {
        std::cout << e.what() << std::endl;
    }
}
