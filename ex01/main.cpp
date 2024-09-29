#include "Serializer.hpp"

int main(){
    Data* data = new Data(42);
    std::cout << "original address: " << data << std::endl;
    uintptr_t ptr = Serializer::serialize(data);
    Data* data2 = Serializer::deserialize(ptr);
    std::cout << "address after serialization: " << data2 << std::endl;
    delete data;

    Data* data3 = new Data(-1);
    std::cout << "original address: " << data3 << std::endl;
    uintptr_t ptr1 = Serializer::serialize(data3);
    Data* data4 = Serializer::deserialize(ptr1);
    std::cout << "address after serialization: " << data4 << std::endl;
    delete data3;
    return 0;
}