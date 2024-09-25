#include "ScalarConverter.hpp"

int main(){
    ScalarConverter::convert("0");
    ScalarConverter::convert("-1.0");
    ScalarConverter::convert("2147483648");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("-inf");
    ScalarConverter::convert("+inff");
    ScalarConverter::convert("42.0f");
    ScalarConverter::convert("32.3");


    return (0);
}