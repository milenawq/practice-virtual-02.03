//
// Created by Milena on 02.03.2026.
//
#include "MyString.h"
#include <iostream>
#include <stdexcept>
#include <cstring>
using namespace std;

int MyString::count = 0;

MyString::MyString() {
    count++;
    length = 80;
    str = new char[length + 1];
    str[0] = '\0';
}

MyString::MyString(int size) {
    count++;
    length = size;
    str = new char[size + 1];
    str[0] = '\0';
}

MyString::MyString(const char* str) {
    count++;
    this->length = strlen(str);
    this->str = new char[length + 1];
    strcpy(this->str, str);
}

MyString::MyString(const MyString& str) {
    count++;
    this->length = str.length;
    this->str = new char[length + 1];
    strcpy(this->str, str.str);
}

MyString::~MyString() {
    count--;
    delete[] str;
}

void MyString::Input() {
    cout << "Введіть рядок: ";
    cin.getline(str, length + 1);
}

void MyString::Output() const {
    cout << str << endl;
}


int MyString::GetCount() {
    return count;
}

bool MyString::MyFindStr(const char* other) {
    if (other == nullptr) {
        return false;
    }

    char* result = strstr(str, other);

    if (result == nullptr) {
        return false;
    }

    return true;
}

int MyString::MyFindChr(char c) const{
    if (str == nullptr)
        return -1;

    for (int i = 0; i < length; i++) {
        if (str[i] == c) {
            return i;
        }
    }

    return -1;
}

int MyString::MyStrLen() const {
    if (str == nullptr)
        return 0;

    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    return len;
}

MyString MyString::operator+(const MyString &str) const {
    MyString result;

    result.length = this->length + str.length;
    result.str = new char[result.length + 1];

    strcpy(result.str, this->str);
    strcat(result.str, str.str);

    return result;
}

MyString & MyString::operator+=(const MyString &str) {
    char* temp = new char[length + str.length + 1];
    strcpy(temp, this->str);
    strcat(temp, str.str);
    delete [] this->str;
    this->str = temp;
    length = length + str.length;
    return *this;
}

MyString & MyString::operator=(const MyString &other) {
    if (this == &other)
        return *this;

    delete[] str;
    length = other.length;

    if (other.str != nullptr) {
        str = new char[length + 1];
        strcpy(str, other.str);
    } else {
        str = nullptr;
        length = 0;
    }

    return *this;
}

bool MyString::operator==(const MyString &other) {
    if (length != other.length)
        return false;

    if (strcmp(this->str, other.str) == 0)
        return true;
    else
        return false;
}

bool MyString::operator<(const MyString &other) {
    if (strcmp(this->str, other.str) < 0)
        return true;
    else
        return false;
}

bool MyString::operator>(const MyString &other) {
    if (strcmp(this->str, other.str) > 0)
        return true;
    else
        return false;
}


std::ostream & operator<<(std::ostream &os, const MyString &s) {
    if (s.str)
        os << s.str;
    return os;
}

std::istream & operator>>(std::istream &is, MyString &s) {
    char buffer[1000];

    is.getline(buffer, 1000);

    delete[] s.str;

    s.length = strlen(buffer);
    s.str = new char[s.length + 1];
    strcpy(s.str, buffer);

    return is;
}

char& MyString::operator[](int index) {
    if (index < 0 || index >= length)
        throw std::out_of_range("Index out of range");

    return str[index];
}

const char& MyString::operator[](int index) const
{
    if (index < 0 || index >= length)
        throw std::out_of_range("Index out of range");

    return str[index];
}
