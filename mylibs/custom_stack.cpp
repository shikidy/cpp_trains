#ifndef __CUSTOM_STACK__CPP
#define __CUSTOM_STACK__CPP

#include <iostream>


class cintstack_t {
private:
    int* arr;
    int size;
    
public:
    cintstack_t (int size) {
        this->arr = new int[size]();
        this->size = size;
    }
    ~cintstack_t() {
        delete[] arr;
    }
    void print();
    void pop();
    void pop(int index);
    void insert(int value);
    void insert(int value, int index);
    
};

void cintstack_t::print() {
    std::cout << std::endl << "[";
    for (int i = 0; i < this->size ; i++) {
        std::cout << this->arr[i];
        if (i != this->size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

void cintstack_t::insert(int value) {
    this->insert(value, this->size-1);
}

void cintstack_t::insert(int value, int index) {
    if (index >= this->size) {
        throw std::invalid_argument("Index out of bounds");
    }
    this->arr[index] = value;

}

void cintstack_t::pop() {
   this->pop(this->size-1);
}

void cintstack_t::pop(int index) {
    if (index < 0 || index >= size) {
        throw std::invalid_argument("Index out of bounds");
    }
    this->arr[index] = 0;
}
#endif