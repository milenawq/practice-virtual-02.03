//
// Created by Milena on 02.03.2026.
//

#ifndef PRACTICE_VIRTUAL_02_03_PARROT_H
#define PRACTICE_VIRTUAL_02_03_PARROT_H
#include "Pet.h"
#include <iostream>
using namespace std;

class Parrot : public Pet {
    public:
    Parrot(const MyString& name) : Pet(name) {}
    void Sound() const {
        cout << "Чірік!" << endl;
    }
    void Type() const {
        cout << "Це попугай" << endl;
    }
};



#endif //PRACTICE_VIRTUAL_02_03_PARROT_H