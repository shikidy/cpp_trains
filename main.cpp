#include <iostream>
#include "mylibs/custom_stack.cpp"


int main(int argc, char* argv[]) {
    cintstack_t tmp(5);
    int a;
    for (int i = 0; i < 5; i++) {
        std::cin >> a;
        tmp.insert(a, i);
    }
    tmp.print();
    tmp.pop();
    tmp.print();
    tmp.insert(9);
    tmp.print();
    char * res = tmp.to_cstring();
    std::cout << res;
    tmp.print();

    return 0;
}