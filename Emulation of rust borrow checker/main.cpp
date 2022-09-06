#include<iostream>


template<typename T>
auto Move(T var){
    T moved = std::move(var);
    delete var;
    return moved;
}


template<typename T>
auto borrow(T addr){
    auto copied = std::move(*addr);
    return *copied;
}


template<typename T>
auto mut_borrow(T addr){
    T taken = addr;
    return taken;
}


int main(){
    int* x = new int(33);
    auto y = borrow(&x);
    auto z = mut_borrow(&x);
    **z=123;
    std::cout << *x << y << **z;
    auto xx = Move(x);

}
