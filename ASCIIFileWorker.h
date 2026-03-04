//
// Created by Milena on 04.03.2026.
//

#ifndef PRACTICE_VIRTUAL_02_03_ASCIIFILEWORKER_H
#define PRACTICE_VIRTUAL_02_03_ASCIIFILEWORKER_H
#include <iostream>
#include <fstream>
#include "FileWorker.h"
using namespace std;

class ASCIIFileWorker : public FileWorker {
public:
    void Display(const char* path) {
        ifstream file(path);

        if (!file.is_open()) {
            cout << "Не вдалося відкрити файл\n";
            return;
        }

        char ch;
        while (file.get(ch)) {
            cout << (int)ch << " ";
        }

        file.close();
    }
};



#endif //PRACTICE_VIRTUAL_02_03_ASCIIFILEWORKER_H