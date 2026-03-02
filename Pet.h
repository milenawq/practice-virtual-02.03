//
// Created by Milena on 02.03.2026.
//

#ifndef PRACTICE_VIRTUAL_02_03_PET_H
#define PRACTICE_VIRTUAL_02_03_PET_H
#include "MyString.h"
#include <iostream>
using namespace std;

class Pet {
protected:
    MyString name;
public:
    Pet(const MyString& name) : name(name) {}

    virtual void Type() const = 0;
    virtual void Sound() const = 0;
    virtual void Show() const {
        cout << "Імʼя: " << name << endl;
    }



};


#endif //PRACTICE_VIRTUAL_02_03_PET_H