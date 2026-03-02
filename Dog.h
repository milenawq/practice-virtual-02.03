//
// Created by Milena on 02.03.2026.
//

#ifndef PRACTICE_VIRTUAL_02_03_DOG_H
#define PRACTICE_VIRTUAL_02_03_DOG_H
#include "Pet.h"
#include <iostream>
using namespace std;

class Dog : public Pet {
public:
    Dog(const MyString& name) : Pet(name) {}
    void Sound() const {
        cout << "Гав!" << endl;
    }
    void Type() const {
        cout << "Це собака" << endl;
    }
};




#endif //PRACTICE_VIRTUAL_02_03_DOG_H