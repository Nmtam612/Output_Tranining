#include <iostream>

void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
    std::cout << "\n"<<&a <<"\t"<<a <<"\t" << *&a<<"\n";
    std::cout << &b <<"\t"<<b <<"\t" << *&b;
}

void fun(int a, int *b, int* &c){
    
    std::cout <<"\n\n"<< &a <<"\t"<<b << "\t" << &c;
    b=&a;
    std::cout <<"\n"<< a << "\t" << b << "\t"<< c;
}

int main(){
    int a=10;
    int *b=&a;
    int *c=b;
    std::cout<<"\n"<<&a;
    std::cout<<"\n"<<b;
    std::cout<<"\n"<<&c;
    // swap(a,c);
    fun(a,b,c);
}

