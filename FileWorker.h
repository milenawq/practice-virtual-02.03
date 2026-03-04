//
// Created by Milena on 04.03.2026.
//

#ifndef PRACTICE_VIRTUAL_02_03_FILEWORKER_H
#define PRACTICE_VIRTUAL_02_03_FILEWORKER_H
#include <iostream>
#include <fstream>
using namespace std;

class FileWorker {
public:
    virtual void Display(const char* path) {
        ifstream file(path);

        if (!file.is_open()) {
            cout << "Не вдалося відкрити файл\n";
            return;
        }

        char ch;
        while (file.get(ch)) {
            cout << ch;
        }

        file.close();
    }

    virtual ~FileWorker() {}
};


#endif //PRACTICE_VIRTUAL_02_03_FILEWORKER_H