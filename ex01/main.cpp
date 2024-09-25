#include "Serializer.hpp"

int main(){
    Data* data = new Data(42);
    std::cout << "original address: " << data << std::endl;
    uintptr_t ptr = Serializer::serialize(data);
    Data* data2 = Serializer::deserialize(ptr);
    std::cout << "address after serialization: " << data2 << std::endl;
    delete data;
    return 0;
}