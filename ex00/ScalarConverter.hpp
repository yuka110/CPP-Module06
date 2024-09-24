#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <stdexcept>

#define BOLD_TEXT "\033[1m"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

/*A static member function can be called 
WITHOUT creating an instance of the class.
the static functions are accessed using only the class name 
and the scope resolution operator ::.

A static member function can only access static data member, 
other static member functions and any other functions from outside the class.

Static member functions have a class scope and 
they do not have access to the [this] pointer of the class.*/

class ScalarConverter{
private:

public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(ScalarConverter& s);
    ScalarConverter& operator=(const ScalarConverter& s);
    static void    convert(std::string input);
};

bool checkchar(std::string input);
bool checkint(std::string input);
bool checkdouble(std::string input);
bool checkfloat(std::string input);
bool checkpseudo(std::string input);

void convertPseudo(std::string input);
void convertChar(std::string input);
void convertInt(std::string input);
void convertDouble(std::string input);
void convertFloat(std::string input);


#endif