#include "Data.hpp"

Data::Data(){}

Data::Data(int number) : nb(number) {}

Data::~Data(){}

Data::Data(Data& d){
    operator=(d);
}

Data& Data::operator=(const Data& d){
    if (this != &d)
        this->nb = d.nb;
    return (*this);
}