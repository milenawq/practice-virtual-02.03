//
// Created by Milena on 02.03.2026.
//

#ifndef PRACTICE_VIRTUAL_02_03_HAMSTER_H
#define PRACTICE_VIRTUAL_02_03_HAMSTER_H
#include "Pet.h"
#include <iostream>
using namespace std;

class Hamster : public Pet {
    public:
    Hamster(const MyString& name) : Pet(name) {}
    void Sound() const {
        cout << "Пи!" << endl;
    }
    void Type() const {
        cout << "Це хомʼяк" << endl;
    }
};



#endif //PRACTICE_VIRTUAL_02_03_HAMSTER_H