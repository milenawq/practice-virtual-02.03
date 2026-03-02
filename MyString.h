//
// Created by Milena on 02.03.2026.
//

#ifndef PRACTICE_VIRTUAL_02_03_MYSTRING_H
#define PRACTICE_VIRTUAL_02_03_MYSTRING_H
#include <iostream>

/*Розробити клас MyString*/

class MyString {
private:
    char* str;
    int length;

    static int count;

public:
    MyString();       // 80 символів
    MyString(int size);      // довільний розмір
    MyString(const char* str);     // ініціалізація рядком, отриманим від користувача
    MyString(const MyString& str);   // копіювання
    ~MyString();
    void Input();
    void Output() const;

    static int GetCount();

    bool MyFindStr(const char* other);  //поиск подстроки в строке
    int MyFindChr(char c) const;    // поиск символа в строке(индекс найденного символа, либо -1)
    int MyStrLen() const;   // возвращает длину строки

    MyString operator+(const MyString& str) const;
    MyString& operator+=(const MyString& str);
    MyString& operator=(const MyString& other);
    bool operator==(const MyString& other);
    bool operator<(const MyString& other);
    bool operator>(const MyString& other);

    friend std::ostream& operator<<(std::ostream& os, const MyString& s);
    friend std::istream& operator>>(std::istream& is, MyString& s);

    char& operator[](int index);
    const char& operator[](int index) const;
};

#endif //PRACTICE_VIRTUAL_02_03_MYSTRING_H