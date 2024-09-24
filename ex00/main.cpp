#include "ScalarConverter.hpp"

int main(){
    ScalarConverter::convert("0");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("-inf");
    ScalarConverter::convert("+inff");
    ScalarConverter::convert("42.0f");
    ScalarConverter::convert("32.3");


    return (0);
}