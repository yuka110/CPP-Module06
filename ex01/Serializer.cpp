#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

Serializer::Serializer(Serializer& s){
    operator=(s);
}

Serializer& Serializer::operator=(const Serializer& s){
    if (this != &s)
        *this = s;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr){
    uintptr_t newPtr = reinterpret_cast<uintptr_t>(ptr);
    return (newPtr);
}

Data* Serializer::deserialize(uintptr_t raw){
    Data* newData = reinterpret_cast<Data*>(raw);
    return (newData);
}