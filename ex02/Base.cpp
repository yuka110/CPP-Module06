#include "Base.hpp"

Base::~Base() {};
/*
Downcasting: Base -> Derived 
Upcasting: Derived -> Base
if dynamic casting of reference has failed, no nullptr will be returned. So you need to catch exception.
*/

Base*   generate(void){
    srand(time(0));
    int nb = rand() % 3;
    Base* ptr;
    if (nb == 0){
        ptr = new A();
        std::cout << "A\n";
    }
    else if (nb == 1){
        ptr = new B();
        std::cout << "B\n";
    }
    else{
        ptr = new C();
        std::cout << "C\n";
    }
    return (ptr);
}

void    identify(Base* p){
    if (dynamic_cast<A*>(p)) {
        std::cout << "The class points to A" << std::endl;
        return ;
    }
    if (dynamic_cast<B*>(p)) {
        std::cout << "The class points to B" << std::endl;
        return ;
    }
    if (dynamic_cast<C*>(p))
        std::cout << "The class points to C" << std::endl;
    return ;
}

void    identify(Base& p){
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << &a << std::endl;
    }
    catch (std::bad_cast exp){
        try {
            B& b = dynamic_cast<B&>(p);
            std::cout << &b << std::endl;
        }
        catch (std::bad_cast exp){
            try {
                C& c = dynamic_cast<C&>(p);
                std::cout << &c << std::endl;
            }
            catch (std::bad_cast exp){
                std::cout << "Dynamic casting of reference failed" << std::endl;
            }
            std::cout << "The class refers to C" << std::endl;
            return ;
        }
        std::cout << "The class refers to B" << std::endl;
        return ;
    }
    std::cout << "The class refers to A" << std::endl;
    return ;
}