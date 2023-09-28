#include <iostream>
#include "MyString.h"
#include <cstring>

using namespace std; 

class MyString {
private:
    char* str;     
    int length;    
    static int objectCount;

public:
    MyString() : str(nullptr), length(0) {
        str = new char[81];
        memset(str, '\0', 81);
        objectCount++; 
    }

    MyString(int len) : str(nullptr), length(0) {
        if (len < 1) {
            len = 1;
        }
        str = new char[len + 1];
        memset(str, '\0', len + 1);
        objectCount++; 
    }

    MyString(const char* input) : str(nullptr), length(0) {
        length = strlen(input);
        str = new char[length + 1];
        strcpy(str, input);
        objectCount++; 
    }

    ~MyString() {
        delete[] str;
        objectCount--; 
    }

    int getLength() const {
        return length;
    }

    static int getObjectCount() {
        return objectCount;
    }
};

int MyString::objectCount = 0;