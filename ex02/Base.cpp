#include "Base.hpp"

/*
Downcasting: Base -> Derived 
Upcasting: Derived -> Base
if dynamic casting of reference has failed, no nullptr will be returned. So you need to catch exception.
*/

Base*   generate(void){
    int nb = rand() % 3;
    Base* ptr;
    if (nb == 0)
        ptr = new A();
    else if (nb == 1)
        ptr = new B();
    else
        ptr = new C();
    return (ptr);
}

void    identify(Base* p){
    A* a = dynamic_cast<A*>(p);
    if (a) {
        std::cout << "The class points to A" << std::endl;
        return ;
    }
    B* b = dynamic_cast<B*>(p);
    if (b) {
        std::cout << "The class points to B" << std::endl;
        return ;
    }
    C* c = dynamic_cast<C*>(p);
    if (c)
        std::cout << "The class points to C" << std::endl;
    return ;
}

void    identify(Base& p){
    try {
        A& a = dynamic_cast<A&>(p);
    }
    catch (std::bad_cast exp){
        try {
            B& b = dynamic_cast<B&>(p);
        }
        catch (std::bad_cast exp){
            try {
                C& c = dynamic_cast<C&>(p);
            }
            catch (std::bad_cast exp){
                std::cout << "Dynamic casting of reference failed" << std::endl;
            }
            std::cout << "The class points to C" << std::endl;
            return ;
        }
        std::cout << "The class points to B" << std::endl;
        return ;
    }
    std::cout << "The class points to A" << std::endl;
    return ;
}