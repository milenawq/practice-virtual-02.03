//
// Created by Milena on 02.03.2026.
//

#ifndef PRACTICE_VIRTUAL_02_03_CAT_H
#define PRACTICE_VIRTUAL_02_03_CAT_H
#include "Pet.h"
#include <iostream>
using namespace std;

class Cat : public Pet {
    public:
    Cat(const MyString& name) : Pet(name) {}
    void Sound() const {
        cout << "Мяу!" << endl;
    }
    void Type() const {
        cout << "Це кіт" << endl;
    }
};



#endif //PRACTICE_VIRTUAL_02_03_CAT_H