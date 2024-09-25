#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

class Data{
private:
    int nb;
public:
    Data();
    Data(int number);
    ~Data();
    Data(Data& d);
    Data& operator=(const Data& d);

};

#endif