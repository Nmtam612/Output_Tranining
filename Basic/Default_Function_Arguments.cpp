#include <iostream>

int functions(int a=1, int b=2, int c=3){
    std::cout << a << "*" << b << "*"<< c << "\n" ;
    return a*b*c;
}